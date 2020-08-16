// Fill out your copyright notice in the Description page of Project Settings.


#include "Efficient_Octree.h"
#include <assert.h>
#include <iostream>

#define LEAF_LAYER 0

std::map<Efficient_Octree::BC, Efficient_Octree::Dir> Efficient_Octree::g_directions
{

#define BC_Insert(BC_Name, x,y,z) {BC::BC_Name, {x,y,z}},
//#define BC_Insert(BC_Name, x,y,z) {BC::BC_Name, {x 1,y 1,z 1}},

    // vertices
    BC_Insert(LFD, -1,+1,-1)
    BC_Insert(RFD, +1,+1,-1)
    BC_Insert(RBD, 1,-1,-1)
    BC_Insert(LBD, -1,-1,-1)
    
    BC_Insert(LFU, -1,1,1)
    BC_Insert(RFU, 1,1,1)
    BC_Insert(RBU, 1,-1,1)
    BC_Insert(LBU, -1,-1,1)
    
    // Edges
    BC_Insert(FD, 0,1,-1)
    BC_Insert(RD, 1,0,-1)
    BC_Insert(BD, 0,-1,-1)
    BC_Insert(LD, -1,0,-1)
    
    BC_Insert(LF, -1,1,0)
    BC_Insert(RF, 1,1,0)
    BC_Insert(RB, 1,-1,0)
    BC_Insert(LB, -1,-1,0)
    
    BC_Insert(LU, -1,0,1)
    BC_Insert(FU, 0,1,1)
    BC_Insert(RU, 1,0,1)
    BC_Insert(BU, 0,-1,1)
    
    // faces
    BC_Insert(L, -1,0,0)
    BC_Insert(F, 0,1,0)
    BC_Insert(R, 1,0,0)
    BC_Insert(B, 0,-1,0)
    BC_Insert(U, 0,0,1)
    BC_Insert(D, 0,0,-1)

};

EO_CODE Efficient_Octree::getNeighborCode(const EO_CODE& oldCode, Dir p_dir, int p_cellSize)
{
    EO_CODE result = EO_CODE{
        (uint64)getAxisNeighborCode(oldCode.X, p_dir[0], p_cellSize),
        (uint64)getAxisNeighborCode(oldCode.Y, p_dir[1], p_cellSize),
        (uint64)getAxisNeighborCode(oldCode.Z, p_dir[2], p_cellSize) };
    return result;
}

int Efficient_Octree::getAxisIndex(Dir p_dir)
{
    if (p_dir.X) { return 0; }
    if (p_dir.Y) { return 1; }
    if (p_dir.Z) { return 2; }
    return -1;
}

Efficient_Octree::EO_NodePtr Efficient_Octree::genericAncestorFind(EO_NodePtr p_cell, Dir p_dir)
{

    unsigned our_level = p_cell->m_level;
    unsigned cellSize = 1 << our_level;

    // get our code
    short activeAxis = getAxisIndex(p_dir);
    short axisValue = p_dir[activeAxis];
    assert(axisValue != 0);
    unsigned our_dir_code = p_cell->m_code[activeAxis];

    // get neighbor's code
    int neighbor_dir_code = our_dir_code;
    if (axisValue > 0)
    {
        neighbor_dir_code += cellSize;
        assert(neighbor_dir_code <= m_max_val);
    }
    else
    {
        neighbor_dir_code -= 1;
        assert(neighbor_dir_code >= 0);
    }

    // find difference in codes
    unsigned diff = our_dir_code ^ neighbor_dir_code;

    // find common parent
    unsigned nextLevel = our_level;

    return findComPar(p_cell, nextLevel, diff);
}

void Efficient_Octree::insert(Voxel v)
{

    auto nodeFound = getSmallestNode(v);

    // after we have hit the bottom we can assume
    // that "curr" can indeed contain said voxel.
    // Since that is the case we can simply tell the node itself
    // to take the voxel. If it is empty then we just
    // take it. If voxel is full then we set it to empty,
    // create new children, and we call insert again,
    // for both the new voxel "v", and the voxel that was 
    // already inside the node that we found.

    // if empty
    if (nodeFound->m_empty)
    {
        nodeFound->setVoxel(v);
        // create the children
        //nodeFound->createChildren();
    }
    else
    {
        nodeFound->m_empty = true;
        nodeFound->createChildren();
        /*short level = nodeFound->m_level - 1;
        short c1 = getChildIndex(v, level);
        short c2 = getChildIndex(nodeFound->m_voxel, level);*/

        auto old_voxel = nodeFound->m_voxel;

        // give voxels to children
        insert(v);
        insert(old_voxel);


    }

    

}

