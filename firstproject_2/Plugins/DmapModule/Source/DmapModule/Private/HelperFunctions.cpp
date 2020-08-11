// Fill out your copyright notice in the Description page of Project Settings.


#include "HelperFunctions.h"

#include <assert.h>
#include "Engine/StaticMesh.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


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

void UHelperFunctions::drawNode(FBox & p_box, UHierarchicalInstancedStaticMeshComponent * p_mesh)
{
    auto stat_mesh = p_mesh->GetStaticMesh();

    auto bounds = stat_mesh->GetBounds().BoxExtent;

    auto rotator = FRotator::ZeroRotator;
    auto center = p_box.GetCenter();
    auto extents = p_box.GetExtent();
    FTransform l_transform(rotator, center, extents / bounds.X);
    auto instance_id = p_mesh->AddInstanceWorldSpace(l_transform);
}

void UHelperFunctions::drawInstances(AActor * p_asteroid_archetype, const TArray<FVector>& p_positions, bool clearInstances)
{
    auto l_mesh = p_asteroid_archetype->FindComponentByClass<UHierarchicalInstancedStaticMeshComponent>();
    assert(l_mesh != nullptr);

    l_mesh->ClearInstances();


    for (auto& pos : p_positions)
    {
        FTransform l_trans(pos);
        l_mesh->AddInstance(l_trans);
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

