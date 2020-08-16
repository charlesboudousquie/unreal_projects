// Fill out your copyright notice in the Description page of Project Settings.

#include "MapController.h"
#include "Modules/ModuleManager.h"
#include "AssetRegistryModule.h"
#include "DmapAsset.h"
#include "AssetData.h"
#include "UObject/ConstructorHelpers.h"
#include "DmapAsset.h"
//#include "Octree.h"
#include "Efficient_Octree.h"
#include "HelperFunctions.h"
#include "DrawDebugHelpers.h"
#include <cassert>
#include <vector>

#include "Engine/StaticMesh.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

#include "Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine.h"



// Sets default values for this component's properties
UMapController::UMapController() : m_tree(&Efficient_Octree::getEO_Tree())
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;

    // ...

    auto instance = ConstructorHelpers::FObjectFinder<UMaterialInterface>(TEXT("Material'/DmapModule/materials/M_wireframe.M_wireframe'"));
    if (instance.Object)
    {
        m_wireframe_material = instance.Object;
    }
}

UMapController::~UMapController()
{
    //delete m_tree;
}


// Called when the game starts
void UMapController::BeginPlay()
{
    Super::BeginPlay();


    FName l_tag("oct_archetype");

    m_octree_archetype = UHelperFunctions::getActorWithTag(l_tag, this);// OutActors[0];

    auto parent_mesh = m_octree_archetype->FindComponentByClass<UHierarchicalInstancedStaticMeshComponent>();

    auto& colors = UHelperFunctions::getColors();

    // create meshes for the different levels
    for (auto& color : colors)
    {
        // slightly dangerous
        FName name = *("Mesh_" + color.ToString());

        // create hierarchical mesh
        auto new_mesh = NewObject<UHierarchicalInstancedStaticMeshComponent>(this); // outer == owner i think
        // copy over values
        new_mesh = DuplicateObject(parent_mesh, new_mesh, name);
        // finally add it to list
        m_meshes.Add(new_mesh);

        // it is weird that the map controller contains the meshes
        // that are parented to the octree_archetype???

        // Create Object
        // Attach to actor
        new_mesh->SetupAttachment(m_octree_archetype->GetRootComponent());
        // Set Static Mesh
        new_mesh->SetStaticMesh(parent_mesh->GetStaticMesh());
        // Register
        new_mesh->RegisterComponentWithWorld(GetWorld());



    }

    // create material instances for each mesh
    this->setMaterials();

}

// Called every frame
void UMapController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // ...
}

void UMapController::LoadMap(FString p_map_name, AActor* p_asteroid_archetype)
{

    FAssetRegistryModule& m_module = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    IAssetRegistry& l_registry = m_module.Get();

    TArray<FAssetData> AssetData;
    const UClass* Class = UDmapAsset::StaticClass();
    auto l_class_name = Class->GetName();

    // if asset typeexists
    if (l_registry.GetAssetsByClass(*l_class_name, AssetData))
    {
        // convert to name
        FName l_map_name(*p_map_name);

        // TODO: find faster way to search
        for (auto& l_asset : AssetData)
        {
            if (l_asset.AssetName.Compare(l_map_name) == 0)
            {

                if (m_use_unit_test)
                {
                    unit_Test(p_asteroid_archetype);
                }
                else
                {
                    UDmapAsset* asset = Cast<UDmapAsset>(l_asset.GetAsset());
                    auto& data = asset->getFileData();

                    // clear and scale tree dimensions
                    m_tree->clearTree();
                    m_tree->setDimensions(asset->getDimensions() * m_mesh_scalar);

                    for (const FVector& v : data)
                    {
                        // multiply data by scalar
                        m_tree->insert(Efficient_Octree::toVoxel(v * m_mesh_scalar));
                    }

                    this->drawInternalNodes();

                    this->drawLeaves(p_asteroid_archetype);
                }

                break;
            }
        }
    }

}

bool UMapController::octreeExists()
{
    return m_tree != nullptr;
}

FVector UMapController::getOctreePos()
{
    return m_tree->getPos();
}

void UMapController::drawInternalNodes()
{

    // clear out old instances
    for (auto l_mesh : m_meshes)
    {
        l_mesh->ClearInstances();
    }

    // find mesh based on node's level
    auto find_corresponding_mesh = [&](int p_level)
    {
        return m_meshes[p_level % m_meshes.Num()];
    };

    // now to draw the octree internal nodes
    auto internal_nodes = m_tree->getInternalNodes();

    for (auto node : internal_nodes)
    {
        // the mesh chosen is based on the level
        // each level will have a differently colored wireframe
        auto& l_box = node->m_box;
        UHelperFunctions::drawInstance(find_corresponding_mesh(node->m_level), node, -1.0f, false);
    }

}

void UMapController::drawLeaves(AActor * p_asteroid_archetype)
{
    UHelperFunctions::drawInstances(p_asteroid_archetype, m_tree->getLeaves(), m_mesh_scalar);
}

void UMapController::setMaterials()
{

    UMaterialInterface* ParentMaterial = m_wireframe_material; //hierarchy_mesh->GetMaterial(0);
    //static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/DmapModule/materials/M_wireframe.M_wireframe'"));


    int color_index = 0;
    for (auto l_mesh : m_meshes)
    {
        auto l_dynamic_material = UMaterialInstanceDynamic::Create(ParentMaterial, this);
        m_materials.Add(l_dynamic_material);
        l_mesh->SetMaterial(0, l_dynamic_material);

        // set the color that contributes to the base color
        l_dynamic_material->SetVectorParameterValue(TEXT("Color"), UHelperFunctions::chooseColor(color_index));

        color_index++;
    }

}

void UMapController::unit_Test(AActor* p_asteroid_archetype)
{

    // clear and scale tree dimensions
    m_tree->clearTree();
    m_tree->setDimensions(FVector{ 8 } *m_mesh_scalar);

    std::vector<FVector> data =
    {
        //FVector{0}, FVector{0,0,1}, FVector{0,1,0}, FVector{0,1,1}, FVector{1,0,0}, FVector{1,0,1}, FVector{1,1,0}, FVector{1},
        FVector{7,7,7}, FVector{5,5,5},
    };

    for (const FVector& v : data)
    {
        // multiply data by scalar
        m_tree->insert(Efficient_Octree::toVoxel(v * m_mesh_scalar));
    }

    assert(m_tree->isValid());

    /*auto node = m_tree->getSmallestNode(FVector{ 0 });
    auto node2 = m_tree->getSmallestNode(FVector{ 1 });*/

    auto node = m_tree->getSmallestNode(Efficient_Octree::toVoxel(FVector{ 0 }));
    auto node2 = m_tree->getSmallestNode(Efficient_Octree::toVoxel(FVector{ 5 }));


    auto neighbors = m_tree->getNeighbors(node2);

    if (m_draw_internal_nodes)
    {
        this->drawInternalNodes();
    }

    if (m_draw_leaves)
    {
        this->drawLeaves(p_asteroid_archetype);
    }
}

