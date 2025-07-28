// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Global/GameMode/LCGameMode.h"
#include "ReadyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_LETHAL_API AReadyGameMode : public ALCGameMode
{
	GENERATED_BODY()


public:
	AReadyGameMode();

	virtual void BeginPlay() override;
	
};
