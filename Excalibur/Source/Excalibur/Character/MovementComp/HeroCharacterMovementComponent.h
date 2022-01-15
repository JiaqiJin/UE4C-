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

	virtual float GetMaxJumpHeight() const;

	virtual float GetMaxJumpHeightWithJumpTime() const;

	void SetJumpZVelocity(float NewValue);
	
	UFUNCTION(BlueprintCallable, Category = "Hero|Component|MovementComponent")
	void SetSprinting(bool bNewSprint) { isSprinting = bNewSprint; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Movement : Sprint")
	bool isSprinting;

	UPROPERTY(EditDefaultsOnly, Category = Tags)
	FGameplayTag FallingTag;
protected:
	// Called after MovementMode has changed. Base implementation does special handling for starting certain modes,
	// then notifies the CharacterOwner.
	virtual void OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);

private:
	float DefaultGravityScale;
};
