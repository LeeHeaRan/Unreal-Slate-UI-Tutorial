// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"
/**
 *SCompoundWidget slate와 관련된 구성요소 상속
 *Slate UI 구현
 */
class SMainMenuWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMainMenuWidget){}
	SLATE_ARGUMENT(TWeakObjectPtr<class AMenuHUD>, OwningHUD)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs); 
	TWeakObjectPtr<class AMeunHUD> OwningHUD; //UI(HUD)인자 전달. 출력 *TweakObjectPtr 메모리의 공유, 메모리 해제의 자동화
	
	//virtual bool SupportsKeyboardFocus() const override { return true; }
};
