// Fill out your copyright notice in the Description page of Project Settings.

#include "UpdateablePriorityQueue.h"

#include <iostream>
#include <cassert>

UpdateablePriorityQueue::UpdateablePriorityQueue()
{
}

UpdateablePriorityQueue::~UpdateablePriorityQueue()
{
}



void UpdateablePriorityQueue::clear()
{
    m_queue.clear();
    m_register.clear();
}

UpdateablePriorityQueue::GRID& UpdateablePriorityQueue::getGrid()
{
    return *m_grid;
}

float UpdateablePriorityQueue::GetVal(ID p_id)
{
    return p_id->f;
}

bool UpdateablePriorityQueue::pointInQueue(ID id)
{
    return m_register.find(id) != m_register.end();
}

// swap 2 elements in queue
void UpdateablePriorityQueue::my_swap(Q_POS index_a, Q_POS index_b)
{
    ID a_id = m_queue[index_a];
    ID b_id = m_queue[index_b];
    std::swap(m_queue[index_a], m_queue[index_b]);
    m_register[a_id] = index_b;
    m_register[b_id] = index_a;
}

void UpdateablePriorityQueue::bubbleUp(int current)
{
    while (current > 0)
    {
        int parent = GetParent(current);
        // if parent is smaller then we are done
        if (GetValOnQueue(parent) < GetValOnQueue(current))
        {
            //std::cout << "Breaking with parent: " << parent << " and current: " << current << "\n";

            break;
        }


        //std::cout << "BEFORE SWAP\n";
        //std::cout << "Current: " << current << "\n";
        //std::cout << "Parent: " << parent << "\n";
        //printIDs();
        my_swap(current, parent);
        //printIDs();
        //std::cout << "After SWAP\n";
        current = parent;
    }
}

void UpdateablePriorityQueue::bubbleDown(int parent)
{
    // get size of queue
    const int size = m_queue.size();
    while (true)
    {
        int l = Left(parent);
        int r = Right(parent);

        int smallest = parent;
        if (l < size && GetValOnQueue(l) < GetValOnQueue(parent))
        {
            smallest = l;
        }
        if (r < size && GetValOnQueue(r) < GetValOnQueue(smallest))
        {
            smallest = r;
        }

        // if parent is sallest then we are done
        if (smallest == parent)
        {
            break;
        }

        my_swap(parent, smallest);
        parent = smallest;

    }
}

void UpdateablePriorityQueue::updateOrPush(ID new_point)
{
    // gets value of point on the grid given to us by the JPS_Solver
    int new_value = GetVal(new_point);

    // if value is in queue
    if (pointInQueue(new_point))
    {
        //std::cout << "found duplicate: " << new_point.id << " " << new_value << "\n";

        // get position of node that will be changed
        Q_POS pos = m_register.at(new_point);
        //int old_value = GetVal(pos);

        // assume we always bubble up because the JPS_Solver
        // never adds a worse node to the queue
        assert(new_value < old_value);
        bubbleUp(pos);

        //// if cheaper
        //if (new_value < old_value)
        //{
        //    //heap_bubble_up(heap, node);
        //    bubbleUp(pos);
        //}
        //else if (new_value > old_value)
        //{
        //    //heap_bubble_down(heap, node);
        //    bubbleDown(pos);
        //}

    }
    else // this is a new element
    {
        // append to queue
        m_queue.push_back(new_point);
        // position of item in queue is at the end (duh)
        m_register[new_point] = m_queue.size() - 1;
        bubbleUp(m_queue.size() - 1);
    }

    //printIDs();

}

UpdateablePriorityQueue::ID UpdateablePriorityQueue::top()
{
    return m_queue[0];
}

void UpdateablePriorityQueue::pop()
{
    ID root = top();

    //Remove the root node.
    //Move the value in the last index of the array (the last leaf in the lowest level of the tree) to the root position (index 0 in the array). The only violation of the heap is at the root.
    //Decrease the array size by 1.

    my_swap(0, m_queue.size() - 1);
    m_queue.pop_back();
    m_register.erase(root);
    //Perform BubbleDown operation on the root. This will fix all violations of the heap.
    bubbleDown(0);
}


