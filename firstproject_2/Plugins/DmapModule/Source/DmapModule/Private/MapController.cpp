// Fill out your copyright notice in the Description page of Project Settings.

#include "MapController.h"
#include "Modules/ModuleManager.h"
#include "AssetRegistryModule.h"
#include "DmapAsset.h"
#include "AssetData.h"
#include "UObject/ConstructorHelpers.h"
#include "DmapAsset.h"
#include "Octree.h"
#include "DrawDebugHelpers.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UMapController::UMapController() : m_tree(new Octree)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

UMapController::~UMapController() 
{
	delete m_tree;
}


// Called when the game starts
void UMapController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMapController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMapController::LoadMap(FString p_map_name, AActor* p_asteroid_archetype)
{

	FAssetRegistryModule& m_module =
		FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	IAssetRegistry& l_registry = m_module.Get(); 

	TArray<FAssetData> AssetData;
	const UClass* Class = UDmapAsset::StaticClass();
	auto l_class_name = Class->GetName();
	if (l_registry.GetAssetsByClass(*l_class_name, AssetData))
	{

		FName l_map_name(*p_map_name);

		for (auto& l_asset : AssetData)
		{
			// TODO: find faster way to search
			if (l_asset.AssetName.Compare(l_map_name) == 0)
			{

				// resize 
				UDmapAsset* asset = Cast<UDmapAsset>(l_asset.GetAsset());

				auto& data = asset->getFileData();

				m_tree->clearTree();
				m_tree->setupDimensions(asset->getDimensions() * voxel_scalar);

				for (const FVector& v : data)
				{
                // multiply data by scalar
					m_tree->insertVoxel(v * voxel_scalar);
				}

				// now to draw the octree

				// first get all the nodes,
                TArray<OctreeNode*> nodes = m_tree->getLeaves();

                //UInstancedStaticMeshComponent
                auto hierarchical_mesh = Cast< UHierarchicalInstancedStaticMeshComponent>(
                    p_asteroid_archetype->GetComponentByClass(UHierarchicalInstancedStaticMeshComponent::StaticClass()));
                hierarchical_mesh->ClearInstances();

				// then for each node get its 8 points
                for (auto& node : nodes)
                {
                    //auto points = node->get8Points();
				    // then draw box from those 8 points
                    //drawBox(points);

                    drawAsteroid(node->m_voxel, hierarchical_mesh);

                }

			}
		}
	}

}

void UMapController::drawBox(const TArray<FVector>& p_points)
{
	//Assume indices are in this order:
	// back bottom left	  0
	// back bottom right  1
	// front bottom right 2      
	// front bottom left  3
	// back top left      4
	// back top right     5
	//front top right     6
	// front top left     7
	
    // 12 lines in total
    TArray<FIntPoint> indices{ 
    {0,1},
    {1,2},
    {2,3},
    {3,0},
    
    {4,5},
    {5,6},
    {6,7},
    {7,4},
    
    {0,4},
    {1,5},
    {2,6},
    {3,7}
    };

    auto world = GetWorld();

    for (auto& line : indices)
    {
        auto begin = p_points[line.X];
        auto end = p_points[line.Y];

        DrawDebugLine(world, begin, end, 
            FColor::Emerald, true, -1, 0, debug_line_width);
    }

}

void UMapController::drawAsteroid(const FVector & p_pos, UHierarchicalInstancedStaticMeshComponent* p_mesh)
{
    // find object with hierarchical instanced mesh
    // UInstancedStaticMeshComponent
    // asteroid_instance

    FTransform l_trans(p_pos);

    if (p_mesh)
    {
        p_mesh->AddInstance(l_trans);
    }

}

