// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "GlobDevController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_LETHAL_API AGlobDevController : public APlayerController
{
	GENERATED_BODY()

public:
	AGlobDevController();

	/*UFUNCTION(BlueprintCallable)
	void AddMappingContext(UInputMappingContext* _MappingContext);*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInputMappingContext* MappingContext;
};
