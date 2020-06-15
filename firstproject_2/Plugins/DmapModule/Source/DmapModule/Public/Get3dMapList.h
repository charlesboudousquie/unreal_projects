// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Containers/Array.h"
#include "Get3dMapList.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DMAPMODULE_API UGet3dMapList : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "3d maps")
	static TArray<FString> getList();
	
};
