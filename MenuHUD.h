// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"

/// <summary>
/// ViewPort 출력을 위한 HUD class 생성 및 전달. UHD Class 상속. BeginPlay Override.
/// </summary>
UCLASS()
class UI_PROJECT_API AMenuHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	TSharedPtr<class SMainMenuWidget> MenuWidget; 
	TSharedPtr<class SWidget> MenuWidgetContainer;

	virtual void BeginPlay() override; 
}; 