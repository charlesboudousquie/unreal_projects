// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "Containers/Array.h"
#include <string>

#include "Math/Vector.h"

#include "DmapAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, hidecategories = (Object))
class DMAPMODULE_API UDmapAsset : public UObject
{

	GENERATED_BODY()

public:

	void ParseData(FString p_file_data);

	

	UDmapAsset();
	~UDmapAsset();

protected:

	FVector readLine(std::string p_input);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="DmapAsset")
	TArray<FVector> m_data;

};
