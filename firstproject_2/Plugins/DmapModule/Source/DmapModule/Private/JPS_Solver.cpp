// Fill out your copyright notice in the Description page of Project Settings.

#include "JPS_Solver.h"
#include <vector>

GridNode JPS_Solver::g_invalid_node
{
 false,
 false,
 false,
-1.0f, -1.0f, -1.0f,
nullptr,
{-1,-1} };

JPS_Solver::GridPath JPS_Solver::solve(GridPos start, GridPos goal)
{

    this->clearState();
    m_start = start;
    m_goal = goal;

    // add node to frontier
    m_frontier.push(&getNode(start));

    // while there is stuff on the frontier
    while (m_frontier.empty() == false)
    {

        // get top and pop
        auto top = m_frontier.top();
        m_frontier.pop();

        auto successors = findSuccessors(top->m_pos);


    }

    return getPath(start, goal);

}

void JPS_Solver::clearState()
{
    m_frontier = {};
    m_start = m_goal = GridPos::NoneValue;
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

bool JPS_Solver::hasForcedNeighbor(const GridNode & p_node, GridDirection & p_dir)
{
    auto our_pos = p_node.m_pos;

    // given some direction, retrieve node nieghbor by going in that unit direction
    // and checking if it is in grid and valid
    auto isVal = [&](const GridDirection& dir)
    {
        return isValid(dir + our_pos);
    };

    auto Left = isVal(p_dir.getDirLeft());
    auto forwardLeft = isVal(p_dir.getForwardLeft());

    auto Right = isVal(p_dir.getDirRight());
    auto forwardRight = isVal(p_dir.getForwardRight());

    // if diagonally
    if (p_dir.isDiagonal())
    {

        auto backLeft = isVal(p_dir.getDirBackLeft());

        // if back left is wall but left is not and forward left is also not a wall
        if (!backLeft && Left && forwardLeft)
        {
            return true;
        }

        auto backRight = isVal(p_dir.getDirBackRight());

        // if back right is wall but right is not and forward right is also not a wall
        if (!backRight && Right && forwardRight)
        {
            return true;
        }
    }
    // horizontal or diagonal
    else
    {
        auto forward = isVal(p_dir);

        if (forward)
        {
            // if left is wall but forward left != wall
            if (!Left && forwardLeft)
            {
                return true;
            }

            // if Right is wall but forward Right != wall
            if (!Right && forwardRight)
            {
                return true;
            }
        }
    }

    // could not find any forced neighbors
    return false;
}

GridNode& JPS_Solver::getNode(const GridPos & p_pos)
{
    return m_grid[p_pos.X][p_pos.Y];
}

JPS_Solver::GridPath JPS_Solver::getPath(GridPos p_start, GridPos p_goal)
{
    GridPath l_path;

    auto current = p_goal;

    while (current != p_start)
    {
        l_path.push_back(current);
        current = getNode(current).m_parent->m_pos;
    }

    std::reverse(l_path.begin(), l_path.end());
    return l_path;

}

TArray<GridNode> JPS_Solver::findSuccessors(GridPos m_current)
{
    //Algorithm 1 Identify Successors
    //Require : x: current node, s : start, g : goal
    //    1 : successors(x) ← ∅
    TArray<GridNode> l_successors;
    //    2 : neighbours(x) ← prune(x, neighbours(x))
    TArray<GridPos> l_neighbors = getNeighbors(m_current);
    prune(m_current, l_neighbors);
    //    3 : for all n ∈ neighbours(x) do
    for (const auto& neighbor_pos : l_neighbors)
    {
        auto& neighbor = getNode(neighbor_pos);
        if (neighbor.m_closed == false)
        {
            //    4 : n ← jump(x, direction(x, n), s, g)
            auto n = jump(m_current, GridDirection::getDirection(m_current, neighbor_pos));
            //    5 : add n to successors(x)
            if (isValid(n.m_pos))
            {
                l_successors.Add(n);
            }
        }

    }

    //    6 : return successors(x)
    return l_successors;
}

TArray<JPS_Solver::GridPos> JPS_Solver::getNeighbors(const GridPos & p_point)
{

    TArray<GridPos> l_neighbors;

    // neighbor positions
    TArray<GridPos> positions
    {
        p_point + GridPos{0,1},    // top          0
        p_point + GridPos{1,1},    // top right     1
        p_point + GridPos{1,0},    // right          2
        p_point + GridPos{1,-1},   // bottom right    3
        p_point + GridPos{0,-1},   // bottom         4
        p_point + GridPos{-1,-1},  // bottom left     5
        p_point + GridPos{-1,0},   // left           6
        p_point + GridPos{-1,1}    // top left       7
    };

    // if no parent exists then we use all of the neighbors
    if (getNode(p_point).m_parent == nullptr)
    {
        for (auto pos : positions)
        {
            if (isValid(pos))
            {
                l_neighbors.Add(pos);
            }
        }
    }
    else
    {
        // check if valid, if so then add
        auto checkPos = [&](int index)
        {
            return isValid(positions[index]);
        };

        auto checkAndAdd = [&](int index)
        {
            if (checkPos(index))
            {
                l_neighbors.Add(positions[index]);
            }
        };

        // vertical and horizontal
        checkAndAdd(0); // top
        checkAndAdd(2); // right
        checkAndAdd(4); // down
        checkAndAdd(6); // left

        auto checkAndAddDiag = [&](int p_left_adjacent, int p_dir, int p_right_adjacent)
        {
            if (checkPos(p_dir) && (checkPos(p_left_adjacent) || checkPos(p_right_adjacent)))
            {
                l_neighbors.Add(positions[p_dir]);
            }
        };

        // diagonal
        checkAndAddDiag(0, 1, 2); // top right
        checkAndAddDiag(2, 3, 4); // bottom right
        checkAndAddDiag(4, 5, 6); // bottom left
        checkAndAddDiag(6, 7, 0); // top left

    }


    return l_neighbors;

}

void JPS_Solver::prune(GridPos p_current, TArray<GridPos>& p_neighbors)
{

}

GridNode& JPS_Solver::jump(GridPos p_current, GridDirection& p_dir)
{

    //Require: x: initial node,
    //    d : direction, s : start, g : goal
    //    1 : n ← step(x, d)
    auto& n = step(p_current, p_dir);
    //    2 : if n is an obstacle or is outside the grid then
    if (isValid(n.m_pos) == false)
    {
        //    3 :       return null
        return g_invalid_node;
    }
    //    4 : if n = g then
    if (n.m_pos == m_goal)
    {
        //    5 :       return n
        return n;
    }
    //    6 : if ∃ n' ∈ neighbours(n) s.t. n' is forced then    
    if (hasForcedNeighbor(n, p_dir))
    {
        //    7 :       return n
        return n;
    }
    //    8 : if d is diagonal then
    if (p_dir.isDiagonal())
    {
        //    9 :       for all i ∈{ 1, 2 } do
        //    10 :      if jump(n, di, s, g) is not null then
        //    11 :              return n
        if (isValid(jump(n.m_pos, p_dir.getForwardLeft()).m_pos))
        {
            return n;
        }
        if (isValid(jump(n.m_pos, p_dir.getForwardRight()).m_pos))
        {
            return n;
        }

    }

    //    12 : return jump(n, d, s, g)
    return jump(n.m_pos, p_dir);
}

GridNode& JPS_Solver::step(GridPos p_current, GridDirection & p_dir)
{
    auto newPos = p_current + p_dir;
    return getNode(newPos);
}
















