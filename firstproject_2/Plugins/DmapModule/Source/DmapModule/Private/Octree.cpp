// Fill out your copyright notice in the Description page of Project Settings.

#include "Octree.h"
#include <cassert>

Octree::Octree() : m_root(std::make_unique<OctreeNode>())
{
}

void Octree::setupDimensions(FVector p_world_dimensions)
{
	m_root->m_center = p_world_dimensions / 2.0f;
	m_root->m_half_extents = p_world_dimensions / 2.0f;
}

void Octree::insertVoxel(FVector p_voxel)
{
	m_root->addVoxel(p_voxel);
}

void OctreeNode::addVoxel(FVector p_voxel)
{
	// if no children then create them
	if (m_children.empty())
	{
		createChildren();
	}

	// what about voxel already inside this node
	// what to do? 
	// possible Answer: send m_voxel into a child node,
	// then 

	// now find which child to insert voxel
	


}

void OctreeNode::createChildren()
{

	// initialize child nodes
	for (auto& child : m_children)
	{
		child.reset(new OctreeNode);
	}

	// set bounding boxes of child nodes
	m_children[0]->setBoundingBox(m_min, m_center); // back bottom left
	m_children[1]->setBoundingBox(FVector(m_center.X, m_min.Y, m_min.Z), FVector(m_max.X, m_center.Y, m_center.Z)); // back bottom right
	m_children[2]->setBoundingBox(FVector(m_center.X, m_min.Y, m_center.Z), FVector(m_max.X, m_center.Y, m_max.Z)); // front bottom right
	m_children[3]->setBoundingBox(FVector(m_min.X, m_min.Y, m_center.Z), FVector(m_center.X, m_center.Y, m_max.Z)); // front bottom left
	m_children[4]->setBoundingBox(FVector(m_min.X, m_center.Y, m_min.Z), FVector(m_center.X, m_max.Y, m_center.Z)); // back top left
	m_children[5]->setBoundingBox(FVector(m_center.X, m_center.Y, m_min.Z), FVector(m_max.X, m_max.Y, m_center.Z)); // back top right
	m_children[6]->setBoundingBox(m_center, m_max);																	// front top right
	m_children[7]->setBoundingBox(FVector(m_min.X, m_center.Y, m_center.Z), FVector(m_center.X, m_max.Y, m_max.Z)); // front top left

}

void OctreeNode::setBoundingBox(FVector p_min, FVector p_max)
{
	m_min = p_min;
	m_max = p_max;
	m_half_extents = (p_max - p_min) / 2;
	m_center = p_min + m_half_extents;
}

int OctreeNode::findBestChild(FVector p_voxel)
{

	assert(m_children.empty() == false);

	// for every child check if it fits
	for (int i = 0; i < m_children.size(); i++)
	{
		if (m_children[i]->m_center == p_voxel)
		{
			return i;
		}
	}

	throw std::runtime_error("no child can contain voxel");
}
