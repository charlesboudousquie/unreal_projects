// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Asteroid.h"
#include "Containers/UnrealString.h"
#include "Math/IntVector.h"

#include <memory>

#include "MapController.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class AActor;
//class Octree;
class Efficient_Octree;
class UOctree_AStar;
//struct OctreeNode;
struct EO_Node;

// Description: This class can load in maps. 

UCLASS(ClassGroup = (Custom), BlueprintType, meta = (BlueprintSpawnableComponent))
class DMAPMODULE_API UMapController : public UActorComponent
{
    GENERATED_BODY()

    typedef FIntVector Voxel;

    FColor m_start_color = FColor::Red;
    FColor m_path_color = FColor::Blue;
    FColor m_end_color = FColor::Green;
    typedef FIntVector Voxel;

    Efficient_Octree* m_tree;

    // meshes for the nodes in each level of the tree
    TArray<UHierarchicalInstancedStaticMeshComponent*> m_meshes;
    TArray< UMaterialInstanceDynamic*> m_materials;

    AActor* m_octree_archetype;
    AActor* m_asteroid_archetype;
    AActor* m_path_archetype;

    UPROPERTY(EditAnywhere)
        FIntVector m_start;

    UPROPERTY(EditAnywhere)
        FIntVector m_end;

    UPROPERTY(EditAnywhere)
        float m_mesh_scalar = 1.0f;

    UPROPERTY(EditAnywhere)
        float m_debug_line_width = 5.0f;

    UPROPERTY(EditAnywhere)
        int m_npc_width = 1;

    UPROPERTY(EditAnywhere)
        bool m_use_unit_test = false;

    UPROPERTY(EditAnywhere)
        bool m_draw_leaves = true;

    UPROPERTY(EditAnywhere)
        bool m_draw_internal_nodes = true;

    UPROPERTY(EditAnywhere)
        bool m_draw_debug_boxes = false;

    UPROPERTY(EditAnywhere)
        bool m_draw_neighbors = false;

    UPROPERTY(EditAnywhere)
        bool m_draw_path_lines = true;
    
    UPROPERTY(EditAnywhere)
        bool m_draw_path_nodes = true;

    /*UPROPERTY(EditAnywhere)
        bool m_debugging_astar_loop = false;*/

    UPROPERTY()
        UMaterialInterface* m_wireframe_material;

    UOctree_AStar* m_oct_solver;

public:
    // Sets default values for this component's properties
    UMapController();
    ~UMapController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    // find mesh based on node's level
    UHierarchicalInstancedStaticMeshComponent* find_corresponding_mesh(int p_level);

    // draw random set of nodes
    void drawNodes(const TArray<EO_Node*>& p_nodes);

    // draws all internal nodes of octree
    void drawInternalNodes();

    // draws all leaf nodes of octree
    void drawLeaves();

    // for each level, create a dynamic material
    void setMaterials();

    // for testing
    void unit_Test();

    void drawPath(const TArray<EO_Node*>& p_nodes);
    void drawOctDebugBox(EO_Node* p_node, FColor p_color);
    void drawDebugBoxes(const TArray<EO_Node*>& p_nodes, FColor p_color);

    // function to handle all other drawing functions in map controller.
    void draw(const TArray<EO_Node*>& p_neighbors, const TArray<EO_Node*>& p_path);

    void setupTree(const TArray<Voxel>& p_data, Voxel p_dimensions, int p_npc_width);

public:

    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // load in user requested map
    UFUNCTION(BlueprintCallable, Category = "3d maps")
        void LoadMap(FString p_map_name);

    UFUNCTION(BlueprintCallable, Category = "3d maps")
        void incrementAStar();

    // print out octree
    UFUNCTION(BlueprintCallable, Category = "3d maps")
        void printTree() {}

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
