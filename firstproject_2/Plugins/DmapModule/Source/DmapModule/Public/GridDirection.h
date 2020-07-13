// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Math/Vector2D.h"
#include "Math/IntPoint.h"
#include <vector>
#include <utility>

struct DMAPMODULE_API GridDirection final : public FIntPoint
{
    static const std::vector<GridDirection> g_directions;

    GridDirection(int p_index, FVector2D p_val);

    short m_index;
    FVector2D m_value;

    //operator FVector2D();

    // gets relative northwest and northeast GridDirections,
    // EX: p_dir is N, function will return NW and NE.
    // EX:: p_dir is NE, func will return N and E
    std::pair<GridDirection, GridDirection> getRel_NW_NE_dirs();

    const GridDirection& getForwardLeft() const;
    const GridDirection& getForwardRight()const;

    const GridDirection& getDirBehind()const;

    const GridDirection& getDirBackLeft()const;
    const GridDirection& getDirBackRight()const;

    const GridDirection& getDirLeft()const;
    const GridDirection& getDirRight()const;

    bool isDiagonal() const;

    /*static const GridDirection& getForwardLeft(const GridDirection& p_dir);
    static const GridDirection& getForwardRight(const GridDirection& p_dir);

    static const GridDirection& getDirBehind(const GridDirection& p_dir);

    static const GridDirection& getDirBackLeft(const GridDirection& p_dir);
    static const GridDirection& getDirBackRight(const GridDirection& p_dir);

    static const GridDirection& getDirLeft(const GridDirection& p_dir);
    static const GridDirection& getDirRight(const GridDirection& p_dir);*/


};
