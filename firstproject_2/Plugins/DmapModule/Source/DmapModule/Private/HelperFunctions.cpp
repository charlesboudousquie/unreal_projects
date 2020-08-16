// Fill out your copyright notice in the Description page of Project Settings.


#include "HelperFunctions.h"

#include <assert.h>
#include "Engine/StaticMesh.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Efficient_Octree.h"

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

//void UHelperFunctions::drawInstance(const FVector& p_pos, UHierarchicalInstancedStaticMeshComponent* p_mesh)
//{
//}

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

void UHelperFunctions::drawNode(const FBox & p_box, UHierarchicalInstancedStaticMeshComponent * p_mesh,float p_voxel_scalar)
{
    auto stat_mesh = p_mesh->GetStaticMesh();

    auto bounds = stat_mesh->GetBounds().BoxExtent;

    auto rotator = FRotator::ZeroRotator;
    auto center = p_box.GetCenter();
    auto extents = p_box.GetExtent();

    auto scalar = p_voxel_scalar > 0 ? p_voxel_scalar : extents.X;
    //FTransform l_transform(rotator, center, extents / bounds.X);
    FTransform l_transform(rotator, center, FVector{ scalar / bounds.X });
    auto instance_id = p_mesh->AddInstanceWorldSpace(l_transform);
}

void UHelperFunctions::drawInstances(AActor * p_asteroid_archetype,
    const TArray<EO_Node*>& p_instances, float p_voxel_scalar, bool clearInstances)
{
    auto l_mesh = p_asteroid_archetype->FindComponentByClass<UHierarchicalInstancedStaticMeshComponent>();
    assert(l_mesh != nullptr);

    if (clearInstances) { l_mesh->ClearInstances(); }

    // draw each node
    for (auto& instance : p_instances)
    {
        drawNode(instance->m_box, l_mesh, p_voxel_scalar);
    }
}

void UHelperFunctions::drawInstance(UHierarchicalInstancedStaticMeshComponent * p_hierarchical_mesh,
    const EO_Node* p_instance, float p_voxel_scalar, bool clearInstances)
{
    assert(p_hierarchical_mesh != nullptr);

    if (clearInstances) { p_hierarchical_mesh->ClearInstances(); }

    drawNode(p_instance->m_box, p_hierarchical_mesh, p_voxel_scalar);
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

