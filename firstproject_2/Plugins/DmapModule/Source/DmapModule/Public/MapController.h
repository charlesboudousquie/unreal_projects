// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Asteroid.h"
#include "Containers/UnrealString.h"

#include <memory>

#include "MapController.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class AActor;
//class Octree;
class Efficient_Octree;
//struct OctreeNode;
struct EO_Node;

// Description: This class can load in maps. 

UCLASS( ClassGroup=(Custom), BlueprintType, meta=(BlueprintSpawnableComponent) )
class DMAPMODULE_API UMapController : public UActorComponent
{
    GENERATED_BODY()

    Efficient_Octree* m_tree;
    
    // meshes for the nodes in each level of the tree
    TArray<UHierarchicalInstancedStaticMeshComponent*> m_meshes;
    TArray< UMaterialInstanceDynamic*> m_materials;

    AActor* m_octree_archetype;

    float m_mesh_scalar = 1.0f;

    UPROPERTY()
    UMaterialInterface* m_wireframe_material;

public:	
	// Sets default values for this component's properties
	UMapController();
	~UMapController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


    // draws all internal nodes of octree
    void drawInternalNodes(/*TArray<AActor*> p_octree_node_archetypes*/);

    // draws all leaf nodes of octree
    void drawLeaves(AActor* p_asteroid_archetype);

    // for each level, create a dynamic material
    void setMaterials(/*TArray<AActor*> p_octree_node_archetypes*/);
    
    // for testing
    void unit_Test(AActor* p_asteroid_archetype);

public:	

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
    // load in user requested map
	UFUNCTION(BlueprintCallable, Category = "3d maps")
	void LoadMap(FString p_map_name, AActor* p_asteroid_archetype);

    // print out octree
    UFUNCTION(BlueprintCallable, Category = "3d maps")
        void printTree() {}

    UPROPERTY(EditAnywhere)
    float debug_line_width;

    UFUNCTION(BlueprintCallable, Category = "3d maps")
    bool octreeExists();

    UFUNCTION(BlueprintCallable, Category = "3d maps")
    FVector getOctreePos();

    UFUNCTION(BlueprintCallable, Category = "3d maps")
    float getMeshScalar() { return m_mesh_scalar; }

    // print high level info about octree, mainly dimensions
    // and center
    UFUNCTION(BlueprintCallable, Category = "3d maps")
    float printOctreeInfo() { return m_mesh_scalar; }

};
