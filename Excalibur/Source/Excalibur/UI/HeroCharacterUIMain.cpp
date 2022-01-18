// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacterUIMain.h"
#include "Component/CharacterHealthWidget.h"
#include "Component/CharacterManaWidget.h"
#include "Component/CharacterStaminaWidget.h"

bool UHeroCharacterUIMain::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

// Health
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

// Mana
void UHeroCharacterUIMain::SetManaBarPercentage(float value)
{
	HeroMana->SetManaBarPercentage(FMath::Clamp<float>(value, 0.0f, 1.0f));
}

void UHeroCharacterUIMain::SetManaTextBlock(float health, float MaxHealth)
{
	uint32 ManaInterger = FMath::RoundHalfFromZero(health);
	uint32 MaxManaInterger = FMath::RoundHalfFromZero(MaxHealth);
	HeroMana->SetManaTextBlock(FText::FromString(FString::Printf(TEXT("%i / %i"), ManaInterger, MaxManaInterger)));
}

void UHeroCharacterUIMain::SetManaRegenerationValue(float HealthRegeneration)
{
	FString ManaRegString = "+";
	ManaRegString += FString::SanitizeFloat(HealthRegeneration);
	//float HealthRegInterger = FMath::RoundHalfFromZero(HealthRegeneration);
	HeroMana->SetManaRegenerationValue(FText::FromString(ManaRegString));
}

void UHeroCharacterUIMain::SetManaRegenerationVisibility(bool Visible)
{
	HeroMana->SetManaRegenerationVisibility(Visible);
}

// Stamina
void UHeroCharacterUIMain::SetStaminaBarPercentage(float value)
{
	HeroHealth->SetHealthBarPercentage(FMath::Clamp<float>(value, 0.0f, 1.0f));
}

void UHeroCharacterUIMain::SetStaminaTextBlock(float health, float MaxHealth)
{
	uint32 StaminaInterger = FMath::RoundHalfFromZero(health);
	uint32 MaxStaminaInterger = FMath::RoundHalfFromZero(MaxHealth);
	HeroStamina->SetStaminaTextBlock(FText::FromString(FString::Printf(TEXT("%i / %i"), StaminaInterger, MaxStaminaInterger)));
}

void UHeroCharacterUIMain::SetStaminaRegenerationValue(float HealthRegeneration)
{
	FString StaminaRegString = "+";
	StaminaRegString += FString::SanitizeFloat(HealthRegeneration);
	//float HealthRegInterger = FMath::RoundHalfFromZero(HealthRegeneration);
	HeroStamina->SetStaminaRegenerationValue(FText::FromString(StaminaRegString));
}

void UHeroCharacterUIMain::SetStaminaRegenerationVisibility(bool Visible)
{
	HeroStamina->SetStaminaRegenerationVisibility(Visible);
}