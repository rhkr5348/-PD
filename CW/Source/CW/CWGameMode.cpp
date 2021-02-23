// Copyright Epic Games, Inc. All Rights Reserved.

#include "CWGameMode.h"
#include "CWPlayerController.h"
#include "CWCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACWGameMode::ACWGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACWPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}