// Copyright Epic Games, Inc. All Rights Reserved.

#include "UI_ProjectGameMode.h"
#include "UI_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "MenuHUD.h"
#include "MenuPlayerController.h"

AUI_ProjectGameMode::AUI_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	//PlayerControllerClass = AMenuPlayerController::StaticClass();

	HUDClass = AMenuHUD::StaticClass(); // 컴파일 타임에서 UClass Type Info Get
}
