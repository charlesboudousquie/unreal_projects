// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
struct GridNode
{
public:

    bool m_isWall = false;
    // have  we seen this node before?
    bool m_opened = false;
    // have we thuroughly examined this node?
    bool m_closed = false;

    bool isJumpPoint() const { return m_opened; }

    bool operator()(const GridNode& lhs, const GridNode& rhs) const { return lhs.f < rhs.f; }
    bool operator<(const GridNode& rhs) const { return this->f < rhs.f; }

    float g = 0.0f, f = 0.0f, h = 0.0f;

    GridNode* m_parent = nullptr;
    FIntPoint m_pos{ -1,-1 }; //row, col

};