void Efficient_Octree::setDimensions(FVector p_dim)
{
    // make sure that p_dim is exactly what the file says,
    // so don't subtract dimensions by 1 before handing them
    // over to this function.

    this->clearTree();
    m_min = FVector{ 0 };//-0.5};
    float l_max_dim = p_dim.GetMax();

    int levelCount = 0;
    unsigned tree_size = 1;
    while (tree_size < l_max_dim)
    {
        levelCount++;
        tree_size *= 2;
    }

    m_root_level = levelCount;
    m_max_level = levelCount + 1;
    m_max_val = 1 << m_root_level;
    m_max = FVector{ (float)tree_size };

    auto m_center = (m_max + m_min) / 2.0f;
    auto m_half_extents = FVector{ l_max_dim } / 2.0f;
    m_root->m_box = FBox::BuildAABB(m_center, m_half_extents);
    m_root->m_level = m_root_level;
    m_root->m_code = m_root->m_box.Min;// Efficient_Octree::getEO_Tree().convertToEO_Code(m_root->m_box.Min);
}

TArray<Efficient_Octree::EO_NodePtr> Efficient_Octree::getNeighbors(EO_NodePtr p_node)
{
    EO_NodePtr most_recently_added_neighbor = nullptr;
    TArray<Efficient_Octree::EO_NodePtr> l_neighbors;
    auto add_if = [&](EO_NodePtr l_node) 
    {
        if (l_node != nullptr && l_neighbors.Contains(l_node) == false)
        { 
            l_neighbors.Add(l_node); 
            most_recently_added_neighbor = l_node;
        }
    };

    FIntVector dir;

    for (BC i = BC::L; i <= BC::D; i = static_cast<BC>((int)i + 1))
    {
        dir = g_directions[i];
        if (dir.GetMax() == 1)
        {
            add_if(getPositiveDirNeighbor(p_node, dir));
        }
        else
        {
            add_if(getNegativeDirNeighbor(p_node, dir));
        }

    }

    
    for (BC i = BC::LFD; i <= BC::LBU; i = static_cast<BC>((int)i + 1))
    {
        dir = g_directions[i];
        add_if(getVertexNeighbor(p_node, dir));
    }

    for (BC i = BC::FD; i <= BC::BU; i = static_cast<BC>((int)i + 1))
    {
        dir = g_directions[i];
        add_if(getEdgeNeighbor(p_node, dir));
    }

    

    return l_neighbors;
}

int Efficient_Octree::getAxisNeighborCode(int p_old_val, int p_axis_val, int p_cellSize)
{
    if (p_axis_val == 0) { return p_old_val; }

    if (p_axis_val > 0) { return p_cellSize + p_old_val; }
    else
    {
        return p_old_val - 1;
        //return p_old_val - p_cellSize;
    }
}

EO_CODE Efficient_Octree::getDiff(EO_CODE A, EO_CODE B)
{
    return EO_CODE{ A.X ^ B.X, A.Y ^ B.Y, A.Z ^ B.Z };
}


Efficient_Octree::EO_NodePtr Efficient_Octree::findComPar(EO_NodePtr p_cell, unsigned & p_cellLevel, const unsigned & p_binary_diff)
{
    auto cell = p_cell;
    while (p_binary_diff & (1 << p_cellLevel))
    {
        cell = cell->m_parent;
        p_cellLevel++;
    }

    return cell;
}

Efficient_Octree::EO_NodePtr Efficient_Octree::traverse(EO_NodePtr p_parent_cell, unsigned & nextLevel, EO_CODE p_target_cell_code)
{
    auto cell = p_parent_cell;

    // while cell is not a leaf
    while ((cell)->noChildrenActive() == false)
    {
        unsigned int childBranchBit = 1 << (nextLevel);
        auto xLocCode = cell->m_code.X;
        auto yLocCode = cell->m_code.Y;
        auto zLocCode = cell->m_code.Z;

        unsigned xBit = (xLocCode & childBranchBit) >> nextLevel;
        unsigned yBit, zBit;
        if ((nextLevel - 1) >= 0)
        {
            yBit = (yLocCode & childBranchBit) >> (nextLevel - 1);
        }
        else
        {
            yBit = (yLocCode & childBranchBit) << std::abs((int)nextLevel - 1);
        }

        if ((nextLevel - 2) >= 0)
        {
            zBit = (zLocCode & childBranchBit) >> (nextLevel - 2);
        }
        else
        {
            zBit = (zLocCode & childBranchBit) << std::abs((int)nextLevel - 2);
        }

        nextLevel--;

        unsigned childIndex = xBit + yBit + zBit;

        assert(childIndex < 8 && childIndex >= 0);
        cell = cell->m_children[childIndex].get();
    }

    return cell;
}

