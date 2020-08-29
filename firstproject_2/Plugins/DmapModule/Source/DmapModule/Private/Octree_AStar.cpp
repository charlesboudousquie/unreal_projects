// Fill out your copyright notice in the Description page of Project Settings.


#include "Octree_AStar.h"
#include <cassert>
#include "UpdateablePriorityQueue.h"
#include "Efficient_Octree.h"
#include "EO_Node.hpp"

// Sets default values for this component's properties
UOctree_AStar::UOctree_AStar()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;
    m_frontier = new UpdateablePriorityQueue<Node>();
    // ...
}


// Called when the game starts
void UOctree_AStar::BeginPlay()
{
    Super::BeginPlay();

    // ...

}


// Called every frame
void UOctree_AStar::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // ...
}


UOctree_AStar::Node UOctree_AStar::ConstructNode(const Node& p_current, EO_Node* p_neighbor)
{
    Node newNode;
    // get g cost aka old g cost plus dist between us and neighbor
    newNode.g = dist(p_current.m_id, p_neighbor) + p_current.g;
    // get h cost
    newNode.h = euclidean(p_neighbor);
    // set f cost
    newNode.f = newNode.g + newNode.h;

    newNode.parent = p_current.m_id;
    newNode.m_id = p_neighbor;

    return newNode;
}

float UOctree_AStar::dist(EO_Node * p_node_A, EO_Node * p_node_B)
{
    return FVector::Distance(p_node_A->m_box.GetCenter(), p_node_B->m_box.GetCenter());
}

void UOctree_AStar::processNeighbor(const Node& p_current, EO_Node* p_neighbor)
{

    // create "Node" to represent the cost of this neighbor
    Node newNode = ConstructNode(p_current, p_neighbor);

    // if we have not seen it before simply add it to node list
    // and add to frontier
    if (m_node_list.find(p_neighbor) == m_node_list.end())
    {
        m_node_list[p_neighbor] = newNode;
        m_frontier->updateOrPush(newNode);
    }

    // else if its better then add it to frontier
    else if (newNode.f < m_node_list.at(p_neighbor).f)
    {
        // update node list for better version of ndoe
        m_node_list.at(p_neighbor) = newNode;
        m_frontier->updateOrPush(newNode);
    }

}

float UOctree_AStar::euclidean(EO_Node* p_node)
{
    return FVector::Dist(getPos(p_node), m_goal);
}

void UOctree_AStar::setup(Efficient_Octree* p_tree, EO_Node* p_start, EO_Node* p_goal)
{
    if (!p_start || !p_goal) { return; }
    assert(start != goal);
    m_start = getPos(p_start); m_start_ptr = p_start;
    m_goal = getPos(p_goal); m_end_ptr = p_goal;
    m_tree = p_tree;
    m_frontier->clear();
    m_done = false;

    Node startNode;
    startNode.g = 0;
    startNode.h = euclidean(p_start);
    startNode.f = startNode.h;
    startNode.m_id = p_start;
    startNode.parent = nullptr;
    // put node on queue
    m_frontier->updateOrPush(startNode);
    m_node_list[startNode.m_id] = startNode; // not sure about this
}

UOctree_AStar::Path UOctree_AStar::solve(Efficient_Octree* p_tree, EO_Node* p_start, EO_Node* p_goal)
{
    
    setup(p_tree, p_start, p_goal);
    while (!m_frontier->isEmpty() && !m_done)
    {
        incrementAlgorithmLoop();
    }

    // if success then return
    if (m_done) { return getPath(); }

    // no path found
    return {};

}

void UOctree_AStar::incrementAlgorithmLoop()
{
    if (!m_frontier->isEmpty() && !m_done)
    {
        m_done = false;

        auto top = m_frontier->top(); m_frontier->pop();

        if (getPos(top.m_id) == m_goal)
        {
            m_done = true;
            return;
        }

        auto neighbors = m_tree->getNeighbors(top.m_id);

        for (auto& neighbor : neighbors)
        {
            processNeighbor(top, neighbor);
        }
    }
    
}

UOctree_AStar::Path UOctree_AStar::getPath()
{
    // assert that beginning of path does not have a parent
    //assert(m_node_list.find(m_start_ptr)->second.parent == nullptr);


    Path l_path;
    // start at the end
    Node current = m_node_list.at(m_end_ptr);

    // while we have not reached the beginning of the path
    while (current.parent)
    {
        assert(std::find(l_path.begin(), l_path.end(), current.m_id) == l_path.end());
        l_path.push_back(current.m_id);
        current = m_node_list.at(current.parent);
    }
    l_path.push_back(m_start_ptr);

    std::reverse(l_path.begin(), l_path.end());
    return l_path;
}

UOctree_AStar::Pos UOctree_AStar::getPos(EO_Node* p_node)
{
    // will the center of the nodes always be whole numbers?
    return p_node->m_box.GetCenter();
}