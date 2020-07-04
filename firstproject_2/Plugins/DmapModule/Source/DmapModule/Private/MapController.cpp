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
#include <cassert>

#include "Engine/StaticMesh.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

#include "Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

TArray<FColor> UMapController::g_colors =
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

FColor UMapController::chooseColor(int p_level)
{
    return g_colors[p_level % g_colors.Num()];
}

// Sets default values for this component's properties
UMapController::UMapController() : m_tree(new Octree)
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
    delete m_tree;
}


// Called when the game starts
void UMapController::BeginPlay()
{
    Super::BeginPlay();


    FName l_tag("oct_archetype");

    TArray<AActor*> OutActors;
    UGameplayStatics::GetAllActorsWithTag(this, l_tag, OutActors);

    // there should be only one
    if (OutActors.Num() != 1)
    {
        return;
    }

    auto parent_mesh = OutActors[0]->FindComponentByClass<UHierarchicalInstancedStaticMeshComponent>();

    // create meshes for the different levels
    for (auto color : g_colors)
    {
        // slightly dangerous
        FName name = *("Mesh_" + color.ToString());

        // create hierarchical mesh
        auto new_mesh = NewObject<UHierarchicalInstancedStaticMeshComponent>(this); // outer == owner i think
        // copy over values
        new_mesh = DuplicateObject(parent_mesh, new_mesh, name);
        // finally add it to list
        m_meshes.Add(new_mesh);



        // Create Object
        //UInstancedStaticMeshComponent* new_comp = NewObject<UInstancedStaticMeshComponent>(GetWorld()->GetCurrentLevel());
        // Attach to actor
        new_mesh->SetupAttachment(GetOwner()->GetRootComponent());
        // Set Static Mesh
        new_mesh->SetStaticMesh(parent_mesh->GetStaticMesh());
        // Register
        new_mesh->RegisterComponentWithWorld(GetWorld());
      


    }

    for (auto mesh : m_meshes)
    {
        auto stat_mesh = mesh->GetStaticMesh();

        auto box = stat_mesh->GetBoundingBox();
        auto& model = stat_mesh->GetSourceModel(0);
    }


    // create material instances for each mesh
    this->setMaterials();

}

void UMapController::drawNode(FBox & p_box, UHierarchicalInstancedStaticMeshComponent * p_mesh)
{

    auto rotator = FRotator::ZeroRotator;
    auto center = p_box.GetCenter();
    auto extents = p_box.GetExtent();
    FTransform l_transform(rotator, center, {10,10,10});
    //auto instance_id = p_mesh->AddInstance(l_transform);
    auto instance_id = p_mesh->AddInstanceWorldSpace(l_transform);
}


// Called every frame
void UMapController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // ...
}

void UMapController::LoadMap(FString p_map_name, AActor* p_asteroid_archetype/*, TArray<AActor*> p_octree_node_archetypes*/)
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

                UDmapAsset* asset = Cast<UDmapAsset>(l_asset.GetAsset());
                auto& data = asset->getFileData();

                // clear and scale tree dimensions
                m_tree->clearTree();
                m_tree->setupDimensions(asset->getDimensions() * voxel_scalar);

                for (const FVector& v : data)
                {
                    // multiply data by scalar
                    m_tree->insertVoxel(v * voxel_scalar);
                }

                this->drawInternalNodes(/*p_octree_node_archetypes*/);

                this->drawLeaves(p_asteroid_archetype);

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
    /*auto leaves = m_tree->getLeaves();
    if (leaves.Num() > 0)
    {
        return leaves[0]->m_box.GetCenter();
    }

    return {0,0,0};*/
    return m_tree->getPos();
}

void UMapController::drawBox(const TArray<FVector>& p_points, int p_level)
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
        auto& begin = p_points[line.X];
        auto& end = p_points[line.Y];

        auto l_color = chooseColor(p_level);

        //DrawDebugBox(world,);
        DrawDebugLine(world, begin, end,
            l_color, true, -1, 0, debug_line_width);
    }

}

void UMapController::drawAsteroid(const FVector & p_pos, UHierarchicalInstancedStaticMeshComponent* p_mesh)
{
    // find object with hierarchical instanced mesh
    // UInstancedStaticMeshComponent
    // asteroid_instance

    //auto rotator = FRotator::ZeroRotator;
    //FTransform l_trans(rotator, p_pos, {2,2,2});
    FTransform l_trans(p_pos);

    if (p_mesh)
    {
        p_mesh->AddInstance(l_trans);
    }

}

void UMapController::drawInternalNodes(/*TArray<AActor*> p_octree_node_archetypes*/)
{

    // clear out old instances
    for (auto l_mesh : m_meshes)
    {
        l_mesh->ClearInstances();
    }

    for (auto l_mesh : m_meshes)
    {
        auto stat_mesh = l_mesh->GetStaticMesh();
        const auto& mat = stat_mesh->GetMaterial(0);
        auto base_mat = mat->GetBaseMaterial();
    }

    // find mesh based on node's level
    auto find_corresponding_mesh = [&](int p_level)
    {
        return m_meshes[p_level % m_meshes.Num()];
    };

    // now to draw the octree internal nodes
    auto internal_nodes = m_tree->getInternalNodes();

    for (auto& node : internal_nodes)
    {
        // the mesh chosen is based on the level
        // each level will have a differently colored wireframe
        auto& l_box = node->m_box;
        drawNode(l_box, find_corresponding_mesh(node->m_level));
    }

}

void UMapController::drawLeaves(AActor * p_asteroid_archetype)
{
    // get all leaf nodes
    TArray<OctreeNode*> nodes = m_tree->getLeaves();

    auto asteroid_mesh = p_asteroid_archetype->FindComponentByClass<UHierarchicalInstancedStaticMeshComponent>();
    assert(asteroid_mesh != nullptr);

    asteroid_mesh->ClearInstances();

    // then for each node get its 8 points
    for (auto& node : nodes)
    {
        drawAsteroid(node->m_voxel, asteroid_mesh);
    }
}

void UMapController::setMaterials(/*TArray<AActor*> p_octree_node_archetypes*/)
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
        l_dynamic_material->SetVectorParameterValue(TEXT("Color"), chooseColor(color_index));

        color_index++;
    }

}

