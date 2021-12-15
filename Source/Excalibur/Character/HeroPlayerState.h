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
class EXCALIBUR_API AHeroPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	AHeroPlayerState();

protected:
	class UAbilitySystemComponent* AbilitySystemComponent;

	class UHeroPlayerAttributeSet* AttributeSetBase;
};
