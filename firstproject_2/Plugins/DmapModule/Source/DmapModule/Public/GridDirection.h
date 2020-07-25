// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Math/Vector2D.h"
#include "Math/IntPoint.h"
#include <array>
#include <utility>

struct DMAPMODULE_API GridDirection final : public FIntPoint
{
    //static std::array<GridDirection,8> g_directions;

    // get dir from a to b aka B-A
    static FIntPoint getDirection(FIntPoint A, FIntPoint B);
    static bool isDiagonal(FIntPoint p_dir);

    //GridDirection(bool p_diagonal, int p_index, FVector2D p_val);

    //const bool m_diagonal;
    //const short m_index;
    //const FVector2D m_value;

    //operator FVector2D();

    // gets relative northwest and northeast GridDirections,
    // EX: p_dir is N, function will return NW and NE.
    // EX:: p_dir is NE, func will return N and E
    //std::pair<GridDirection, GridDirection> getRel_NW_NE_dirs();

    /*GridDirection& getForwardLeft();
    GridDirection& getForwardRight();

    GridDirection& getDirBehind();

    GridDirection& getDirBackLeft();
    GridDirection& getDirBackRight();

    GridDirection& getDirLeft();
    GridDirection& getDirRight();*/

    //bool isDiagonal() const;

    //static FIntPoint getForwardLeft(const FIntPoint& p_current,const FIntPoint& p_dir);
    //static FIntPoint getForwardRight(const FIntPoint& p_current,const FIntPoint& p_dir);
    //       
    //static FIntPoint getBehind(const FIntPoint& p_current,const FIntPoint& p_dir);
    //       
    //static FIntPoint getBackLeft(const FIntPoint& p_current,const FIntPoint& p_dir);
    //static FIntPoint getBackRight(const FIntPoint& p_current,const FIntPoint& p_dir);
    //       
    //static FIntPoint getLeft(const FIntPoint& p_current,const FIntPoint& p_dir);
    //static FIntPoint getRight(const FIntPoint& p_current,const FIntPoint& p_dir);


};
