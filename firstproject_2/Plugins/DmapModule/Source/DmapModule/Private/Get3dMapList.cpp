// Fill out your copyright notice in the Description page of Project Settings.


#include "Get3dMapList.h"
#include "Modules/ModuleManager.h"
#include "AssetRegistryModule.h"
#include "DmapAsset.h"
#include "AssetData.h"

TArray<FString> UGet3dMapList::getList()
{
	FAssetRegistryModule& m_module = 
		FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	TArray<FAssetData> assetData;

	const UClass* Class = UDmapAsset::StaticClass();
	
	FName name = *(Class->GetName());

	TArray<FString> assetNames;

	if (m_module.Get().GetAssetsByClass(name, assetData))
	{

		for (const auto& asset : assetData)
		{

			assetNames.Push(asset.AssetName.ToString());
		}
	}

	return assetNames;

}
