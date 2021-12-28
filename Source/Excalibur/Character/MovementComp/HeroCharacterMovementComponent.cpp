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
	return 600.0f;
}