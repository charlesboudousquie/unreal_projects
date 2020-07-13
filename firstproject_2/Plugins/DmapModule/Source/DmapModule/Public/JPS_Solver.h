// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/IntPoint.h"
#include "Math/Vector2D.h"
#include <list>
#include <vector>

#include "GridDirection.h"

struct GridNode
{
    bool m_isWall = false;
    bool m_opened = false;
    bool m_closed = false;

    float g, f, h;

    FIntPoint m_pos; //row, col
};

class DMAPMODULE_API JPS_Solver
{

    static GridNode g_invalid_node;

    TArray<TArray<GridNode>> m_grid; // row,col

    typedef std::list<GridNode> GridPath;
    //typedef FVector2D Direction;
    typedef FIntPoint GridPos;


    // if within grid and not a wall
    bool isValid(const GridPos& p_pos);
    bool withinGrid(const GridPos& p_pos);
    bool hasForcedNeighbor(const GridNode& p_node);

    GridNode& getNode(const GridPos& p_pos);



    TArray<GridNode> findSuccessors(GridPos m_current, GridPos m_start, GridPos m_goal);
    TArray<GridPos> getNeighbors(const GridPos& p_point, const GridPos& p_parent);
    void prune(GridPos p_current, TArray<GridPos>& p_neighbors);
    GridNode jump(GridPos p_current, GridDirection p_dir, GridPos p_start, GridPos p_goal);//(x, direction(x, n), s, g)
    GridDirection getDirection(GridPos p_current, GridPos p_next);
    GridNode step(GridPos p_current, GridDirection p_dir);


public:

    GridPath getPath(GridPos start, GridPos goal);



};