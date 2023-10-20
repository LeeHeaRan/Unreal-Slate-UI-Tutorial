// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"
/**
 *SCompoundWidget slate�� ���õ� ������� ���
 *Slate UI ����
 */
class SMainMenuWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMainMenuWidget){}
	SLATE_ARGUMENT(TWeakObjectPtr<class AMenuHUD>, OwningHUD)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs); 
	TWeakObjectPtr<class AMeunHUD> OwningHUD; //UI(HUD)���� ����. ��� *TweakObjectPtr �޸��� ����, �޸� ������ �ڵ�ȭ
	
	//virtual bool SupportsKeyboardFocus() const override { return true; }
};
