// Fill out your copyright notice in the Description page of Project Settings.

#include "Octree.h"
#include <cassert>

FVector OctreeNode::invalid_voxel = FVector{ -1.0f };

void Octree::getLeavesRec(OctreeNode * p_node, TArray<OctreeNode*>& p_array)
{
    if (p_node)
    {
        // if not leaf
        if (p_node->m_empty)
        {
            for (auto& child : p_node->m_children)
            {
                getLeavesRec(child.get(), p_array);
            }
        }
        else
        {
            // we are leaf so append to array
            p_array.Add(p_node);
        }
    }
}

void Octree::getInternalNodesRec(OctreeNode * p_node, ListOfNodes& p_array, int p_level)
{
    if (p_node)
    {

        // if internal node
        if (p_node->m_empty)
        {
            p_array.Add(p_node);

            for (auto& child : p_node->m_children)
            {
                getInternalNodesRec(child.get(), p_array, p_level+1);
            }

        }

    }
}

Octree::Octree() : m_root(std::make_unique<OctreeNode>(0))
{
}

Octree::~Octree()
{
}

TArray<OctreeNode*> Octree::getLeaves()
{
    TArray<OctreeNode*> leaves;
    getLeavesRec(m_root.get(), leaves);
    return leaves;
}

Octree::ListOfNodes Octree::getInternalNodes()
{
    ListOfNodes nodes;
    getInternalNodesRec(m_root.get(), nodes,0);
    return nodes;
}

FVector Octree::getPos()
{
    return m_root->m_box.GetCenter();
}

void Octree::clearTree()
{
	m_root.reset(new OctreeNode(0));
}

void Octree::setupDimensions(FVector p_world_dimensions)
{
	float biggestDimension = p_world_dimensions.GetMax();

	// add 1 to dimensions to account for integer division?
	FVector newDimensions = FVector{ biggestDimension + m_dimension_modifier };


	auto m_center = newDimensions / 2.0f;
	auto m_half_extents = newDimensions / 2.0f;
	m_root->m_box = FBox::BuildAABB(m_center, m_half_extents);
}

void Octree::insertVoxel(FVector p_voxel)
{
	m_root->addVoxel(p_voxel);
}

OctreeNode::OctreeNode(int p_level) : m_level(p_level)
{
}

void OctreeNode::addVoxel(FVector p_voxel)
{

	// if leaf
	if (noChildrenActive())
	{
		// if empty
		if (m_empty)
		{
			m_voxel = p_voxel; // take voxel
			m_empty = false; // we are not empty anymore
			return;
		}
		else
		{
			// create children and turn ourselves into leaf
			createChildren();
			auto bestChild = findBestChild(m_voxel);
			m_children[bestChild]->addVoxel(m_voxel);
			m_empty = true;
		}
	}


	// send new voxel to children
	auto c1 = this->findBestChild(p_voxel);

	// move our voxel and new voxel into child nodes
	m_children[c1]->addVoxel(p_voxel);


}

void OctreeNode::createChildren()
{

	// initialize child nodes
	for (auto& child : m_children)
	{
		child.reset(new OctreeNode(this->m_level + 1)); // cause unique pointers are fun
	}


	auto m_center = m_box.GetCenter();
	auto m_min = m_box.Min;
	auto m_max = m_box.Max;

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

TArray<FVector> OctreeNode::get8Points()
{
	auto l_center = m_box.GetCenter();
	auto l_extents = m_box.GetExtent();

	TArray<FVector> points;

	float X = l_extents.X;
	float Y = l_extents.Y;
	float Z = l_extents.Z;

	// set bounding boxes of child nodes
	points.Add(l_center + FVector{-X,-Y,-Z}); // back bottom left
	points.Add(l_center + FVector{X,-Y,-Z}); // back bottom right
	points.Add(l_center + FVector{X,-Y,Z}); // front bottom right
	points.Add(l_center + FVector{-X,-Y,Z}); // front bottom left
	points.Add(l_center + FVector{-X,Y,-Z}); // back top left
	points.Add(l_center + FVector{X,Y,-Z}); // back top right
	points.Add(l_center + FVector{X,Y,Z});// front top right
	points.Add(l_center + FVector{-X,Y,Z}); // front top left

	return points;

}

void OctreeNode::setBoundingBox(FVector p_min, FVector p_max)
{
	m_box = {p_min, p_max};
	//m_min = p_min;
	//m_max = p_max;
	//m_half_extents = (p_max - p_min) / 2;
	//m_center = p_min + m_half_extents;
}

int OctreeNode::findBestChild(FVector p_voxel)
{

	assert(m_children.empty() == false);

	// for every child check if it fits
	for (int i = 0; i < m_children.size(); i++)
	{

        // check if point is inside box
		if (m_children[i]->m_box.IsInside(p_voxel))
		{
			return i;
		}
	}

	throw std::runtime_error("no child can contain voxel");
}

bool OctreeNode::isInside(FVector p_voxel)
{
	
	// check if greater than min
	// check if less than max
	return m_box.IsInside(p_voxel);
}

bool OctreeNode::noChildrenActive()
{
	for (auto& child : m_children)
	{
		if (child != nullptr)
		{
			return false;
		}
	}

	return true;
}
