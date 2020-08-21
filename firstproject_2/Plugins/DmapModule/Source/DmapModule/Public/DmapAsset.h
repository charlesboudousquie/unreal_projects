// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "Containers/Array.h"
#include <string>

#include "Math/IntVector.h"

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

	const TArray<FIntVector>& getFileData() { return m_data; }
	const FIntVector& getDimensions() { return m_dimensions; }

protected:

    FIntVector readLine(std::string p_input);

	UPROPERTY(BlueprintReadOnly)
    FIntVector m_dimensions;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="DmapAsset")
	TArray<FIntVector> m_data;

};
