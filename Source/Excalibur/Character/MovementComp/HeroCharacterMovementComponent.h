// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeroCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
	UHeroCharacterMovementComponent();

	virtual float GetMaxSpeed() const override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hero|Component|MovementComponent")
	bool isSprinting;

private:
	float DefaultGravityScale;
};
