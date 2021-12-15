// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Excalibur/ExcaliburCharacter.h"
#include "AbilitySystemComponent.h"
#include "HeroPlayerCharacter.generated.h"

UCLASS()
class EXCALIBUR_API AHeroPlayerCharacter : public AExcaliburCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHeroPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
