// Fill out your copyright notice in the Description page of Project Settings.

#include "JPS_GridDrawer.h"
#include "JPS_Solver.h"

#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Components/ActorComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values for this component's properties
UJPS_GridDrawer::UJPS_GridDrawer()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;

    auto instance = ConstructorHelpers::FObjectFinder<UMaterialInterface>(TEXT("Material'/DmapModule/materials/M_wireframe.M_wireframe'"));
    if (instance.Object)
    {
        m_wireframe_material = instance.Object;
    }

    // ...
}


// Called when the game starts
void UJPS_GridDrawer::BeginPlay()
{
    Super::BeginPlay();
    

    createMeshes();
    setMaterials();

}


// Called every frame
void UJPS_GridDrawer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // ...
}



const std::map<UJPS_GridDrawer::JPS_TYPE, FColor> UJPS_GridDrawer::g_colors
{
    // cells
    {JPS_TYPE::EMPTY_CELL,FColor::White},
    {JPS_TYPE::WALL, FColor::Black},
        {JPS_TYPE::START,FColor::Green},
        {JPS_TYPE::GOAL,FColor::Red},
        {JPS_TYPE::JUMP_POINT_CLOSED,FColor::Silver},
        {JPS_TYPE::JUMP_POINT_OPEN,FColor::Blue},
        // lines
        {JPS_TYPE::PATH,FColor::Blue},
};

void UJPS_GridDrawer::drawPath(UJPS_Solver* p_solver)
{
    // get me path
    auto l_path = p_solver->getPath();
    auto world = GetWorld();
    auto color = chooseColor(JPS_TYPE::PATH);

    // draw line between every 2 points
    for (auto it = l_path.begin(); std::next(it) != l_path.end(); it++)
    {
        // convert position relative to us
        auto begin = transformCell(*it);

        auto end = transformCell(*std::next(it));

        // draw
        DrawDebugLine(world, begin, end, color, true,-1,0,10.0f);
    }
    
}

UHierarchicalInstancedStaticMeshComponent * UJPS_GridDrawer::getMeshByType(JPS_TYPE p_type)
{
    return m_meshes[(int)p_type];
}

// get type of cell based on priority
UJPS_GridDrawer::JPS_TYPE UJPS_GridDrawer::getType(
    const GridNode& p_node,
    const FIntPoint& p_start, const FIntPoint& p_goal)
{
    if (p_node.m_pos == p_start)
    {
        return JPS_TYPE::START;
    }
    if (p_node.m_pos == p_goal)
    {
        return JPS_TYPE::GOAL;
    }

    if (p_node.m_isWall)
    {
        return JPS_TYPE::WALL;
    }

    if (p_node.isJumpPoint())
    {
        if (p_node.m_closed)
        {
            return JPS_TYPE::JUMP_POINT_CLOSED;
        }
        else
        {
            return JPS_TYPE::JUMP_POINT_OPEN;
        }
    }
    else
    {
        // it has to be an empty cell at this point
        return JPS_TYPE::EMPTY_CELL;
    }
}

void UJPS_GridDrawer::drawCells(UJPS_Solver* p_solver)
{
    // get me grid
    const auto& l_grid = p_solver->getGrid();

    // store cells in appropriate groups
    std::map<JPS_TYPE, std::vector<FIntPoint>> l_cells;

    auto start = *p_solver->getPath().begin();
    auto goal = *std::prev(p_solver->getPath().end());

    for (auto& row : l_grid)
    {
        for (auto& col : row)
        {
            auto type = getType(col, start, goal);
            l_cells[type].push_back(col.m_pos);
        }
    }

    // for each group
    for (const auto& group : l_cells)
    {
        auto type = group.first;
        auto mesh = getMeshByType(type);
        // for each cell
        for (const auto& cell : group.second)
        {
            // transform cell's position
            auto new_pos = transformCell(cell);
            drawCell(new_pos, mesh);
        }
    }





}

void UJPS_GridDrawer::drawCell(FVector p_pos, UHierarchicalInstancedStaticMeshComponent * p_mesh)
{
    auto stat_mesh = p_mesh->GetStaticMesh();

    // what is the scale of the mesh p_mesh is using????
    auto bounds = stat_mesh->GetBounds().BoxExtent;

    auto rotator = FRotator::ZeroRotator;
    auto center = p_pos;// p_box.GetCenter();
    //auto extents = p_box.GetExtent();
    FTransform l_transform(rotator, center, FVector{ m_grid_scalar / bounds.X });
    auto instance_id = p_mesh->AddInstanceWorldSpace(l_transform);
}

FVector UJPS_GridDrawer::transformCell(const FIntPoint & p_grid_pos)
{
    auto our_pos = GetOwner()->GetActorLocation();
    auto result = FVector(p_grid_pos);
    result += our_pos;
    // separate based on position in grid {row,col} --> {X,Y}
    result += FVector(p_grid_pos * m_grid_scalar);
    return result;
}

void UJPS_GridDrawer::createMeshes()
{
    FName l_tag("jps_archetype");

    TArray<AActor*> OutActors;
    UGameplayStatics::GetAllActorsWithTag(this, l_tag, OutActors);

    // there should be only one
    if (OutActors.Num() != 1) { return; }

    auto l_jps_archetype = OutActors[0];

    auto parent_mesh = l_jps_archetype->FindComponentByClass<UHierarchicalInstancedStaticMeshComponent>();

    // create meshes for the different levels
    for (const auto& color : g_colors)
    {
        // slightly dangerous
        FName name = *("Mesh_" + color.second.ToString());

        // create hierarchical mesh
        auto new_mesh = NewObject<UHierarchicalInstancedStaticMeshComponent>(this); // outer == owner i think
        // copy over values
        new_mesh = DuplicateObject(parent_mesh, new_mesh, name);
        // finally add it to list
        m_meshes.Add(new_mesh);

        // Attach to actor
        new_mesh->SetupAttachment(l_jps_archetype->GetRootComponent());
        // Set Static Mesh
        new_mesh->SetStaticMesh(parent_mesh->GetStaticMesh());
        // Register
        new_mesh->RegisterComponentWithWorld(GetWorld());


    }
}

void UJPS_GridDrawer::setMaterials()
{
    UMaterialInterface* ParentMaterial = m_wireframe_material;
    int color_index = 0;
    for (auto l_mesh : m_meshes)
    {
        auto l_dynamic_material = UMaterialInstanceDynamic::Create(ParentMaterial, this);
        m_materials.Add(l_dynamic_material);
        l_mesh->SetMaterial(0, l_dynamic_material);

        const auto& color_chosen = g_colors.at(JPS_TYPE(color_index));

        // set the color that contributes to the base color
        l_dynamic_material->SetVectorParameterValue(TEXT("Color"), color_chosen);

        color_index++;
    }
}

void UJPS_GridDrawer::draw(UJPS_Solver* p_solver)
{
    drawCells(p_solver);
    drawPath(p_solver);
}





