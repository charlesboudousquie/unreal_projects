// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "firstproject_2HUD.generated.h"

class UTexture2D;

UCLASS()
class Afirstproject_2HUD : public AHUD
{
	GENERATED_BODY()

public:
	Afirstproject_2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

