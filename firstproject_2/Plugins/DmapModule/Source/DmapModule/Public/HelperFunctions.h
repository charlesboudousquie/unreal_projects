// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HelperFunctions.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
struct EO_Node;

// class is meant to act as a namespace, because UHT cannot add namespaces.
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DMAPMODULE_API UHelperFunctions : public UActorComponent
{
	GENERATED_BODY()

    static TArray<FColor> g_colors;

    static void drawNode(const FBox& p_box, UHierarchicalInstancedStaticMeshComponent* p_mesh);

public:

    static TArray<FColor>& getColors() { return g_colors; }

    static AActor * getActorWithTag(FName& p_tag, const UObject* p_world_obj);

    static FColor chooseColor(int p_level);


    // draw hierarchical instances of the archetype/object specified
    static void drawInstances(AActor * p_asteroid_archetype, const TArray<EO_Node*>& p_instances,
        bool clearInstances = true);

    static void drawInstance(UHierarchicalInstancedStaticMeshComponent * p_hierarchical_mesh,
        const EO_Node* p_instance, bool clearInstances);
















public:	
	// Sets default values for this component's properties
	UHelperFunctions();

    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	

		
};
