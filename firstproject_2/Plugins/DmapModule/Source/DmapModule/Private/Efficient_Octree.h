// Fill out your copyright notice in the Description page of Project Settings.

//-------------------------------------------------------------------------------
// Copyright 2002 Mitsubishi Electric Research Laboratories.
// All Rights Reserved.
//
// Permission to use, copy, modify and distribute this software and its
// documentation for educational, research and non-profit purposes, without fee,
// and without a written agreement is hereby granted, provided that the above
// copyright notice and the following three paragraphs appear in all copies.
//
// To request permission to incorporate this software into commercial products
// contact MERL - Mitsubishi Electric Research Laboratories, 201 Broadway,
// Cambridge, MA 02139.
//
// IN NO EVENT SHALL MERL BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT, SPECIAL,
// INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING OUT OF
// THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF MERL HAS BEEN ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGES. 

//
// MERL SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
// THE SOFTWARE PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND MERL HAS NO
// OBLIGATIONS TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
// MODIFICATIONS.
//------------------------------------------------------------------------------- 


// Note: this code is a modified version of the original
// code. Original code can be found here: https://www.merl.com/publications/docs/TR2002-41.pdf

#pragma once

#include "CoreMinimal.h"
#include "Math/Vector.h"
#include <array>
#include <memory>
#include <map>
#include <vector>

struct EO_CODE
{
    uint64 X, Y, Z;
    uint64& operator[](int p_index)
    {
        if (p_index == 0) { return X; }
        if (p_index == 1) { return Y; }
        if (p_index == 2) { return Z; }
        else throw std::runtime_error("wrong index");
    }
    EO_CODE& operator=(FIntVector p_vec)
    {
        X = p_vec.X;
        Y = p_vec.Y;
        Z = p_vec.Z;
    }
    EO_CODE& operator=(FVector p_vec)
    {
        X = p_vec.X;
        Y = p_vec.Y;
        Z = p_vec.Z;
    }

    FIntVector toIntVector()
    {
        return { (int)X,(int)Y,(int)Z };
    }

};

typedef FIntVector Voxel;

struct EO_Node
{

    EO_CODE m_code;
    EO_Node* m_parent = nullptr;
    std::array<std::unique_ptr<EO_Node>, 8> m_children;
    FBox m_box;
    unsigned m_level = 0;
    bool m_empty = true;
    short m_index = -1; // node's index in the parent's children
    Voxel m_voxel;

    EO_Node* operator[](short p_index);

    // print out contents of node
    void print() {}

    void createChildren();
    void setBoundingBox(FVector p_min, FVector p_max);
    void setVoxel(Voxel p_vox) { m_voxel = p_vox; m_empty = false; }
    bool noChildrenActive() { return m_children[0] == nullptr; }

    
};


/**
 *
 */
class Efficient_Octree
{
    typedef TArray<EO_Node*> ListOfNodes;
    typedef EO_Node* EO_NodePtr;
    typedef FIntVector Dir;

    enum class BoxComponents
    {
        // Vertices
        LFD = 0, RFD, RBD, LBD,
        LFU, RFU, RBU, LBU,

        // Edges
        FD, RD, BD, LD,
        LF, RF, RB, LB,
        LU, FU, RU, BU,

        // Faces
        L, F, R, B, U, D
    };

    typedef BoxComponents BC;

    static std::map<BC, Dir> g_directions;

    //TArray<EO_Node> m_nodes;

    std::unique_ptr<EO_Node> m_root;
    unsigned m_max_level;
    unsigned m_root_level;
    unsigned m_max_val;
    FVector m_min, m_max;

    EO_CODE convertToEO_Code(FVector p_voxel);

    // get neighbor in specified negative
    // direction aka Left, Back, or Down.
    // Neighbor is either same size or bigger.
    // If no neighbor found, then null is returned.
    EO_NodePtr getNegativeDirNeighbor(EO_NodePtr p_cell, Dir p_dir);
    // get neighbor in specified positive
    // direction aka Right, Forward, or Up
    EO_NodePtr getPositiveDirNeighbor(EO_NodePtr p_cell, Dir p_dir);

    EO_NodePtr getEdgeNeighbor(EO_NodePtr p_cell, Dir p_dir);
    EO_NodePtr getVertexNeighbor(EO_NodePtr p_cell, Dir p_dir);


    // find common parent of 2 nodes given the binary difference in ONE of the
    // axis.
    EO_NodePtr findComPar(EO_NodePtr p_cell, unsigned& p_cellLevel, const unsigned& p_binary_diff);

    // from parent cell, traverse down as far as possible
    EO_NodePtr traverse(EO_NodePtr p_parent_cell,
        unsigned& nextLevel, EO_CODE p_target_cell_code);

    // from parent cell, traverse down to desired cell
    EO_NodePtr traverseToLevel(EO_NodePtr p_parent_cell,
        unsigned& nextLevel, EO_CODE p_target_cell_code,
        unsigned p_level);

    // get diff between two x,y,z codes
    EO_CODE getDiff(EO_CODE A, EO_CODE B);

    // get code of neighbor that only differs in
    // one axis
    int getAxisNeighborCode(int p_old_code, int p_axis_val, int p_cellSize);

    // get neighbor_code that differs on multiple
    // axis.
    EO_CODE getNeighborCode(const EO_CODE& oldCode, Dir p_dir, int p_cellSize);

    // gets position of non zero axis, 
    // Important: assumes only 1 axis is not zero.
    int getAxisIndex(Dir p_dir);

    EO_NodePtr genericAncestorFind(EO_NodePtr p_cell, Dir p_dir);

    friend EO_Node;

    void getLeavesRec(EO_Node*, TArray<EO_Node*>&);
    void getInternalNodesRec(EO_Node * p_node, ListOfNodes& p_array, int p_level);

    Efficient_Octree() : m_max_level(0), m_root_level(0), m_max_val(0) {}

    static short getChildIndex(Voxel p_voxel, unsigned nextLevel);

public:

    static Efficient_Octree& getEO_Tree()
    {
        static Efficient_Octree m_instance;
        return m_instance;
    }

    static Voxel toVoxel(FVector p_vec) { return Voxel{ (int)p_vec.X, (int)p_vec.Y, (int)p_vec.Z, }; }

    ListOfNodes getLeaves();
    TArray<Voxel> getLeafPositions();
    ListOfNodes getInternalNodes();
    TArray<Voxel> getInternalNodePositions();

    ListOfNodes getAllNodes();

    FVector getPos() { return m_root->m_box.GetCenter(); }
    void insert(const Voxel& p_voxel);
    void setDimensions(FIntVector p_dim); // modifies max val
    void clearTree() { m_root.reset(new EO_Node); }

    // given some list of nodes, return their indices and levels
    static std::vector<std::tuple<unsigned, short>> getLevelsAndIndices(const std::vector<EO_Node*>& p_nodes);
    static std::vector<std::tuple<unsigned, short>> getLevelsAndIndices(const TArray<EO_Node*>& p_nodes);

    std::vector<std::tuple<unsigned, short>> getAllLvlAndIndices();


    TArray<EO_NodePtr> getNeighbors(EO_NodePtr p_node);

    // synonymous with traverse
    EO_NodePtr getSmallestNode(Voxel p_voxel);

    bool isValid();
    int getRootLevel() { return m_root_level; }
};
