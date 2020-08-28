// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include <queue>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include <cstdint>
// /Engine/Plugins/Experimental/GeometryProcessing/Source/GeometricObjects/Public/Util/IndexPriorityQueue.h
//#include "geometr
//#include "Util/IndexPriorityQueue.h"
template <typename T>
class UpdateablePriorityQueue;
class Efficient_Octree;
struct EO_Node;

#include "Octree_AStar.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UOctree_AStar : public UActorComponent
{
	GENERATED_BODY()

public:

    struct Node
    {
        EO_Node* m_id{ nullptr };
        float f{ -1 }, g{ -1 }, h{ -1 };
        Node* parent{ nullptr };

        bool operator()(const Node& lhs, const Node& rhs) const { return lhs.f < rhs.f; }
        bool operator<(const Node& rhs) const { return this->f < rhs.f; }

    };

private:

    typedef FVector Pos;
    typedef std::vector<EO_Node*> Path;

    // list of nodes found
    std::unordered_map<EO_Node*, Node> m_node_list;

    /*TArray<EO_Node*> m_neighbors_recently_added;
    std::unordered_set<EO_Node*> m_all_neighbors_found;*/
    bool m_done{ false };
    EO_Node* m_start_ptr;
    EO_Node* m_end_ptr;
    Pos m_start;
    Pos m_goal;
    Efficient_Octree* m_tree;

    // nodes to 
    UpdateablePriorityQueue<Node>* m_frontier;

    // heuristic
    float euclidean(EO_Node* p_node);

    float dist(EO_Node* p_node_A, EO_Node* p_node_B);

    void processNeighbor(Node* p_current, EO_Node* p_neighbor);
    Node ConstructNode(Node* p_current, EO_Node* p_neighbor);


    Pos getPos(EO_Node* p_node);// { return p_node->m_box.GetCenter(); }

public:

    // Sets default values for this component's properties
    UOctree_AStar();

    const std::unordered_map<EO_Node*, Node>& getNodeList() { return m_node_list; }
    const UpdateablePriorityQueue<Node>* getFrontier() { return m_frontier; }

    // do 1 iteration of the astar loop, returns neighbors that were added to the queue
    void incrementAlgorithmLoop();
    bool isDone() { return m_done; }
    Path getPath();



    void setup(Efficient_Octree* p_tree, EO_Node* p_start, EO_Node* p_goal);

    Path solve(Efficient_Octree* p_tree, EO_Node* p_start, EO_Node* p_goal);












protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
