// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "HJGameplayAbilityTypes.h"
#include "AbilityInputModifier.generated.h"

/**
 * 
 */
UCLASS()
class HEAVENLYJUDGEMENT_API UAbilityInputModifier : public UInputModifier
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = Settings)
	EAbilityInputID InputID;

protected:
	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override;
	
};