Efficient_Octree::EO_NodePtr Efficient_Octree::traverseToLevel(EO_NodePtr p_parent_cell, unsigned & nextLevel, EO_CODE p_target_cell_code, unsigned p_level)
{
    auto cell = p_parent_cell;

    int n = nextLevel - p_level + 1;

    auto xLocCode = p_target_cell_code.X;
    auto yLocCode = p_target_cell_code.Y;
    auto zLocCode = p_target_cell_code.Z;

    // while cell is not a leaf
    while (((cell)->noChildrenActive() == false) && (n > 0))
    {
        n--;

        /*unsigned int childBranchBit = 1 << (nextLevel);
        unsigned xBit = (xLocCode & childBranchBit) >> nextLevel;
        unsigned yBit, zBit;
        if ((nextLevel - 1) >= 0)
        {
            yBit = (yLocCode & childBranchBit) >> (nextLevel - 1);
        }
        else
        {
            yBit = (yLocCode & childBranchBit) << std::abs((int)nextLevel - 1);
        }
        if (nextLevel - 2 >= 0)
        {
            zBit = (zLocCode & childBranchBit) >> (nextLevel - 2);
        }
        else
        {
            zBit = (zLocCode & childBranchBit) << std::abs((int)nextLevel - 2);
        }*/

        unsigned childIndex = getChildIndex(p_target_cell_code.toIntVector(), nextLevel); // xBit + yBit + zBit;
        nextLevel--;

        //assert(childIndex < 8 && childIndex >= 0);
        cell = cell->m_children[childIndex].get();
    }

    assert(cell->m_code == p_target_cell_code);
    return cell;
}

Efficient_Octree::EO_NodePtr Efficient_Octree::getVertexNeighbor(EO_NodePtr p_cell, Dir p_dir)
{

    unsigned int our_level = p_cell->m_level;

    unsigned cellSize = 1 << our_level;

    // check if any part of the code produces negative numbers.
    // if so then abort.
    FIntVector proxyCode = p_cell->m_code.toIntVector();
    proxyCode += p_dir;
    // if code became negative then that means we are trying to access
    // a node outside of the octree
    if (proxyCode.GetMin() < 0) { return nullptr; }


    EO_CODE neighbor_code = getNeighborCode(p_cell->m_code, p_dir, cellSize);

    /*TArray<EO_NodePtr> l_neighbors;
    l_neighbors.SetNumZeroed(3);*/

    TArray<EO_NodePtr> l_common_parents;
    TArray<EO_NodePtr> l_neighbors;
    l_common_parents.SetNumZeroed(3);

    // for each separate axis element of the direction,
    // check if a node exists in that direction.
    // also stores neighbor if found.
    auto checkNeighbor = [&](int p_dir_index)
    {
        // get direction going only in 1 of the
        // axis directions
        Dir newDir{ 0 };
        newDir[p_dir_index] = p_dir[p_dir_index];
        assert(newDir[p_dir_index] != 0);

        EO_NodePtr l_neighbor;
        if (p_dir[p_dir_index] < 0)
        {
            l_neighbor = getNegativeDirNeighbor(p_cell, newDir);
        }
        else
        {
            l_neighbor = getPositiveDirNeighbor(p_cell, newDir);
        }

        //l_neighbors[p_dir_index] = l_neighbor;
        if (l_neighbor)
        {
            l_neighbors.Add(l_neighbor);
            l_common_parents[p_dir_index] = genericAncestorFind(p_cell, newDir);
        }
        

        return l_neighbor != nullptr;
    };

    bool neighbor_exists = true;
    neighbor_exists &= checkNeighbor(0);
    neighbor_exists &= checkNeighbor(1);
    neighbor_exists &= checkNeighbor(2);

    // if even 1 neighbor missing we stop.
    if (!neighbor_exists) { return nullptr; }

    // find biggest shared parent between us and our 3 face neighbors
    unsigned biggest_level = 0;
    EO_NodePtr biggest_parent = nullptr;
    for (auto parent : l_common_parents)
    {
        if (parent->m_level > biggest_level)
        {
            biggest_level = parent->m_level;
            biggest_parent = parent;
        }
    }

    // go 1 layer down from wherever the biggest parent was found
    biggest_level--;

    // for the single vertex neighbor we know only the smallest cell
    // is the one truly touching it.
    return traverseToLevel(biggest_parent, biggest_level, neighbor_code, LEAF_LAYER);

}

