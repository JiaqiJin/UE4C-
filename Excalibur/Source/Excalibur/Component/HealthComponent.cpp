// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "../Character/HeroPlayerCharacter.h"
#include "../Character/HeroPlayerState.h"
#include "../Attributes/HeroPlayerAttributeSet.h"
#include "../Character/HeroPlayerController.h"
#include "../UI/HeroCharacterUIMain.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	AHeroPlayerCharacter* PlayerCharacter = Cast<AHeroPlayerCharacter>(GetOwner());
	AHeroPlayerState* PS = PlayerCharacter->GetPlayerState<AHeroPlayerState>();
	AbilitySystemComponent = PlayerCharacter->GetAbilitySystemComponent();

	InitializeHealthAttribute(PS);

	BindHealthAttributeChange(PlayerCharacter);

}

void UHealthComponent::HealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	Health = NewValue;
	UpdateHealthBarPercent();
	UpdateHealthBarText();

	UE_LOG(LogTemp, Warning, TEXT("New Value : %f, Old Value : %f"), NewValue, OldValue)
}

void UHealthComponent::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;
}

void UHealthComponent::InitializeHealthAttribute(class AHeroPlayerState* PS)
{
	if (PS)
	{
		PlayerAttributes = PS->GetAttributeSetBase();
		if (PlayerAttributes.IsValid())
		{
			MaxHealth = PlayerAttributes->GetMaxHealth();
			Health = MaxHealth;
			PlayerAttributes->InitHealth(Health);

			//UE_LOG(LogTemp, Warning, TEXT("Max health : %f, Health : %f"), MaxHealth, Health);

			UpdateHealthBarPercent();
			UpdateHealthBarText();
			UpdateHealthRegenerationBarText();
			UpdateRegenerationVisibility();
		}
	}
}

void UHealthComponent::BindHealthAttributeChange(class AHeroPlayerCharacter* PlayerCharacter)
{
	if (PlayerCharacter)
	{
		if (AbilitySystemComponent.IsValid())
		{
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributes->GetHealthAttribute()).AddUObject(this,
				&UHealthComponent::HealthChanged);

			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributes->GetMaxHealthAttribute()).AddUObject(this,
				&UHealthComponent::MaxHealthChanged);
		}
	}
}

void UHealthComponent::UpdateHealthBarPercent()
{
	AHeroPlayerCharacter* HeroCharacter = Cast<AHeroPlayerCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthBarPercentage(Health / MaxHealth);
		}
	}
}

void UHealthComponent::UpdateHealthBarText()
{

}

void UHealthComponent::UpdateHealthRegenerationBarText()
{

}

void UHealthComponent::UpdateRegenerationVisibility()
{

}