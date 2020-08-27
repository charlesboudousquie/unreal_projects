

#pragma once
#include "CoreMinimal.h"
#include "Math/IntVector.h"
#include "Math/Vector.h"
#include "Containers/Array.h"
#include "Math/Box.h"
#include "Math/TwoVectors.h"

struct EO_Node;
class Efficient_Octree;

namespace OH
{
    typedef FIntVector Voxel;
    typedef FTwoVectors Line;
    void addIfNavigable(Efficient_Octree* p_tree,EO_Node* current, EO_Node* neighbor, TArray<EO_Node* >& outNeighbors, int p_npc_size);

    void getLeavesWithinRegion(FBox& region, EO_Node* encompassing_cell, TArray<EO_Node* >& outLeaves);

    TArray<EO_Node*> getBorderLeaves(EO_Node* us, EO_Node* neighbor);

    FBox getVoxelBox(Voxel p_voxel);

    FBox createRegionBox(EO_Node* current, EO_Node* neighbor, int p_npc_size);

    bool regionCheck(FBox p_box, Line p_curr_to_neighbor, unsigned p_npc_size, Efficient_Octree* p_tree);

    // component wise multiplication
    FIntVector compMultiply(FIntVector A, FIntVector B);

    FIntVector getDir(EO_Node* A, EO_Node* B);

    Line getLine(EO_Node* A, EO_Node* B);

    //float getDist(EO_Node* A, Line p_line);

    FIntVector clampVec(FIntVector A, int min, int max);

}


