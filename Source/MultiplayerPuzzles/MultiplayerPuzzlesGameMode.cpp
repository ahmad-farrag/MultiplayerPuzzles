// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerPuzzlesGameMode.h"
#include "MultiplayerPuzzlesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerPuzzlesGameMode::AMultiplayerPuzzlesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
