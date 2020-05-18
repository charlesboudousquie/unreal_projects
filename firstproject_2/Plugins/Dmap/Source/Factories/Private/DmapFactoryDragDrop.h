 // charles boudousquie
#pragma once

#include "Factories/Factory.h"
#include "UObject/ObjectMacros.h"

#include "DmapFactoryDragDrop.generated.h"

UClass(hidecategories=Object)
class UDmapFactoryDragDrop : public UFactory
{
	
	GENERATED_UCLASS_BODY()
	
	virtual UObject* FactoryCreateBinary(UClass* Class, UObject* InParent, 
	FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, 
	const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn) override;
	
	
};

