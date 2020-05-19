// Fill out your copyright notice in the Description page of Project Settings.


#include "DmapFactory.h"
#include "DmapAsset.h"

UObject* UDmapFactory::FactoryCreateNew(UClass* InClass, UObject* InParent,
	FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return nullptr;
}

bool UDmapFactory::ShouldShowInNewMenu() const
{
	return false;
}

UDmapFactory::UDmapFactory(class FObjectInitializer const &)
{
	SupportedClass = UDmapAsset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;

}


