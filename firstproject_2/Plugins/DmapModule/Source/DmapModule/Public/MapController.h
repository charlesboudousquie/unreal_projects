// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Asteroid.h"
#include "Containers/UnrealString.h"
#include "MapController.generated.h"


// Description: This class can load in maps. 

UCLASS( ClassGroup=(Custom), BlueprintType, meta=(BlueprintSpawnableComponent) )
class DMAPMODULE_API UMapController : public UActorComponent
{
	GENERATED_BODY()

	TArray<AAsteroid> m_asteroids;

public:	
	// Sets default values for this component's properties
	UMapController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
	UFUNCTION(BlueprintCallable, Category = "3d maps")
	void LoadMap(FString p_map_name);

};
