// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerController.h"

AHeroPlayerController::AHeroPlayerController(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{

}

void AHeroPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}