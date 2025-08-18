// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameplayEffectTypes.h"
#include "OmochaAbilityTypes.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FDamageEffectParams
{
	GENERATED_BODY()

	FDamageEffectParams(){}
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UObject> WorldContextObject = nullptr;

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<UGameplayEffect> DamageGameplayEffectClass = nullptr;
		
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UAbilitySystemComponent> SourceAbilitySystemComponent;

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UAbilitySystemComponent> TargetAbilitySystemComponent;
	
	UPROPERTY(BlueprintReadWrite)
	float BaseDamage = 0.f;

	UPROPERTY(BlueprintReadWrite)
	float AbilityLevel = 1.f;
		
	UPROPERTY(BlueprintReadWrite)
	FGameplayTag DamageType = FGameplayTag();

	UPROPERTY(BlueprintReadWrite)
	bool bIsRadialDamage = false;

	UPROPERTY(BlueprintReadWrite)
	float RadialDamageInnerRadius = 0.f;

	UPROPERTY(BlueprintReadWrite)
	float RadialDamageOuterRadius = 0.f;

	UPROPERTY(BlueprintReadWrite)
	FVector RadialDamageOrigin = FVector::ZeroVector;
	
	UPROPERTY(BlueprintReadWrite)
	FGameplayTag HitType = FGameplayTag();

	UPROPERTY(BlueprintReadWrite)
	float KnockbackForceMagnitude = 0.f;

	UPROPERTY(BlueprintReadWrite)
	FVector KnockbackForce = FVector::ZeroVector;

	// Not using
	UPROPERTY(BlueprintReadWrite)
	FVector ImpulseDirection = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite)
	float ImpulseMultiplier = 1.f;
};

USTRUCT(BlueprintType)
struct FOmochaGameplayEffectContext : public FGameplayEffectContext
{
	GENERATED_BODY()

public:
	// Damage Getter
	bool IsCriticalHit() const { return bIsCriticalHit; }
	bool IsBlockedHit () const { return bIsBlockedHit; }
	TSharedPtr<FGameplayTag> GetDamageType() const { return DamageType; }
	FVector GetDeathImpulse() const { return DeathImpulse; }
	bool IsRadialDamage() const { return bIsRadialDamage; }
	float GetRadialDamageInnerRadius() const { return RadialDamageInnerRadius; }
	float GetRadialDamageOuterRadius() const { return RadialDamageOuterRadius; }
	FVector GetRadialDamageOrigin() const { return RadialDamageOrigin; }
	float GetSkillBaseDamage() const { return SkillBaseDamage; }
	
	// Debuff Getter
	bool IsSuccessDebuff() const {return bIsSuccessDebuff; }
	float GetDebuffDamage() const { return DebuffDamage; }
	float GetDebuffDuration() const { return DebuffDuration; }
	float GetDebuffFrequency() const { return DebuffFrequency; }

	// HitReact Getter
	FGameplayTag GetHitType() const { return HitType; }
	FVector GetImpulseDirection() const { return ImpulseDirection; }
	float GetImpulseMultiplier() const { return ImpulseMultiplier; }
	FVector GetKnockbackForce() const { return KnockbackForce; }
	
	// Damage Setter
	void SetIsCriticalHit(bool bInIsCriticalHit) { bIsCriticalHit = bInIsCriticalHit; }
	void SetIsBlockedHit(bool bInIsBlockedHit) { bIsBlockedHit = bInIsBlockedHit; }
	void SetDamageType(TSharedPtr<FGameplayTag> InDamageType) { DamageType = InDamageType; }
	void SetDeathImpulse(const FVector& InImpulse) { DeathImpulse = InImpulse; }
	void SetIsRadialDamage(bool bInIsRadialDamage) { bIsRadialDamage = bInIsRadialDamage; }
	void SetRadialDamageInnerRadius(float InRadialDamageInnerRadius) { RadialDamageInnerRadius = InRadialDamageInnerRadius; }
	void SetRadialDamageOuterRadius(float InRadialDamageOuterRadius) { RadialDamageOuterRadius = InRadialDamageOuterRadius; }
	void SetRadialDamageOrigin(const FVector& InRadialDamageOrigin) { RadialDamageOrigin = InRadialDamageOrigin; }
	void SetSkillBaseDamage(float InSkillBaseDamage) { SkillBaseDamage = InSkillBaseDamage; }

	// Debuff
	void SetIsSuccessDebuff(bool bInIsSuccessDebuff){ bIsSuccessDebuff = bInIsSuccessDebuff; }
	void SetDebuffDamage(float bInDebuffDamage){ DebuffDamage = bInDebuffDamage; }
	void SetDebuffDuration(float InDebuffDuration) { DebuffDuration = InDebuffDuration; }
	void SetDebuffFrequency(float InDebuffFrequency){ DebuffFrequency = InDebuffFrequency; }

	// Hitreact
	void SetHitType(const FGameplayTag& InHitType) { HitType = InHitType; }
	void SetImpulseDirection(const FVector& InImpulse) { ImpulseDirection = InImpulse; }
	void SetImpulseMultiplier(float InImpulse) { ImpulseMultiplier = InImpulse; }
	void SetKnockbackForce(const FVector& InKnockbackForce) { KnockbackForce = InKnockbackForce; }
	
	// virtual UScriptStruct* GetScriptStruct() const override
	// {
	// 	return FOmochaGameplayEffectContext::StaticStruct();
	// }

	// 
	// virtual FGameplayEffectContext* Duplicate() const override
	// {
	// 	FOmochaGameplayEffectContext* NewContext = new FOmochaGameplayEffectContext(*this);
	// 	if (GetHitResult())
	// 	{
	// 		NewContext->AddHitResult(*GetHitResult(), true);
	// 	}
	// 	return NewContext;
	// }
	//virtual bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess) override;
	
protected:

	UPROPERTY()
	float SkillBaseDamage = 0.f;
	
	UPROPERTY()
	bool bIsBlockedHit = false;
	
	UPROPERTY()
	bool bIsCriticalHit = false;

	TSharedPtr<FGameplayTag> DamageType;

	UPROPERTY()
	FVector DeathImpulse = FVector::ZeroVector;
	
	UPROPERTY()
	bool bIsRadialDamage = false;

	UPROPERTY()
	float RadialDamageInnerRadius = 0.f;

	UPROPERTY()
	float RadialDamageOuterRadius = 0.f;

	UPROPERTY()
	FVector RadialDamageOrigin = FVector::ZeroVector;

	UPROPERTY()
	FVector KnockbackForce = FVector::ZeroVector;
        
	UPROPERTY()
	bool bIsSuccessDebuff = false;

	UPROPERTY()
	float DebuffDamage = 0.f;

	UPROPERTY()
	float DebuffDuration = 0.f;

	UPROPERTY()
	float DebuffFrequency = 0.f;
	
	UPROPERTY()
	FVector ImpulseDirection = FVector::ZeroVector;

	UPROPERTY()
	float ImpulseMultiplier = 1.f;
	
	UPROPERTY()
	FGameplayTag HitType;	
};

// template<>
// struct TStructOpsTypeTraits<FOmochaGameplayEffectContext> : public TStructOpsTypeTraitsBase2<FOmochaGameplayEffectContext>
// {
// 	enum
// 	{
// 		WithNetSerializer = true,
// 		WithCopy = true
// 	};
// };