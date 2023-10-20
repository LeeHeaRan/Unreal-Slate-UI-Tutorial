// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuHUD.h"
#include "SMainMenuWidget.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"

/// <summary>
///  ViewPort ����� ���� HUD class ���� �� ����. UHD Class ���. BeginPlay Override.
/// </summary>

void AMenuHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine && GEngine->GameViewport) {
		MenuWidget = SNew(SMainMenuWidget).OwningHUD(this); //���� �� �Ҵ�
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef())); //ViewPort ���.
	}
}
