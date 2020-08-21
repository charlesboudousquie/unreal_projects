// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include <queue>
#include <vector>
#include <unordered_map>

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

    Path getPath(EO_Node* p_goal, EO_Node* p_start);

    Pos getPos(EO_Node* p_node);// { return p_node->m_box.GetCenter(); }

public:

    // Sets default values for this component's properties
    UOctree_AStar();


    Path solve(Efficient_Octree* p_tree, EO_Node* p_start, EO_Node* p_goal);












protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
