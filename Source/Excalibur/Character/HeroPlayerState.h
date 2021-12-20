// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "HeroPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API AHeroPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AHeroPlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UHeroPlayerAttributeSet* GetAttributeSetBase() const;

	void InitializeAttributes();
protected:
	class UAbilitySystemComponent* AbilitySystemComponent;

	class UHeroPlayerAttributeSet* AttributeSetBase;
};
