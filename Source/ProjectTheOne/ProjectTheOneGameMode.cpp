// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectTheOneGameMode.h"
#include "ProjectTheOnePlayerController.h"
#include "ProjectTheOneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectTheOneGameMode::AProjectTheOneGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectTheOnePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}