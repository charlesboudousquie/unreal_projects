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

#include <map>
#include <vector>
#include <memory>

struct EO_Node;
using Voxel = FIntVector;



/**
 *
 */
class Efficient_Octree
{
    typedef TArray<EO_Node*> ListOfNodes;
    typedef EO_Node* EO_NodePtr;
    typedef FIntVector Dir;
    typedef FIntVector EO_CODE;

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

    std::unique_ptr<EO_Node> m_root;
    unsigned m_max_level;
    unsigned m_root_level;
    unsigned m_max_val;
    float m_current_npc_width = 1;
    FVector m_min, m_max;

    

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

    Voxel getDiff(Voxel A, Voxel B) { return Voxel{ A.X ^ B.X, A.Y ^ B.Y, A.Z ^ B.Z}; }

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

    FBox createVoxelBox(Voxel p_pos) { return FBox(FVector(p_pos) + FVector{ -0.5f }, FVector(p_pos) + FVector{0.5f}); }
    //bool checkRegion(FBox p_box, EO_Node* p_curr);
    //bool isNavigable(EO_Node* p_neighbor);

public:

    static Efficient_Octree& getEO_Tree()
    {
        static Efficient_Octree m_instance;
        return m_instance;
    }

    static Voxel toVoxel(FVector p_vec) { return Voxel{ (int)p_vec.X, (int)p_vec.Y, (int)p_vec.Z, }; }

    //-------------------------------------------------------------------------------
    // Locate the smallest cell that entirely contains a rectangular region defined
    // by its min and max vertex
    //------------------------------------------------------------------------------- 
    EO_NodePtr locateRegionCell(Voxel p_min, Voxel p_max);

    ListOfNodes getLeaves();
    TArray<Voxel> getLeafPositions();
    ListOfNodes getInternalNodes();
    TArray<Voxel> getInternalNodePositions();

    ListOfNodes getAllNodes();

    FVector getPos();// { return m_root->m_box.GetCenter(); }
    void insert(const Voxel& p_voxel);
    void setDimensions(FIntVector p_dim); // modifies max val
    void setNPCWidth(int p_width) { m_current_npc_width = p_width; }
    void clearTree();// { m_root.reset(new EO_Node); }

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
