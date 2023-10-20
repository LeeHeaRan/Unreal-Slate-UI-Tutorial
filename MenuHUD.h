// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"

/// <summary>
/// ViewPort ����� ���� HUD class ���� �� ����. UHD Class ���. BeginPlay Override.
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