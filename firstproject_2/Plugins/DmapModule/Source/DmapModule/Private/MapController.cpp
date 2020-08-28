// Fill out your copyright notice in the Description page of Project Settings.

//#include "Octree.h"
#include "MapController.h"
#include "Modules/ModuleManager.h"
#include "AssetRegistryModule.h"
#include "DmapAsset.h"
#include "AssetData.h"
#include "UObject/ConstructorHelpers.h"
#include "DmapAsset.h"
#include "Octree_AStar.h"
#include "Efficient_Octree.h"
#include "HelperFunctions.h"
#include "DrawDebugHelpers.h"
#include "EO_Node.hpp"
#include <cassert>
#include <vector>

#include "Kismet/KismetMathLibrary.h"

#include "Engine/StaticMesh.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

#include "UpdateablePriorityQueue.h"

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

UMapController::~UMapController() {}

// Called when the game starts
void UMapController::BeginPlay()
{
    Super::BeginPlay();

    m_oct_solver = NewObject<UOctree_AStar>(this);

    FName l_oct_tag("oct_archetype");
    m_octree_archetype = UHelperFunctions::getActorWithTag(l_oct_tag, this);
    FName l_ast_tag("asteroid_archetype");
    m_asteroid_archetype = UHelperFunctions::getActorWithTag(l_ast_tag, this);

    FName l_path_tag("path_archetype");
    m_path_archetype = UHelperFunctions::getActorWithTag(l_path_tag, this);

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

void UMapController::drawNodes(const TArray<EO_Node*>& p_nodes)
{

    auto partitioned_nodes = UHelperFunctions::partitionNodes(p_nodes);

    for (auto& node_level : partitioned_nodes)
    {
        // the mesh chosen is based on the level
        // each level will have a differently colored wireframe
        int l_level = node_level.first;

        UHelperFunctions::DrawInfo info;
        UHelperFunctions::setNodeInfo(info, m_mesh_scalar, false,
            find_corresponding_mesh(l_level),
            node_level.second,
            true
        );
        UHelperFunctions::drawInstances(info);
    }

}

// Called every frame
void UMapController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // ...
}

void UMapController::LoadMap(FString p_map_name)
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
                // if we wish to solve it in one call
                /*if (!m_debugging_astar_loop)
                {*/
                    if (m_use_unit_test)
                    {
                        unit_Test();
                    }
                    else
                    {
                        UDmapAsset* asset = Cast<UDmapAsset>(l_asset.GetAsset());
                        const auto& data = asset->getFileData();

                        setupTree(data, asset->getDimensions(), m_npc_width);
                        auto node = m_tree->getSmallestNode(m_start);
                        auto node2 = m_tree->getSmallestNode(m_end);

                        auto path = UHelperFunctions::toTArray(m_oct_solver->solve(m_tree, node, node2));

                        draw({}, path);
                    }
                //}
                /*else
                {
                    unit_Test();
                    
                }*/

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

UHierarchicalInstancedStaticMeshComponent* UMapController::find_corresponding_mesh(int p_level)
{
    return m_meshes[p_level % m_meshes.Num()];
}

void UMapController::drawInternalNodes()
{

    // now to draw the octree internal nodes
    TArray<EO_Node*> internal_nodes = m_tree->getInternalNodes();

    auto partitioned_nodes =
        UHelperFunctions::partitionNodes(internal_nodes);


    for (auto& node_level : partitioned_nodes)
    {
        // the mesh chosen is based on the level
        // each level will have a differently colored wireframe
        int l_level = node_level.first;

        UHelperFunctions::DrawInfo info;
        UHelperFunctions::setNodeInfo(info, m_mesh_scalar, false,
            find_corresponding_mesh(l_level),
            node_level.second,
            true
        );
        UHelperFunctions::drawInstances(info);
    }

}

