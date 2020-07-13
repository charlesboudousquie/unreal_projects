// Fill out your copyright notice in the Description page of Project Settings.

#include "JPS_Solver.h"
#include <vector>

GridNode JPS_Solver::g_invalid_node
{
 false,
 false,
 false,
-1.0f, -1.0f, -1.0f,
{-1.0f,-1.0f} };

JPS_Solver::GridPath JPS_Solver::getPath(GridPos start, GridPos goal)
{




}

bool JPS_Solver::isValid(const GridPos & p_pos)
{
    return withinGrid(p_pos) && (getNode(p_pos).m_isWall == false);
}

bool JPS_Solver::withinGrid(const GridPos & p_pos)
{
    return (p_pos.X < m_grid.Num()) && // row
        (p_pos.Y < m_grid[0].Num()) &&  // col
        (p_pos.X >= 0) &&
        (p_pos.Y >= 0);
}

GridNode& JPS_Solver::getNode(const GridPos & p_pos)
{
    return m_grid[p_pos.X][p_pos.Y];
}

TArray<GridNode> JPS_Solver::findSuccessors(GridPos m_current, GridPos m_start, GridPos m_goal)
{
    //Algorithm 1 Identify Successors
    //Require : x: current node, s : start, g : goal
    //    1 : successors(x) ← ∅
    TArray<GridNode> l_successors;
    //    2 : neighbours(x) ← prune(x, neighbours(x))
    TArray<GridNode> l_neighbors;
    prune(m_current, getNeighbors(m_current));
    //    3 : for all n ∈ neighbours(x) do
    for (const auto& neighbor : l_neighbors)
    {
        //    4 : n ← jump(x, direction(x, n), s, g)
        auto n = jump(m_current, getDirection(m_current, neighbor.m_pos), m_start, m_goal);
        //    5 : add n to successors(x)
        if (isValid(n.m_pos))
        {
            l_successors.Add(n);
        }
    }

    //    6 : return successors(x)
    return l_successors;
}

TArray<JPS_Solver::GridPos> JPS_Solver::getNeighbors(const GridPos & p_point, const GridPos & p_parent)
{

    TArray<GridPos> l_neighbors;

    // front, 

    // front right
    // right

    // back right
    // back
    // back left
    

    // left
    // front left


    return l_neighbors;

}

GridNode JPS_Solver::jump(GridPos p_current, GridDirection p_dir, GridPos p_start, GridPos p_goal)
{

    //Require: x: initial node,
    //    d : direction, s : start, g : goal
    //    1 : n ← step(x, d)
    auto n = step(p_current, p_dir);
    //    2 : if n is an obstacle or is outside the grid then
    if (isValid(n.m_pos) == false)
    {
        //    3 :       return null
        return g_invalid_node;
    }
    //    4 : if n = g then
    if (n.m_pos == p_goal)
    {
        //    5 :       return n
        return n;
    }
    //    6 : if ∃ n' ∈ neighbours(n) s.t. n' is forced then    
    if (hasForcedNeighbor(n))
    {
        //    7 :       return n
        return n;
    }
    //    8 : if d is diagonal then
    if (p_dir.isDiagonal())
    {
        //    9 :       for all i ∈{ 1, 2 } do
        auto dirs = p_dir.getRel_NW_NE_dirs();

        //    10 :      if jump(n, di, s, g) is not null then
        //    11 :              return n
        if (isValid(jump(n.m_pos, dirs.first, p_start, p_goal).m_pos))
        {
            return n;
        }
        if (isValid(jump(n.m_pos, dirs.second, p_start, p_goal).m_pos))
        {
            return n;
        }
       
        
        
    }

    //    12 : return jump(n, d, s, g)
    return jump(n.m_pos, p_dir, p_start, p_goal);
}
















