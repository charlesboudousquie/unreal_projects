// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Asteroid.generated.h"

UCLASS()
class DMAPMODULE_API AAsteroid : public AActor
{
	GENERATED_BODY()
	
public:	

	AAsteroid(class FObjectInitializer const &);

	void setPosition(FVector position);

	// Sets default values for this actor's properties
	//AAsteroid();

	UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* m_mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
