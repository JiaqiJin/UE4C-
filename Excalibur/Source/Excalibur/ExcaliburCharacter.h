// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "Data/HeroAbilityDataAsset.h"
#include "ExcaliburCharacter.generated.h"

UCLASS()
class EXCALIBUR_API AExcaliburCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

protected:
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	AExcaliburCharacter(const class FObjectInitializer& InitializerObject);

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	// Only called on the Server. Calls before Server's AcknowledgePossession.
	virtual void PossessedBy(AController* NewController) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;

public:
	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedBaseValue() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedMultiplier() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedMultiplierBase() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetJumpHeight() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetJumpHeightMultiplier() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetAirControl() const;

	UFUNCTION(BlueprintPure, Category = "Player|Component|MovementComponent")
	bool IsHeroSprinting() const;

	UFUNCTION(BlueprintPure, Category = "Player|Component|MovementComponent")
	float GetCurrentLevel() const;

	UFUNCTION(BlueprintPure, Category = "Player|Component|MovementComponent")
	class UHeroCharacterMovementComponent* GetHeroCharacterMovementComponent() const;

	FORCEINLINE UHeroAbilityDataAsset* GetDefaultAbilityDataAsset() const { return DefaultAbilities; }

protected:
	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:
	// The core ActorComponent for interfacing with the GameplayAbilities System
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	// Player Attribute Set
	TWeakObjectPtr<class UHeroPlayerAttributeSet> PlayerAttributes;

	// Default attributes for a character for initializing on spawn/respawn.
	// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Player|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Data")
	UHeroAbilityDataAsset* DefaultAbilities;

	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
	class UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
	class UManaComponent* ManaComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
	class UStaminaComponent* StaminaComponent;
protected:
	void ApplyDefaultAbilities();
	void GrantAbilityToPlayer(FGameplayAbilitySpec Ability);
	void GrantAbilitiesToPlayer(TArray<FGameplayAbilitySpec> Abilities);
};

