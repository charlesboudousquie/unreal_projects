#include "JPS_Solver.h"
#include <vector>

const float sqrt_2 = sqrt(2.0f);

const std::vector<JPS_Solver::Direction> JPS_Solver::g_directions =
{
    {0,1},         // 0 - North
    {sqrt_2,sqrt_2},         // 1 - North East
    {1,0},         // 2 - East
    {sqrt_2, -sqrt_2},         // 3 - South East
    {0,-1},         // 4 - South
    {-sqrt_2,-sqrt_2},         // 5 - South West
    {-sqrt_2,0},         // 6 - West
    {-sqrt_2,sqrt_2},         // 7 - North West
};

JPS_Solver::GridPath JPS_Solver::getPath(GridPos start, GridPos goal)
{




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
    for (auto neighbor : l_neighbors)
    {
        //    4 : n ← jump(x, direction(x, n), s, g)
        auto n = jump(m_current, getDirection(m_current, neighbor.m_pos), m_start, m_goal);
        //    5 : add n to successors(x)
        l_successors.Add(n);
    }

//    6 : return successors(x)
    return l_successors;
}

GridNode JPS_Solver::jump(GridPos p_current, Direction p_dir, GridPos p_start, GridPos p_goal)
{

//Require: x: initial node,
//    d : direction, s : start, g : goal
//    1 : n ← step(x, d)
//    2 : if n is an obstacle or is outside the grid then
//    3 :       return null
//    4 : if n = g then
//    5 :       return n
//    6 : if ∃ n ∈ neighbours(n) s.t.n is forced then
//    7 :       return n
//    8 : if d is diagonal then
//    9 :       for all i ∈{ 1, 2 } do
//    10 :      if jump(n, di, s, g) is not null then
//    11 :              return n
//    12 : return jump(n, d, s, g)

}


