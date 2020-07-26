// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <map>
#include <vector>
#include "Math/Vector.h"

#include "JPS_GridDrawer.generated.h"

class UJPS_Solver;
struct GridNode;
class UHierarchicalInstancedStaticMeshComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DMAPMODULE_API UJPS_GridDrawer : public UActorComponent
{
	GENERATED_BODY()

    enum class JPS_TYPE
    {
        START,
        GOAL,
        JUMP_POINT_CLOSED,
        JUMP_POINT_OPEN,
        WALL,
        PATH,
        EMPTY_CELL,
    };

    TArray<UHierarchicalInstancedStaticMeshComponent*> m_meshes;
    TArray<class UMaterialInstanceDynamic*> m_materials;
    class UMaterialInterface* m_wireframe_material;

    static const std::map<JPS_TYPE, FColor> g_colors;

    const FColor& chooseColor(JPS_TYPE p_type) { return g_colors.at(p_type); }
    
    UHierarchicalInstancedStaticMeshComponent* getMeshByType(JPS_TYPE);
    JPS_TYPE getType(const GridNode& p_node,
        const FIntPoint& p_start, const FIntPoint& p_goal);

    void drawPath(UJPS_Solver* p_solver);
    void drawCells(UJPS_Solver* p_solver);
    void drawCell(FVector p_pos, UHierarchicalInstancedStaticMeshComponent* p_mesh);

    // scale, translate, and separate cell
    FVector transformCell(const FIntPoint& p_pos);

    void createMeshes();
    void setMaterials();

public:	
	// Sets default values for this component's properties
	UJPS_GridDrawer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

    UPROPERTY(EditAnywhere)
    float m_grid_scalar = 1.0f;

    UPROPERTY(EditAnywhere)
    FVector m_offset;

    void draw(UJPS_Solver* p_solver);

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
