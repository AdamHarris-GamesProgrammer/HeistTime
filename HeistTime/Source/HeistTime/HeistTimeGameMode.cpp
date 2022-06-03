// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeistTimeGameMode.h"
#include "HeistTimeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHeistTimeGameMode::AHeistTimeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
