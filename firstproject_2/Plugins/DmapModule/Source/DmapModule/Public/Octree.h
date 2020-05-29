// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <memory>
#include <vector>
#include <array>
#include <cstddef>
#include "Math/Vector.h"

#include "CoreMinimal.h"

struct OctreeNode
{

	// insert voxel into this node or its children if necessary
	void addVoxel(FVector p_voxel);

	// create child nodes if current node has no children and an item
	// is being inserted into this node
	void createChildren();

	// set min, max, center, and half_extents
	void setBoundingBox(FVector p_min, FVector p_max);

	// find best child to insert voxel into.
	// returns index of best child
	int findBestChild(FVector p_voxel);

	FVector m_voxel;

	FVector m_min;
	FVector m_max;
	FVector m_center;
	FVector m_half_extents;
	std::array<std::unique_ptr<OctreeNode>,8> m_children;
	uint8_t m_children_in_use{0};
};

/**
 * 
 */
class DMAPMODULE_API Octree
{

	std::unique_ptr<OctreeNode> m_root;

public:

	Octree();

	// give world dimensions to octree.
	// center will be p_world_dimensions / 2.

	void setupDimensions(FVector p_world_dimensions);

	void insertVoxel(FVector p_voxel);

};
