// charles boudousquie 
#include "DmapFactoryDragDrop.h"

 UObject* UDmapFactoryDragDrop::FactoryCreateBinary(UClass* Class, UObject* InParent, 
	FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, 
	const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn)
	{
		
		Formats.Add(FString(TEXT("3dmap;")) + 
		NSLOCTEXT("UDmapFactoryDragDrop", "Format3dmap", "3dmap file").ToString());
		
		SupportedClass = UDMAP_Asset::StaticClass();
		bCreateNew = false;
		bEditorImport = true;
		
		FEditorDelegates::OnAssetPreImport.Broadcast(this, Class, InParent, Name, Type);
		
		
		// load asset
		if (FFileHelper::LoadFileToString(TextString, *CurrentFilename))
		{
			TextAsset = NewObject<UTextAsset>(InParent, Class, Name, Flags);
			TextAsset->Text = FText::FromString(TextString);
		}

		return TextAsset;
		
	}
	