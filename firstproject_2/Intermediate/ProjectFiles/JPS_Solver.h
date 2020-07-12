#pragma once

#include "Math/IntPoint.h"
#include "Math/Vector2D.h"
#include <list>
#include <vector>



struct GridNode
{
    bool m_isWall = false;
    bool m_opened = false;
    bool m_closed = false;
    float g, f, h;

    FIntPoint m_pos;
};

class JPS_Solver
{
    TArray<TArray<GridNode>> m_grid;

    typedef std::list<GridNode> GridPath;
    typedef FVector2D Direction;
    typedef FIntPoint GridPos;
    static const std::vector<JPS_Solver::Direction> g_directions;

    TArray<GridNode> findSuccessors(GridPos m_current, GridPos m_start, GridPos m_goal);
    TArray<FIntPoint> getNeighbors(const FIntPoint& p_point);
    void prune(GridPos p_current, TArray<GridPos>& p_neighbors);
    GridNode jump(GridPos p_current, Direction p_dir, GridPos p_start, GridPos p_goal);//(x, direction(x, n), s, g)
    Direction getDirection(FIntPoint p_current, FIntPoint p_next);



public:

    GridPath getPath(FIntPoint start, FIntPoint goal);



};