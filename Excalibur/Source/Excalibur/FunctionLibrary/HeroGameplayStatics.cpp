// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayStatics.h"
#include "GameplayEffect.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "Excalibur/Data/HeroDamageDataAsset.h"
#include "Excalibur/Attributes/HeroPlayerAttributeSet.h"
#include "Excalibur/Character/HeroPlayerCharacter.h"

float UHeroGameplayStatics::HeroApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator,
	AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, bool damageOverTime)
{
	return BaseDamage;
}