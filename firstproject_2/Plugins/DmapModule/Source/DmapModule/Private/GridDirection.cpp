// Fill out your copyright notice in the Description page of Project Settings.

#include "GridDirection.h"

#include <algorithm>
#include <cstdint>

#include "Math/UnrealMathUtility.h"

//const float sqrt_2 = sqrt(2.0f);
//const short half_clock_rotation = 4;
//const short max_dir_count = 8;

//std::array<GridDirection, max_dir_count> GridDirection::g_directions =
//{
//    GridDirection{false, 0, {0,1}},         // 0 - North
//    GridDirection{true, 1, {sqrt_2,sqrt_2}},         // 1 - North East
//    GridDirection{false, 2, {1,0}},         // 2 - East
//    GridDirection{true, 3, {sqrt_2, -sqrt_2}},         // 3 - South East
//    GridDirection{false, 4, {0,-1}},         // 4 - South
//    GridDirection{true, 5, {-sqrt_2,-sqrt_2}},         // 5 - South West
//    GridDirection{false, 6, {-1,0}},         // 6 - West
//    GridDirection{true, 7, {-sqrt_2,sqrt_2}},         // 7 - North West
//};

//enum class DirEnum
//{
//    North       =       0,
//    North_East  =       1,
//    East        =       2,
//    South_East  =       3,
//    South       =       4,
//    South_West  =       5,
//    West        =       6,
//    North_West  =       7
//};

//std::array<GridDirection, max_dir_count> GridDirection::g_directions =
//{
//    GridDirection{false, 0, {0,1}},         // 0 - North
//    GridDirection{true, 1, {1,1}},         // 1 - North East
//    GridDirection{false, 2, {1,0}},         // 2 - East
//    GridDirection{true, 3, {1, -1}},         // 3 - South East
//    GridDirection{false, 4, {0,-1}},         // 4 - South
//    GridDirection{true, 5, {-1,-1}},         // 5 - South West
//    GridDirection{false, 6, {-1,0}},         // 6 - West
//    GridDirection{true, 7, {-1,1}},         // 7 - North West
//};

FIntPoint GridDirection::getDirection(FIntPoint A, FIntPoint B)
{

    // todo, find better optimization

    auto diff = B - A;
    diff.X = FMath::Clamp(diff.X, -1, 1);
    diff.Y = FMath::Clamp(diff.Y, -1, 1);
    return diff;
    //// return direction based on enum
    //auto retDir = [&](DirEnum dir) -> GridDirection&
    //{
    //    return g_directions[(int)dir];
    //};

    //auto row = diff.X;
    //auto col = diff.Y;

    //// heading east
    //if (diff.X > 0)
    //{
    //    // north
    //    if (diff.Y > 0)
    //    {
    //        return retDir(DirEnum::North_East);
    //    }
    //    // south
    //    else if(diff.Y < 0)
    //    {
    //        return retDir(DirEnum::South_East);
    //    }
    //    else
    //    {
    //        return retDir(DirEnum::East);
    //    }
    //}
    //// heading west
    //else if (diff.X < 0)
    //{
    //    // north
    //    if (diff.Y > 0)
    //    {
    //        return retDir(DirEnum::North_West);
    //    }
    //    // south
    //    else if (diff.Y < 0)
    //    {
    //        return retDir(DirEnum::South_West);
    //    }
    //    // direct west
    //    else
    //    {
    //        return retDir(DirEnum::West);
    //    }
    //}
    //// directly south
    //else if(diff.Y < 0)
    //{
    //    return retDir(DirEnum::South);
    //}
    //// directly north
    //else
    //{
    //    return retDir(DirEnum::North);
    //}

}

bool GridDirection::isDiagonal(FIntPoint p_dir)
{
    return p_dir.X != 0 && p_dir.Y != 0;
}

//GridDirection::GridDirection(bool p_diagonal, int p_index, FVector2D p_val)
//    : m_diagonal(p_diagonal), m_index(p_index), m_value(p_val)
//{
//}
//
// GridDirection & GridDirection::getForwardLeft()
//{
//     auto l_index = getDirLeft().m_index;
//     return g_directions[(l_index + 1) % max_dir_count];
//}
//
//GridDirection & GridDirection::getForwardRight()
//{
//    int result = getDirRight().m_index - 1;
//    if (result < 0)
//    {
//        result += max_dir_count;
//    }
//    return g_directions[result];
//}
//
//GridDirection & GridDirection::getDirBehind()
//{
//    return g_directions[(m_index + half_clock_rotation) % max_dir_count];
//}
//
//GridDirection & GridDirection::getDirBackLeft()
//{
//    return getDirBehind().getDirRight();
//}
//
//GridDirection & GridDirection::getDirBackRight()
//{
//    return getDirBehind().getDirLeft();
//}
//
//GridDirection & GridDirection::getDirLeft()
//{
//    short result = m_index - 2;
//    if (result < 0)
//    {
//        result += max_dir_count;
//    }
//    return g_directions[result];
//}
//
//GridDirection & GridDirection::getDirRight()
//{
//    short result = m_index + 2;
//    if (result >= max_dir_count)
//    {
//        result -= max_dir_count;
//    }
//    return g_directions[result];
//}

//bool GridDirection::isDiagonal() const
//{
//    return m_diagonal;
//}


//
//FIntPoint GridDirection::getForwardLeft(const FIntPoint& p_current,const FIntPoint& p_dir)
//{
//
//}
//
//FIntPoint GridDirection::getForwardRight(const FIntPoint& p_current,const FIntPoint& p_dir)
//{
//}
//
//FIntPoint GridDirection::getBehind(const FIntPoint& p_current,const FIntPoint& p_dir)
//{
//}
//
//FIntPoint GridDirection::getBackLeft(const FIntPoint& p_current,const FIntPoint& p_dir)
//{
//}
//FIntPoint GridDirection::getBackRight(const FIntPoint& p_current,const FIntPoint& p_dir)
//{
//}
//
//FIntPoint GridDirection::getLeft(const FIntPoint& p_current,const FIntPoint& p_dir)
//{
//}
//FIntPoint GridDirection::getRight(const FIntPoint& p_current,const FIntPoint& p_dir)
//{
//}
//
