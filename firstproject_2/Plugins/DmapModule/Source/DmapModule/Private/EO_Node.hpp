
#pragma once
#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Math/Box.h"

#include <array>
#include <memory>

struct EO_Node
{
    typedef FIntVector Voxel;
    FIntVector m_code; // EO_CODE m_code;
    EO_Node* m_parent = nullptr;
    std::array<std::unique_ptr<EO_Node>, 8> m_children;
    FBox m_box;
    unsigned m_level = 0;
    bool m_empty = true;
    short m_index = -1; // node's index in the parent's children
    Voxel m_voxel;

    FVector getCenter() { return m_box.GetCenter(); }
    FVector getExtents() { return m_box.GetExtent(); }
    bool IntersectsOrWithin(const FBox& p_region);

    EO_Node* operator[](short p_index);

    // print out contents of node
    void print() {}

    void createChildren();
    void setBoundingBox(FVector p_min, FVector p_max);
    void setVoxel(Voxel p_vox) { m_voxel = p_vox; m_empty = false; }

    bool isLeaf() { return m_children[0] == nullptr; }
    bool isEmpty() { return m_empty; }

    bool collides(FBox p_npc); // tells you if given npc would collide with voxel
    int getWidth() { return m_box.GetExtent().X; }
};

