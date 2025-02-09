// Fill out your copyright notice in the Description page of Project Settings.


#include "HelperFunctions.h"

#include <assert.h>
#include "Engine/StaticMesh.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Efficient_Octree.h"
#include "EO_Node.hpp"

TArray<FColor> UHelperFunctions::g_colors =
{
    FColor::White,       // 0
    FColor::Black,       // 1
    FColor::Red,         // 2
    FColor::Green,       // 3
    FColor::Blue,        // 4
    FColor::Yellow,      // 5
    FColor::Cyan,        // 6
    FColor::Magenta,     // 7
    FColor::Orange,      // 8
    FColor::Purple,      // 9
    FColor::Turquoise,   // 10
    FColor::Silver,      // 11
    FColor::Emerald      // 12

};

AActor * UHelperFunctions::getActorWithTag(FName & p_tag, const UObject* p_world_obj)
{
    TArray<AActor*> OutActors;
    UGameplayStatics::GetAllActorsWithTag(p_world_obj, p_tag, OutActors);

    // there should be only one
    if (OutActors.Num() != 1)
    {
        return nullptr;
    }

    return OutActors[0];
}

FColor UHelperFunctions::chooseColor(int p_level)
{
    return g_colors[p_level % g_colors.Num()];
}

UHierarchicalInstancedStaticMeshComponent* UHelperFunctions::getInstanceMesh(AActor *p_archetype)
{
    return p_archetype->FindComponentByClass<UHierarchicalInstancedStaticMeshComponent>();
}

std::unordered_map<int, TArray<EO_Node*>> UHelperFunctions::partitionNodes(const TArray<EO_Node*>& p_nodes)
{
    std::unordered_map<int, TArray<EO_Node*>> l_map;
    for (auto& node : p_nodes)
    {
        l_map[node->m_level].Add(node);
    }

    return l_map;
}


void UHelperFunctions::setNodeInfo(DrawInfo& p_info, 
    float p_vox_scalar, bool p_is_leaf,
    UHierarchicalInstancedStaticMeshComponent* p_mesh,
    TArray<EO_Node*>& p_instances,
    bool p_should_clear_instances)
{
    p_info.m_voxel_scalar = p_vox_scalar;
    p_info.m_is_leaf = p_is_leaf;
    p_info.m_mesh = p_mesh;
    Swap(p_info.m_instances, p_instances);
    p_info.m_should_clear_instances = p_should_clear_instances;
}

void UHelperFunctions::drawNode(const DrawInfo& p_info, EO_Node* p_node)
{
    auto stat_mesh = p_info.m_mesh->GetStaticMesh();

    //auto 
    FVector mesh_extents; 

    auto rotator = FRotator::ZeroRotator;
    FVector center;
    float size = p_info.m_voxel_scalar;
    if (p_info.m_is_leaf)
    {
        // "m_voxel" itself is the minimum corner of the voxel
        // thus add 0.5 to get actual center
        center = (FVector(p_node->m_voxel) + FVector{ 0.5f }) * p_info.m_voxel_scalar;
        mesh_extents = stat_mesh->GetBounds().GetBox().GetSize(); // wtf??????
    }
    else
    {
        size *= p_node->m_box.GetExtent().X;
        center = p_node->m_box.GetCenter() * p_info.m_voxel_scalar;
        mesh_extents = stat_mesh->GetBounds().BoxExtent; // ???? TODO, further research as to why extents differ
    }

    FTransform l_transform(rotator, center, FVector{ size / mesh_extents.X });
    //auto instance_id = p_info.m_mesh->AddInstanceWorldSpace(l_transform);
    auto instance_id = p_info.m_mesh->AddInstance(l_transform, true);
}

void UHelperFunctions::drawInstances(const DrawInfo& p_info)
{
    auto l_mesh = p_info.m_mesh;// ->FindComponentByClass<UHierarchicalInstancedStaticMeshComponent>();
    assert(l_mesh != nullptr);

    if (p_info.m_should_clear_instances) { l_mesh->ClearInstances(); }

    // draw each node
    for (auto& instance : p_info.m_instances)
    {
        drawNode(p_info, instance);
    }
}






































// Sets default values for this component's properties
UHelperFunctions::UHelperFunctions()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UHelperFunctions::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UHelperFunctions::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
