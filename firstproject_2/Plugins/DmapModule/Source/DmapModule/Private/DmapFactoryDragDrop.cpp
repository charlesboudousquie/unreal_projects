// Fill out your copyright notice in the Description page of Project Settings.

#include "DmapFactoryDragDrop.h"
#include "DmapAsset.h"
#include "Editor.h"
#include "Misc/FileHelper.h"
#include "Asteroid.h"

UObject * UDmapFactoryDragDrop::FactoryCreateBinary(
	UClass * Class, UObject * InParent, FName Name, 
	EObjectFlags Flags, UObject * Context, const TCHAR * Type, 
	const uint8 *& Buffer, const uint8 * BufferEnd, 
	FFeedbackContext * Warn)
{
	FEditorDelegates::OnAssetPreImport.Broadcast(this, Class, InParent, Name, Type);
	
	FString file_text;

	if (FFileHelper::LoadFileToString(file_text, *CurrentFilename))
	{
		UDmapAsset* newAsset = NewObject<UDmapAsset>(InParent, Class, Name, Flags);
		newAsset->ParseData(file_text);
	
		const auto& data = newAsset->getFileData();

		// spawn 1 asteroid for now
		auto pos = data[0];

		auto newAsteroid = GetWorld()->SpawnActor<AAsteroid>();
		newAsteroid->setPosition(pos);

		return newAsset;
	}

	return nullptr;
}

UDmapFactoryDragDrop::UDmapFactoryDragDrop(class FObjectInitializer const &)
{

	Formats.Add(TEXT("3dmap; 3d Maps"));

	SupportedClass = UDmapAsset::StaticClass();
	//bCreateNew = true; // use create binary instead
	bEditorImport = true;

}

bool UDmapFactoryDragDrop::FactoryCanImport(const FString & Filename)
{
	const FString Extension = FPaths::GetExtension(Filename);
	return FPaths::GetExtension(Filename) == TEXT("3dmap");
}

