
#include "OctreeHelpers.h"
#include "EO_Node.hpp"
#include "Math/UnrealMathUtility.h"
#include "Efficient_Octree.h"

#include <cassert>
#include "Math/UnrealMathUtility.h"

void OH::addIfNavigable(Efficient_Octree* p_tree, EO_Node* current, EO_Node* neighbor, TArray<EO_Node*>& outNeighbors, int p_npc_size)
{
    auto neighbor_size = neighbor->getWidth();

    // if a leaf
    if (neighbor->isLeaf())
    {
        if (neighbor_size >= p_npc_size)
        {
            // best case scenario
            if (neighbor->isEmpty())
            {
                outNeighbors.Add(neighbor);
            }
            else 
            {
                // get tunnel region from us to neighbor
                auto region = createRegionBox(current, neighbor, p_npc_size);
                auto line_between = getLine(current, neighbor);
                // check to see if we hit that single voxel within the neighbor.
                // Remember: leaf nodes can easily be bigger than the actual voxels,
                // they contain.
                if (regionCheck(region, line_between, p_npc_size, p_tree))
                {
                    outNeighbors.Add(neighbor);
                }
            }
        }
    }
    else
    {
        int our_cell_size = current->getWidth();
        assert(neighbor_size == our_cell_size);

        // do regionCheck to see if there is a straight path to the neighbor node.
        auto region = createRegionBox(current, neighbor, p_npc_size);
        auto line_between = getLine(current, neighbor);
        if (regionCheck(region, line_between, p_npc_size, p_tree))
        {
            // if there is a straight shot then we'll take it
            // as part of the path (even if its not a leaf)
            outNeighbors.Add(neighbor);
        }
        else
        {
            // If not, get all leaf neighbors on border and see if they can accomadate us.
            auto leaves = getBorderLeaves(current, neighbor);

            // Add leaves that can fit us
            for (auto leaf : leaves)
            {
                addIfNavigable(p_tree, current, leaf, outNeighbors, p_npc_size);
            }
        }
    }
}

void OH::getLeavesWithinRegion(FBox& region, EO_Node* encompassing_cell, TArray<EO_Node*>& outLeaves)
{

    // for each child, if it fits within region
    for (auto& child : encompassing_cell->m_children)
    {
        if (child->IntersectsOrWithin(region))
        {
            if (child->isLeaf())
            {
                outLeaves.Add(child.get());
            }
            else
            {
                getLeavesWithinRegion(region, child.get(), outLeaves);
            }
        }
    }
}

TArray<EO_Node*> OH::getBorderLeaves(EO_Node*us, EO_Node* neighbor)
{
    FIntVector dir = getDir(us, neighbor);

    auto border_begin = FIntVector(us->getCenter()) + compMultiply(dir, FIntVector(us->getExtents()));
    // extend border box by 1 to get closest leaf cells
    auto border_end = border_begin + dir;
    TArray<EO_Node*> leaves_found;
    FBox region{ FVector(border_begin), FVector(border_end) };
    getLeavesWithinRegion(region, neighbor, leaves_found);
    return leaves_found;
}

FBox OH::getVoxelBox(Voxel p_voxel)
{
    return FBox{ FVector(p_voxel), FVector(p_voxel) + FVector{1.0f} };
}

bool OH::regionCheck(FBox p_box, Line p_curr_to_neighbor, unsigned p_npc_size, Efficient_Octree* p_tree)
{
    auto encompassing_cell = p_tree->locateRegionCell(Voxel(p_box.Min), Voxel(p_box.Max));

    TArray<EO_Node* > leaves;
    getLeavesWithinRegion(p_box, encompassing_cell, leaves);

    // check to see if any leaf in particular is too close to the
    // path our character is taking
    float npc_half_size = p_npc_size / 2.0f;

    FVector VoxelCenterOffset = FVector{ 0.5f };

    for (auto& leaf : leaves)
    {
        // there is line/tunnel between us and our neighbor.
        // Its radius is half of the npc's size.
        // The universal size for any VOXEL is 1.0f.
        // Each "voxel" is considered to be the "minimum"
        // of the actual cell, thus its midpoint would actually be voxel + 0.5
        // in each axis.
        FVector voxelPos = FVector(leaf->m_voxel) + VoxelCenterOffset;
        float dist = FMath::PointDistToLine(voxelPos, p_curr_to_neighbor.v2 - p_curr_to_neighbor.v1, p_curr_to_neighbor.v1);
        if (dist < (npc_half_size+0.5f))
        {
            return false;
        }
    }

    return true;
}

FBox OH::createRegionBox(EO_Node*current, EO_Node*neighbor, int p_npc_size)
{

    FVector ourPos = current->getCenter();
    FVector neighborPos = neighbor->getCenter();

    float npc_half_size = p_npc_size / 2.0f;

    // create min and max of box that 
    auto min = ourPos.ComponentMin(neighborPos);
    min += FVector{ -npc_half_size };
    auto max = ourPos.ComponentMax(neighborPos);
    max += FVector{ npc_half_size };

    return FBox{ min, max };

}

FIntVector OH::getDir(EO_Node* A, EO_Node* B)
{
    auto dir = B->getCenter() - A->getCenter();
    return clampVec(FIntVector(dir), -1, 1);
}

//float OH::getDist(EO_Node* A, Line p_line)
//{
//    return FMath::PointDistToLine(A->getCenter(), p_line.v2 - p_line.v1, p_line.v1);
//}

FIntVector OH::compMultiply(FIntVector A, FIntVector B)
{
    return FIntVector{ A.X * B.X, A.Y * B.Y, A.Z * B.Z};
}

FIntVector OH::clampVec(FIntVector A, int min, int max)
{
    return FIntVector{ FMath::Clamp(A.X, min, max), FMath::Clamp(A.Y, min, max), FMath::Clamp(A.Z, min, max) };
}

OH::Line OH::getLine(EO_Node* A, EO_Node* B)
{
    return Line{ A->getCenter(), B->getCenter() };
}
