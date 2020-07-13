// Fill out your copyright notice in the Description page of Project Settings.

#include "GridDirection.h"
#include "Math/UnrealMathUtility.h"

const float sqrt_2 = sqrt(2.0f);
const short half_clock_rotation = 4;
const short max_dir_count = 8;

const std::vector<GridDirection> GridDirection::g_directions =
{
    {0, {0,1}},         // 0 - North
    {1, {sqrt_2,sqrt_2}},         // 1 - North East
    {2, {1,0}},         // 2 - East
    {3, {sqrt_2, -sqrt_2}},         // 3 - South East
    {4, {0,-1}},         // 4 - South
    {5, {-sqrt_2,-sqrt_2}},         // 5 - South West
    {6, {-sqrt_2,0}},         // 6 - West
    {7, {-sqrt_2,sqrt_2}},         // 7 - North West
};

GridDirection::GridDirection(int p_index, FVector2D p_val) : m_index(p_index), m_value(p_val)
{
}

//GridDirection::operator FVector2D()
//{
//    return g_directions[m_index];
//}

std::pair<GridDirection, GridDirection> GridDirection::getRel_NW_NE_dirs()
{
    return { getForwardLeft(), getForwardRight() };
}

const GridDirection & GridDirection::getForwardLeft()const
{
    return g_directions[(getDirLeft().m_index + 1) % max_dir_count];
}

const GridDirection & GridDirection::getForwardRight()const
{
    int result = getDirRight().m_index - 1;
    if (result < 0)
    {
        result += max_dir_count;
    }
    return g_directions[result];
}

const GridDirection & GridDirection::getDirBehind()const
{
    return g_directions[(m_index + half_clock_rotation) % max_dir_count];
}

const GridDirection & GridDirection::getDirBackLeft()const
{
    return getDirBehind().getDirRight();
}

const GridDirection & GridDirection::getDirBackRight()const
{
    return getDirBehind().getDirLeft();
}

const GridDirection & GridDirection::getDirLeft()const
{
    short result = m_index - 2;
    if (result < 0)
    {
        result += max_dir_count;
    }
    return g_directions[result];
}

const GridDirection & GridDirection::getDirRight()const
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
    return FMath::IsNearlyEqual(std::abs(m_value.X), sqrt_2) ||
        FMath::IsNearlyEqual(std::abs(m_value.Y), sqrt_2);
}