Efficient_Octree::EO_NodePtr Efficient_Octree::getEdgeNeighbor(EO_NodePtr p_cell, Dir p_dir)
{
    unsigned our_level = p_cell->m_level;
    unsigned cellSize = 1 << our_level;
    // get our code
    EO_CODE our_code = p_cell->m_code;

    // check if any part of the code produces negative numbers.
    // if so then abort.
    FIntVector proxyCode = p_cell->m_code.toIntVector();
    proxyCode += p_dir;
    // if code became negative then that means we are trying to access
    // a node outside of the octree
    if (proxyCode.GetMin() < 0) { return nullptr; }

    // get neighbor code
    EO_CODE neighbor_code = getNeighborCode(our_code, p_dir,cellSize);

    // get diff
    //EO_CODE diff = getDiff(our_code, neighbor_code);

    TArray<EO_NodePtr> l_parents;
    l_parents.SetNumZeroed(3);

    int neighbor_count = 0;
    // for each separate axis element of the direction,
    // check if a node exists in that direction.
    auto checkNeighbor = [&](int p_dir_index)
    {
        if (p_dir[p_dir_index] == 0) { return; }

        // get direction going only in 1 of the
        // axis directions
        Dir newDir{ 0 };
        newDir[p_dir_index] = p_dir[p_dir_index];

        EO_NodePtr l_neighbor;
        if (p_dir[p_dir_index] < 0)
        {
            l_neighbor = getNegativeDirNeighbor(p_cell, newDir);
        }
        else
        {
            l_neighbor = getPositiveDirNeighbor(p_cell, newDir);
        }

        if (l_neighbor != nullptr)
        {
            neighbor_count++;
            l_parents[p_dir_index] = genericAncestorFind(p_cell, newDir);
        }
    };

    checkNeighbor(0);
    checkNeighbor(1);
    checkNeighbor(2);
    bool neighbor_exists = (neighbor_count == 2);

    // if nieghbors are missing then return nothing
    if (!neighbor_exists) { return nullptr; }

    // find biggest shared parent between us and our 3 face neighbors
    unsigned biggest_level = 0;
    EO_NodePtr biggest_parent = nullptr;
    for (auto parent : l_parents)
    {
        if (parent && (parent->m_level > biggest_level))
        {
            biggest_level = parent->m_level;
            biggest_parent = parent;
        }
    }

    // go 1 layer down from wherever the biggest parent was found
    biggest_level--;

    // for the single vertex neighbor we know only the smallest cell
    // is the one truly touching it.
    return traverseToLevel(biggest_parent, biggest_level, neighbor_code, LEAF_LAYER);
}

EO_CODE Efficient_Octree::convertToEO_Code(FVector p_voxel)
{
    // divide it by the dimensions of the original world
    auto dimensions = m_max - m_min;
    FVector normalized_coord = p_voxel / dimensions.X;

    // after division and multiplying again,
    // truncate non integer bits.
    EO_CODE loc_code;
    loc_code = normalized_coord * m_max_val;
    return loc_code;
}

Efficient_Octree::EO_NodePtr Efficient_Octree::getNegativeDirNeighbor(EO_NodePtr p_cell, Dir p_dir)
{

    short activeAxis = getAxisIndex(p_dir);
    unsigned our_dir_code = p_cell->m_code[activeAxis];

    // if at boundary stop
    if (our_dir_code == 0) { return nullptr; }

    int p_cell_size = 1 << p_cell->m_level;

    // get code of neighbor
    //unsigned neighbor_dir_code = our_dir_code - 1;
    unsigned neighbor_dir_code = our_dir_code - 1;

    // get smallest neighbor
    unsigned ourLevel, nextLevel;
    ourLevel = nextLevel = p_cell->m_level;

    // find difference in codes
    unsigned diff = our_dir_code ^ neighbor_dir_code;

    // find common parent
    auto common_parent = findComPar(p_cell, nextLevel, diff);

    // decrement next level
    nextLevel--;

    // modify part of code that corresponds to p_dir
    EO_CODE neighbor_code = p_cell->m_code;
    neighbor_code[activeAxis] = neighbor_dir_code;

    // traverse to level
    return traverseToLevel(common_parent, nextLevel, neighbor_code, ourLevel);
}


