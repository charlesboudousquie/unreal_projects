// Fill out your copyright notice in the Description page of Project Settings.

#include "GridDirection.h"
#include "Math/UnrealMathUtility.h"

const float sqrt_2 = sqrt(2.0f);
const short half_clock_rotation = 4;
const short max_dir_count = 8;

std::array<GridDirection, max_dir_count> GridDirection::g_directions =
{
    GridDirection{false, 0, {0,1}},         // 0 - North
    GridDirection{true, 1, {sqrt_2,sqrt_2}},         // 1 - North East
    GridDirection{false, 2, {1,0}},         // 2 - East
    GridDirection{true, 3, {sqrt_2, -sqrt_2}},         // 3 - South East
    GridDirection{false, 4, {0,-1}},         // 4 - South
    GridDirection{true, 5, {-sqrt_2,-sqrt_2}},         // 5 - South West
    GridDirection{false, 6, {-1,0}},         // 6 - West
    GridDirection{true, 7, {-sqrt_2,sqrt_2}},         // 7 - North West
};

GridDirection::GridDirection(bool p_diagonal, int p_index, FVector2D p_val) 
    : m_diagonal(p_diagonal), m_index(p_index), m_value(p_val)
{
}

 GridDirection & GridDirection::getForwardLeft()
{
     auto l_index = getDirLeft().m_index;
     return g_directions[(l_index + 1) % max_dir_count];
}

GridDirection & GridDirection::getForwardRight()
{
    int result = getDirRight().m_index - 1;
    if (result < 0)
    {
        result += max_dir_count;
    }
    return g_directions[result];
}

GridDirection & GridDirection::getDirBehind()
{
    return g_directions[(m_index + half_clock_rotation) % max_dir_count];
}

GridDirection & GridDirection::getDirBackLeft()
{
    return getDirBehind().getDirRight();
}

GridDirection & GridDirection::getDirBackRight()
{
    return getDirBehind().getDirLeft();
}

GridDirection & GridDirection::getDirLeft()
{
    short result = m_index - 2;
    if (result < 0)
    {
        result += max_dir_count;
    }
    return g_directions[result];
}

GridDirection & GridDirection::getDirRight()
{
    short result = m_index + 2;
    if (result >= max_dir_count)
    {
        result -= max_dir_count;
    }
    return g_directions[result];
}

bool GridDirection::isDiagonal() const
{
    return m_diagonal;
}

