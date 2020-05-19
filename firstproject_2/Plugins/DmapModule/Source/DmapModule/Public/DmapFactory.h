// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "Factories/Factory.h"
#include "DmapFactory.generated.h"

UCLASS(hidecategories = (Object))
class UDmapFactory : public UFactory
{

	GENERATED_BODY()

public:
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent,
			FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

	virtual bool ShouldShowInNewMenu() const override;

	UDmapFactory(class FObjectInitializer const &);

};