Efficient_Octree::EO_NodePtr Efficient_Octree::getPositiveDirNeighbor(EO_NodePtr p_cell, Dir p_dir)
{
    unsigned our_level = p_cell->m_level;
    unsigned cellSize = 1 << our_level;

    // get our code
    short activeAxis = getAxisIndex(p_dir);
    unsigned our_dir_code = p_cell->m_code[activeAxis];

    // get neighbor's code
    unsigned neighbor_dir_code = our_dir_code + cellSize;

    // if neighbor is out of bounds
    if (neighbor_dir_code >= m_max_val) { return nullptr; }

    // find difference in codes
    unsigned diff = our_dir_code ^ neighbor_dir_code;

    // find common parent
    unsigned nextLevel = our_level;
    auto common_parent = findComPar(p_cell, nextLevel, diff);

    // decrement next level
    nextLevel--;

    // modify part of code that corresponds to p_dir
    EO_CODE neighbor_code = p_cell->m_code;
    neighbor_code[activeAxis] = neighbor_dir_code;

    // traverse to level
    return traverseToLevel(common_parent, nextLevel, neighbor_code, our_level);
}


Efficient_Octree::EO_NodePtr Efficient_Octree::getSmallestNode(Voxel p_voxel)
{
    // leaves are level 0

    auto curr = m_root.get();

    auto nextLevel = curr->m_level;
    // while cell is not a leaf
    while (curr->noChildrenActive() == false)// && ((cell)->m_empty == true))
    {
        nextLevel--;
        unsigned childIndex = getChildIndex(p_voxel, nextLevel);
        curr = curr->m_children[childIndex].get();
    }

    return curr;
}

void EO_Node::createChildren()
{

    assert(m_level > 0);

    // initialize child nodes
    for (auto& child : m_children)
    {
        child.reset(new EO_Node()); // cause unique pointers are fun
        child->m_level = this->m_level - 1;
    }

    auto m_center = m_box.GetCenter();
    auto m_min = m_box.Min;
    auto m_max = m_box.Max;

    // box is cubic so we only need 1 length
    // of the box, we'll call it "h".
    float h = m_box.GetExtent().X;

    // L = Left, R = Right, F = Front, B = Back, U = Up, D = Down
    // Order LR, FB, UD
    // X = LR, Y = FB, Z = UD
    // set bounding boxes of child nodes

    // p_min_offset = offset from center of parent node
    // p_max_offset = ditto
    // Important: p_min_offset and p_max_offset must be between -1 to 1
    auto setBB = [&](const short p_index, const FVector p_min_offset, const FVector p_max_offset)
    {
        m_children[p_index]->setBoundingBox(m_center + (p_min_offset * h), m_center + (p_max_offset * h));
    };

    setBB(0, FVector{-1,-1,-1}, FVector{0});
    setBB(1, FVector{0,-1,-1},  FVector{1,0,0});
    setBB(2, FVector{-1,0,-1},  FVector{0,1,0});
    setBB(3, FVector{0,0,-1},   FVector{1,1,0});
    setBB(4, FVector{-1,-1,0},  FVector{0,0,1});
    setBB(5, FVector{0,-1,0},   FVector{1,0,1});
    setBB(6, FVector{-1,0,0},   FVector{0,1,1});
    setBB(7, FVector{0},        FVector{1,1,1});

    //m_children[0]->setBoundingBox(m_min, m_center); // LBD
    //m_children[1]->setBoundingBox(FVector(m_center.X, m_min.Y, m_min.Z), FVector(m_max.X, m_center.Y, m_center.Z)); // RBD // back bottom right
    //m_children[2]->setBoundingBox(FVector(m_center.X, m_min.Y, m_center.Z), FVector(m_max.X, m_center.Y, m_max.Z)); // RFD // front bottom right
    //m_children[3]->setBoundingBox(FVector(m_min.X, m_min.Y, m_center.Z), FVector(m_center.X, m_center.Y, m_max.Z)); // L // front bottom left
    //m_children[4]->setBoundingBox(FVector(m_min.X, m_center.Y, m_min.Z), FVector(m_center.X, m_max.Y, m_center.Z)); // L // back top left
    //m_children[5]->setBoundingBox(FVector(m_center.X, m_center.Y, m_min.Z), FVector(m_max.X, m_max.Y, m_center.Z)); // R // back top right
    //m_children[6]->setBoundingBox(m_center, m_max);																	// R // front top right
    //m_children[7]->setBoundingBox(FVector(m_min.X, m_center.Y, m_center.Z), FVector(m_center.X, m_max.Y, m_max.Z)); // L // front top left

    short l_index_counter = 0;
    // set codes
    for (auto& child : m_children)
    {
        
        child->m_code = child->m_box.Min;// Efficient_Octree::getEO_Tree().convertToEO_Code(child->m_box.GetCenter());

        assert(m_children.ContainsByPredicate(
            [child](EO_Node* p_node)
        {
            return p_node->m_code == child->m_code;
        }
        ) == false);

        child->m_parent = this;
        child->m_index = l_index_counter;
        l_index_counter++;
    }

}

