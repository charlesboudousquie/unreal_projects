// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HelperFunctions.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

// class is meant to act as a namespace, because UHT cannot add namespaces.
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DMAPMODULE_API UHelperFunctions : public UActorComponent
{
	GENERATED_BODY()

    static TArray<FColor> g_colors;

public:

    static TArray<FColor>& getColors() { return g_colors; }

    static AActor * getActorWithTag(FName& p_tag, const UObject* p_world_obj);

    static FColor chooseColor(int p_level);

    static void drawNode(FBox& p_box, UHierarchicalInstancedStaticMeshComponent* p_mesh);

    // draw hierarchical instances of the archetype/object specified
    static void drawInstances(AActor * p_asteroid_archetype, const TArray<FVector>& p_positions,
        bool clearInstances = true);


















public:	
	// Sets default values for this component's properties
	UHelperFunctions();

    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	

		
};
