// Fill out your copyright notice in the Description page of Project Settings.

#include "DmapFactoryDragDrop.h"
#include "DmapAsset.h"
#include "Editor.h"
#include "Misc/FileHelper.h"

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
	
		return newAsset;
	}

	return nullptr;
}

UDmapFactoryDragDrop::UDmapFactoryDragDrop(class FObjectInitializer const &)
{

	Formats.Add(FString(TEXT("3dmap")) + 
		NSLOCTEXT("UDmapFactoryDragDrop", "Format3dmap", "3D map").ToString());

	SupportedClass = UDmapAsset::StaticClass();
	bCreateNew = true;
	bEditorImport = true;
}
