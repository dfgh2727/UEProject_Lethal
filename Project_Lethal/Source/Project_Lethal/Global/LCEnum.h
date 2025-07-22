// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LCEnum.generated.h"

/**
 * 
 */
#pragma region Minha AIState
UENUM(BlueprintType)
enum class EAIState : uint8
{
	Idle UMETA(DisplayName = "대기"),
	Patrol UMETA(DisplayName = "순찰"),
	Trace UMETA(DisplayName = "추적"),
	MAX UMETA(DisplayName = "MAX"),
};

#pragma endregion 


UCLASS()
class PROJECT_LETHAL_API ULCEnum : public UObject
{
	GENERATED_BODY()
	
};
