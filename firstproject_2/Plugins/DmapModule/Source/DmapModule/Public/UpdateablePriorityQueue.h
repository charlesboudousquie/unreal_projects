// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridNode.h"
#include <vector>
#include <set>
#include <map>

//GridNode

/**
 * 
 */
//template <typename T>
class DMAPMODULE_API UpdateablePriorityQueue
{

    typedef GridNode* ID;
    typedef int Q_POS;
    typedef TArray<TArray<GridNode>> GRID;

    GRID* m_grid;
    

    std::vector<ID> m_queue;
    std::map<ID, Q_POS> m_register; // id, position in queue

    // NOTE: registry does not care about value,
    // it only cares who you are talking about and where
    // that person is.

    int GetParent(int i) { return (i - 1) / 2; }

    // to get index of left child of node at index i 
    int Left(int i) { return (2 * i + 1); }

    // to get index of right child of node at index i 
    int Right(int i) { return (2 * i + 2); }

    // get value of Point specified by id
    float GetVal(ID p_id);// { return 0; }// return m_points[i].value;

    int GetValOnQueue(int p_queue_index) { return GetVal(m_queue[p_queue_index]); }

    bool pointInQueue(ID id);

    // swap 2 elements in queue
    void my_swap(Q_POS index_a, Q_POS index_b);

    void bubbleUp(int current);
    void bubbleDown(int parent);


public:

    bool isEmpty() { return m_queue.empty(); }

    // clear queue and register
    void clear();

    GRID& getGrid();
    // pointer to grid that queue uses
    void setGrid(GRID* p_grid) { m_grid = p_grid; }

    // either updates existing item on queue or
    // adds it to queue
    void updateOrPush(ID new_point);
    ID top();
    void pop();
	UpdateablePriorityQueue();
	~UpdateablePriorityQueue();



};
