// Fill out your copyright notice in the Description page of Project Settings.

#include "Modules/ModuleManager.h"
#include "AssetRegistryModule.h"
#include "DmapAsset.h"
#include "AssetData.h"
#include "UObject/ConstructorHelpers.h"
#include "MapController.h"

// Sets default values for this component's properties
UMapController::UMapController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMapController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMapController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMapController::LoadMap(FString p_map_name)
{

	FAssetRegistryModule& m_module =
		FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	IAssetRegistry& l_registry = m_module.Get(); 

	//C:/Users/boudo/Documents/Unreal Projects/firstproject_2/Plugins/DmapModule/Content/Assets/A1.uasset

	TArray<FAssetData> AssetData;
	const UClass* Class = UDmapAsset::StaticClass();
	auto l_class_name = Class->GetName();
	if (l_registry.GetAssetsByClass(*l_class_name, AssetData))
	{

		FName l_map_name(*p_map_name);

		for (auto& l_asset_name : AssetData)
		{
			// TODO: find faster way to search
			if (l_asset_name.AssetName.Compare(l_map_name) == 0)
			{
				// load map in
				printf("hi");
			}
		}
	}

}

