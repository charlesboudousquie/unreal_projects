// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "firstproject_2GameMode.h"
#include "firstproject_2HUD.h"
#include "firstproject_2Character.h"
#include "UObject/ConstructorHelpers.h"

Afirstproject_2GameMode::Afirstproject_2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Afirstproject_2HUD::StaticClass();
}
