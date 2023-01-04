// Copyright Epic Games, Inc. All Rights Reserved.

#include "PalgressGameMode.h"
#include "PalgressCharacter.h"
#include "UObject/ConstructorHelpers.h"

APalgressGameMode::APalgressGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