void EO_Node::setBoundingBox(FVector p_min, FVector p_max)
{
    m_box = { p_min, p_max };
}

EO_Node* EO_Node::operator[](short p_index)
{
    return m_children[p_index].get();
}

//void EO_Node::insert(Voxel p_vox)
//{
//    
//}

TArray<EO_Node*> Efficient_Octree::getLeaves()
{
    TArray<EO_Node*> leaves;
    getLeavesRec(m_root.get(), leaves);
    return leaves;
}

TArray<Voxel> Efficient_Octree::getLeafPositions()
{
    auto leaves = getLeaves();
    TArray<Voxel> l_positions;
    l_positions.SetNumZeroed(leaves.Num());
    for (int i = 0; i < leaves.Num(); i++)
    {
        l_positions[i] = leaves[i]->m_voxel;
    }
    return l_positions;
}

Efficient_Octree::ListOfNodes Efficient_Octree::getInternalNodes()
{
    ListOfNodes nodes;
    getInternalNodesRec(m_root.get(), nodes, 0);
    return nodes;
}

TArray<Voxel> Efficient_Octree::getInternalNodePositions()
{
    auto nodes = getInternalNodes();
    TArray<Voxel> l_positions;
    l_positions.SetNumZeroed(nodes.Num());
    for (int i = 0; i < nodes.Num(); i++)
    {
        l_positions[i] = nodes[i]->m_voxel;
    }
    return l_positions;
}

Efficient_Octree::ListOfNodes Efficient_Octree::getAllNodes()
{
    auto nodes = getInternalNodes();
    nodes.Append(getLeaves());
    return nodes;
}

void Efficient_Octree::getLeavesRec(EO_Node * p_node, TArray<EO_Node*>& p_array)
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

void Efficient_Octree::getInternalNodesRec(EO_Node * p_node, ListOfNodes& p_array, int p_level)
{
    if (p_node)
    {

        // if internal node
        if (p_node->m_empty)
        {
            p_array.Add(p_node);

            for (auto& child : p_node->m_children)
            {
                getInternalNodesRec(child.get(), p_array, p_level + 1);
            }

        }

    }
}

short Efficient_Octree::getChildIndex(Voxel v, unsigned nextLevel)
{
    // get index of child that best fits this voxel
    short childbit = 1 << nextLevel;

    // extract bits from voxel
    short xBit = (v.X & childbit) >> nextLevel;

    short yBit = ((v.Y & childbit) >> nextLevel) << 1;

    short zBit = ((v.Z & childbit) >> nextLevel) << 2;

    short ci = xBit + yBit + zBit;
    return ci;
}

bool Efficient_Octree::isValid()
{
    if (m_root == nullptr) { return false; }


    auto i_nodes = getInternalNodes();
    for (auto node : i_nodes)
    {
        // if node is an internal node but it still contains a voxel, then there is
        // a problem
        if (node->m_empty == false)
        {
            return false;
        }
    }

    auto l_nodes = getLeaves();
    for (auto node : l_nodes)
    {
        // if node is an internal node but it still contains a voxel, then there is
        // a problem
        if (node->m_empty == true)
        {
            return false;
        }
    }

    return true;
}

