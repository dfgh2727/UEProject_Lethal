// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Global/GameMode/LCGameMode.h"
#include "TitleGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_LETHAL_API ATitleGameMode : public ALCGameMode
{
	GENERATED_BODY()

public:

	ATitleGameMode();
	
	virtual void BeginPlay() override;
	
};
