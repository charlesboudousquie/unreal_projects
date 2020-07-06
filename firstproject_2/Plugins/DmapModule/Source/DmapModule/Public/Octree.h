// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <memory>
#include <vector>
#include <array>
#include <cstddef>
#include "Math/Vector.h"
#include "Math/Box.h"

#include "CoreMinimal.h"

struct OctreeNode
{

    OctreeNode(int p_level);

	static FVector invalid_voxel;

	// insert voxel into this node or its children if necessary
	void addVoxel(FVector p_voxel);

	// create child nodes if current node has no children and an item
	// is being inserted into this node
	void createChildren();

	// get all 8 points of bounding box
	TArray<FVector> get8Points();

	// set min, max, center, and half_extents
	void setBoundingBox(FVector p_min, FVector p_max);

	// find best child to insert voxel into.
	// returns index of best child
	int findBestChild(FVector p_voxel);

	// check if voxel is within bounds
	bool isInside(FVector p_voxel);

	// check if any children are alive, todo optimize
	bool noChildrenActive();

    // print out contents of node
    void print();


	FVector m_voxel = invalid_voxel;
	bool m_empty = true;
    int m_level = -1;

	FBox m_box;

	//uint8_t m_children_in_use{0};
    std::array<std::unique_ptr<OctreeNode>, 8> m_children;
};

/**
 * 
 */
class /*DMAPMODULE_API*/ Octree
{
    typedef TArray<OctreeNode*> ListOfNodes;

	std::unique_ptr<OctreeNode> m_root;
    int m_dimension_modifier = -1; // what to add to dimensions to fit voxels

    void getLeavesRec(OctreeNode*, TArray<OctreeNode*>&);
    void getInternalNodesRec(OctreeNode * p_node, ListOfNodes& p_array, int p_level);

public:

	Octree();
	~Octree();

    ListOfNodes getLeaves();
    ListOfNodes getInternalNodes();
    ListOfNodes getAllNodes();

    FVector getPos();

	// clears all nodes in tree
	void clearTree();

	// give world dimensions to octree.
	// center will be p_world_dimensions / 2.
	void setupDimensions(FVector p_world_dimensions);

	void insertVoxel(FVector p_voxel);

    // morton encoding

};
