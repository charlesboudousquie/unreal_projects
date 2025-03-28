// Fill out your copyright notice in the Description page of Project Settings.


#include "Get3dMapList.h"
#include "Modules/ModuleManager.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "DmapAsset.h"
#include "AssetRegistry/AssetData.h"

TArray<FString> UGet3dMapList::getList()
{
	FAssetRegistryModule& m_module = 
		FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	TArray<FAssetData> assetData;

	const UClass* Class = UDmapAsset::StaticClass();
	
	//FName name = *(Class->GetName());
    FTopLevelAssetPath classPath = Class->GetClassPathName();

	TArray<FString> assetNames;

	if (m_module.Get().GetAssetsByClass(classPath, assetData))
	{

		for (const auto& asset : assetData)
		{

			assetNames.Push(asset.AssetName.ToString());
		}
	}

	return assetNames;

}