void UMapController::drawLeaves()
{
    UHelperFunctions::DrawInfo info;
    auto leaves = m_tree->getLeaves();
    UHelperFunctions::setNodeInfo(info, m_mesh_scalar, true,
        UHelperFunctions::getInstanceMesh(m_asteroid_archetype),
        leaves,
        true
    );
    UHelperFunctions::drawInstances(info);
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

void UMapController::drawPath(const TArray<EO_Node*>& p_nodes)
{
    auto hier_mesh = UHelperFunctions::getInstanceMesh(m_path_archetype);
    auto stat_mesh = hier_mesh->GetStaticMesh();
    auto mesh_extents = stat_mesh->GetBounds().GetBox().GetSize();

    for (int i = 0; i < p_nodes.Num() - 1; i++)
    {
        auto first = p_nodes[i];
        auto second = p_nodes[i + 1];

        // positions are relative to mesh scalar
        auto firstPos = first->m_box.GetCenter() * m_mesh_scalar;
        auto secondPos = second->m_box.GetCenter()* m_mesh_scalar;
        auto center = (firstPos + secondPos) / 2.0f;

        auto diff = secondPos - firstPos;
        float scale = diff.Size();

        auto rot = UKismetMathLibrary::FindLookAtRotation(firstPos, secondPos);


        // x axis should be forward vector
        FTransform l_transform(rot, center, FVector{ scale / mesh_extents.X,m_debug_line_width,m_debug_line_width });
        auto instance_id = hier_mesh->AddInstanceWorldSpace(l_transform);
    }
}


void UMapController::drawOctDebugBox(EO_Node* p_node, FColor p_color)
{
    DrawDebugBox(GetWorld(), p_node->m_box.GetCenter() * m_mesh_scalar, p_node->m_box.GetExtent()* m_mesh_scalar, FQuat::Identity, p_color, true, -1, 0, m_debug_line_width);
}

void UMapController::drawDebugBoxes(const TArray<EO_Node*>& p_nodes)
{

    for (auto& node : p_nodes)
    {
        drawOctDebugBox(node, FColor::Green);
    }
}

void UMapController::unit_Test()
{
    int l_tree_width = 8;
    TArray<Voxel> data =
    {
        //FVector{0}, FVector{0,0,1}, FVector{0,1,0}, FVector{0,1,1}, FVector{1,0,0}, FVector{1,0,1}, FVector{1,1,0}, FVector{1},
         //Voxel{5}, /*Voxel{6}, Voxel{7},*/
    };

    auto generateData = [&](int y, int z)
    {
        for (int i = 0; i < l_tree_width; i++)
        {
            data.Add(Voxel{ y,i,z });
        }
    };

    std::vector<FIntPoint> specialPillars
    {
        {4,1},{4,3},{4,5},{5,2},{5,0}
    };

    std::for_each(specialPillars.begin(), specialPillars.end(), [&](FIntPoint p_pillar) { generateData(p_pillar.X, p_pillar.Y); });


    setupTree(data, Voxel{ l_tree_width }, m_npc_width);

    auto region1 = m_tree->locateRegionCell(Voxel{ 0 }, Voxel{ 7 });
    auto region2 = m_tree->locateRegionCell(Voxel{ 1 }, Voxel{ 1,1,7 });
    auto region3 = m_tree->locateRegionCell(Voxel{ 0 }, Voxel{ 0,7,3 });
    auto region4 = m_tree->locateRegionCell(Voxel{ 6 }, Voxel{ 7 });
    auto region5 = m_tree->locateRegionCell(Voxel{ 4 }, Voxel{ 7 });
    auto region6 = m_tree->locateRegionCell(Voxel{ 5 }, Voxel{ 7 });

    drawOctDebugBox(region1, FColor::Green);
    drawOctDebugBox(region2, FColor::Red);
    drawOctDebugBox(region3, FColor::Blue);

    auto node = m_tree->getSmallestNode(Voxel{ 0 });
    auto node2 = m_tree->getSmallestNode(Voxel{ 5 });
    auto node3 = m_tree->getSmallestNode(Voxel{ 7,0,0 });

    auto neighbors = m_tree->getNeighbors(node);

    m_oct_solver->setup(m_tree, node, node3);

    /*std::vector<EO_Node*> path = m_oct_solver->solve(m_tree, node, node3);
    draw(neighbors.Array(), UHelperFunctions::toTArray<EO_Node*>(path));*/

}

void UMapController::draw(const TArray<EO_Node*>& p_neighbors, const TArray<EO_Node*>& p_path)
{
    // if there is at least a beginning and end
    if (m_draw_path_lines && (p_path.Num() >= 2))
    {
        // trim off begining and end since we will render them first in red
        drawOctDebugBox(p_path[0], m_start_color);
        drawOctDebugBox(p_path.Last(), m_end_color);

        drawPath(p_path);
    }

    if (m_draw_path_nodes)
    {
        drawNodes(p_path);
    }

    if (m_draw_neighbors)
    {
        drawNodes(p_neighbors);
    }

    if (m_draw_internal_nodes)
    {
        this->drawInternalNodes();
    }

    if (m_draw_leaves)
    {
        this->drawLeaves();
    }

    if (m_draw_debug_boxes)
    {
        drawDebugBoxes(m_tree->getAllNodes());
    }
}

void UMapController::setupTree(const TArray<Voxel>& p_data, Voxel p_dimensions, int p_npc_width)
{
    // clear and scale tree dimensions
    m_tree->clearTree();
    m_tree->setNPCWidth(p_npc_width);
    if (p_dimensions != Voxel::ZeroValue)
    {
        m_tree->setDimensions(p_dimensions);

        for (const Voxel& v : p_data)
        {
            // multiply data by scalar
            m_tree->insert(v);
        }

        assert(m_tree->isValid());
    }

}

void UMapController::incrementAStar()
{
    m_oct_solver->incrementAlgorithmLoop();
    if (m_oct_solver->isDone())
    {
        auto path = m_oct_solver->getPath();
        draw({}, UHelperFunctions::toTArray(path));
    }
    else
    {
        auto all_nodes = m_oct_solver->getNodeList();
        auto frontier = m_oct_solver->getFrontier()->getQueue();
        for (const auto& element : frontier)
        {
            if (all_nodes.find(element.m_id) != all_nodes.end())
            {
                all_nodes.erase(element.m_id);
            }
        }

        std::vector<EO_Node*> explored_nodes;
        for (auto element : all_nodes)
        {
            explored_nodes.push_back(element.first);
        }
        drawNodes(UHelperFunctions::toTArray(explored_nodes));


        std::vector<EO_Node*> frontier_nodes;

        std::transform(frontier.begin(), frontier.end(),
            std::back_inserter(frontier_nodes),
            [](const UOctree_AStar::Node &p) {
            return p.m_id;
        });

        drawDebugBoxes(UHelperFunctions::toTArray(frontier_nodes));
    }


}