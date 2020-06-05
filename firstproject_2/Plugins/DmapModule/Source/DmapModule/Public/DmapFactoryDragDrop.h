// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "Factories/Factory.h"
#include "DmapFactoryDragDrop.generated.h"

/**
 * 
 */
UCLASS(hidecategories = (Object))
class DMAPMODULE_API UDmapFactoryDragDrop : public UFactory
{
public:

	GENERATED_BODY()

public:

    virtual UObject* FactoryCreateBinary(UClass* Class, UObject* InParent,
			FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type,
			const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn) override;

	UDmapFactoryDragDrop(class FObjectInitializer const &);


	bool FactoryCanImport(const FString& Filename) override;

};
