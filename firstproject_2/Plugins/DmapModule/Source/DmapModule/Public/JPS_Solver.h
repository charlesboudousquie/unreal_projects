// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/IntPoint.h"
#include "Math/Vector2D.h"
#include <list>
#include <vector>
#include <queue>
#include <unordered_set>

#include "GridDirection.h"

struct GridNode
{
    bool m_isWall = false;
    bool m_opened = false;
    bool m_closed = false;

    float g = -1.0f, f = -1.0f, h = -1.0f;

    GridNode* m_parent = nullptr;
    FIntPoint m_pos{-1,-1}; //row, col
};

struct GridComparator
{
    bool operator()(const GridNode* lhs, const GridNode* rhs)
    {
        return rhs->f < lhs->f;
    }
};

class DMAPMODULE_API JPS_Solver
{

    typedef FIntPoint GridPos;
    typedef std::vector<GridPos> GridPath;

    static GridNode g_invalid_node;

    GridPos m_start, m_goal;

    TArray<TArray<GridNode>> m_grid; // row,col

    // frontier
    std::priority_queue<GridNode*, std::vector<GridNode*>, GridComparator> m_frontier;

    // clears frontier and visited node list
    void clearState();

    // if within grid and not a wall
    bool isValid(const GridPos& p_pos);
    bool withinGrid(const GridPos& p_pos);
    bool hasForcedNeighbor(const GridNode& p_node, GridDirection& p_dir);

    GridNode& getNode(const GridPos& p_pos);

    GridPath getPath(GridPos p_start, GridPos p_goal);

    TArray<GridNode> findSuccessors(GridPos m_current);
    TArray<GridPos> getNeighbors(const GridPos& p_point);
    void prune(GridPos p_current, TArray<GridPos>& p_neighbors);
    GridNode& jump(GridPos p_current, GridDirection& p_dir);//(x, direction(x, n), s, g)
    GridNode& step(GridPos p_current, GridDirection& p_dir);


public:

    GridPath solve(GridPos start, GridPos goal);



};