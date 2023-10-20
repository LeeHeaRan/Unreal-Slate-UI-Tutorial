// Fill out your copyright notice in the Description page of Project Settings.


#include "SMainMenuWidget.h"

#define LOCTEXT_NAMESPACE "MainMenu"

/// <summary>
/// SCompoundWidget slate客 包访等 备己夸家 惑加
/// Slate UI 备泅
/// </summary>
/// <param name="InArgs"></param>
void SMainMenuWidget::Construct(const FArguments& InArgs) {
	
	const FMargin ContentPadding = FMargin(500.f, 300.f); //Padding
	const FText TitleText = LOCTEXT("GameTitle", "MY Slave UI Create!!!! - Simnet"); //Text
	
	FSlateFontInfo TitleTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText"); //TextStyle
	TitleTextStyle.Size = 40.f; 

	ChildSlot
		[
			SNew(SOverlay)
				+ SOverlay::Slot() //Background Layer
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				[
					SNew(SImage)
						.ColorAndOpacity(FColor::Black)
				]
				+ SOverlay::Slot() //Other Layer
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(ContentPadding)
				[
					SNew(SVerticalBox)
						+SVerticalBox::Slot()
						[
							SNew(STextBlock)
								.Font(TitleTextStyle)
								.Text(TitleText)
								.Justification(ETextJustify::Center)
								
						]
				]
		];
}

#undef LOCTEXT_NAMESPACE
