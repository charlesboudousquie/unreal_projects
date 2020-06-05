// Fill out your copyright notice in the Description page of Project Settings.


#include "Asteroid.h"

#include "DrawDebugHelpers.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/Transform.h"
#include "Math/Color.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AAsteroid::AAsteroid(class FObjectInitializer const &)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// create mesh
	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("asteroid_mesh"));

	// set mesh to cube
	m_mesh->SetupAttachment(RootComponent);

	// get cube asset and load it into mesh
	auto cubeAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(
		TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	if (cubeAsset.Object != nullptr)
	{
		m_mesh->SetStaticMesh(cubeAsset.Object);
	}

}

void AAsteroid::setPosition(FVector position)
{
	// set location
	this->SetActorLocation(position);
}

// Called when the game starts or when spawned
void AAsteroid::BeginPlay()
{
	Super::BeginPlay();
	auto extents = FVector(1, 1, 1);
	DrawDebugBox(GetWorld(),this->GetActorLocation(), extents, 
		FColor::Green, true, -1, 0, 10);
}

// Called every frame
void AAsteroid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

