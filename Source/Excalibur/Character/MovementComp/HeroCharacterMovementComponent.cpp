// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "../HeroPlayerCharacter.h"

UHeroCharacterMovementComponent::UHeroCharacterMovementComponent()
{
	NavAgentProps.bCanCrouch = true;
}

float UHeroCharacterMovementComponent::GetMaxSpeed() const
{
	AHeroPlayerCharacter* Character = Cast<AHeroPlayerCharacter>(GetOwner());
	if (!Character)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		return Super::GetMaxSpeed();
	}

	float MovementSpeedMultiplier = Character->GetMovementSpeedMultiplier();
	return Character->GetMovementSpeed() * MovementSpeedMultiplier;
}