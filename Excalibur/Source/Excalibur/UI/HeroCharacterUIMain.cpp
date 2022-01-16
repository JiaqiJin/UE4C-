// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacterUIMain.h"
#include "Component/CharacterHealthWidget.h"

bool UHeroCharacterUIMain::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

void UHeroCharacterUIMain::SetHealthBarPercentage(float value)
{
	HeroHealth->SetHealthBarPercentage(FMath::Clamp<float>(value, 0.0f, 1.0f));
}

void UHeroCharacterUIMain::SetHealthTextBlock(float health, float MaxHealth)
{
	uint32 HealthInterger = FMath::RoundHalfFromZero(health);
	uint32 MaxHealthInterger = FMath::RoundHalfFromZero(MaxHealth);
	HeroHealth->SetHealthTextBlock(FText::FromString(FString::Printf(TEXT("%i / %i"), HealthInterger, MaxHealthInterger)));
}

void UHeroCharacterUIMain::SetHealthRegenerationValue(float HealthRegeneration)
{
	FString HealthRegString = "+";
	HealthRegString += FString::SanitizeFloat(HealthRegeneration);
	//float HealthRegInterger = FMath::RoundHalfFromZero(HealthRegeneration);
	HeroHealth->SetHealthRegenerationValue(FText::FromString(HealthRegString));
}

void UHeroCharacterUIMain::SetHealthRegenerationVisibility(bool Visible)
{
	HeroHealth->SetHealthRegenerationVisibility(Visible);
}
