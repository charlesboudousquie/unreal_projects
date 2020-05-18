
// BlueprintType exposes class to blueprints
// BlueprintReadOnly says it can read from the data but cannot write to it

// EditAnywhere says the property below is editable in inspector

// TEXTASSET_API means this class is visible to other modules

// hidecategories means that any aspect of UObject is not exposed
// in the inspector since it would clutter the screen.
// Thus only the data/methods in this class will be visible.

#pragma once
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"

#include "DMAPAsset.generated.h"


UCLASS(BlueprintType, hidecategories=(Object))
class DMAPASSET_API UDmapAsset : public UObject
{
	
	GENERATED_BODY()
	
public:

	UProperty(BlueprintReadOnly, EditAnywhere, Category="DmapAsset") 
	FMap m_dmap;
	
};

