// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TELEROSGameMode.h"
#include "TELEROSHUD.h"
#include "TELEROSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATELEROSGameMode::ATELEROSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATELEROSHUD::StaticClass();
}
