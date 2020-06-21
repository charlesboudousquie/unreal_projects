// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Asteroid.h"
#include "Containers/UnrealString.h"

#include <memory>
//class /*DMAPMODULE_API*/ Octree; 

#include "MapController.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class AActor;
class Octree;

// Description: This class can load in maps. 

UCLASS( ClassGroup=(Custom), BlueprintType, meta=(BlueprintSpawnableComponent) )
class DMAPMODULE_API UMapController : public UActorComponent
{
	GENERATED_BODY()

    //std::unique_ptr<Octree> m_tree;
	Octree* m_tree;
    

public:	
	// Sets default values for this component's properties
	UMapController();
	~UMapController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
	UFUNCTION(BlueprintCallable, Category = "3d maps")
	void LoadMap(FString p_map_name, AActor* p_asteroid_archetype);

    UPROPERTY(EditAnywhere)
    float voxel_scalar;

    UPROPERTY(EditAnywhere)
    float debug_line_width;

	// given an array of points, draw a box from said 8 points
	void drawBox(const TArray<FVector>& p_points);

    // draw an instance of an asteroid
    void drawAsteroid(const FVector& p_pos, UHierarchicalInstancedStaticMeshComponent* p_mesh);

};
