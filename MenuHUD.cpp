// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuHUD.h"
#include "SMainMenuWidget.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"

/// <summary>
///  ViewPort 출력을 위한 HUD class 생성 및 전달. UHD Class 상속. BeginPlay Override.
/// </summary>

void AMenuHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine && GEngine->GameViewport) {
		MenuWidget = SNew(SMainMenuWidget).OwningHUD(this); //생성 및 할당
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef())); //ViewPort 출력.
	}
}
