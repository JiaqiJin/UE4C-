// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "../HeroPlayerCharacter.h"

UHeroCharacterMovementComponent::UHeroCharacterMovementComponent()
{
	NavAgentProps.bCanCrouch = true;
	//SetJumpZVelocity(JumpZVelocity);
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

float UHeroCharacterMovementComponent::GetMaxJumpHeight() const
{
	AHeroPlayerCharacter* Character = Cast<AHeroPlayerCharacter>(GetOwner());
	if (Character)
	{
		float JumpHeightMultiplier = Character->GetJumpHeightMultiplier();
		const float Gravity = GetGravityZ();
		if (FMath::Abs(Gravity) > KINDA_SMALL_NUMBER)
		{
			return FMath::Square(JumpZVelocity * JumpHeightMultiplier) / (-2.f * Gravity);
		}
		else
		{
			return 0.f;
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		return Super::GetMaxJumpHeight();
	}
}

float UHeroCharacterMovementComponent::GetMaxJumpHeightWithJumpTime() const
{
	const float MaxJumpHeight = GetMaxJumpHeight();

	if (CharacterOwner)
	{
		return (CharacterOwner->JumpMaxHoldTime * JumpZVelocity) + MaxJumpHeight;
	}

	return MaxJumpHeight;
}

void UHeroCharacterMovementComponent::SetJumpZVelocity(float CurrentJumpZVelocity)
{
	AHeroPlayerCharacter* Character = Cast<AHeroPlayerCharacter>(GetOwner());
	if (Character)
	{
		float jumpHeightMult = Character->GetJumpHeightMultiplier();
		float jumpHeight = Character->GetJumpHeight();

		JumpZVelocity = jumpHeight * jumpHeightMult;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		JumpZVelocity = CurrentJumpZVelocity;
	}
}