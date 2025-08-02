// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LCGlobal.generated.h"

//#include "LCGameInstance.h"

/**
 * 
 */
class ULCGameInstance;

UCLASS()
class PROJECT_LETHAL_API ULCGlobal : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	static ULCGameInstance* GetLCGameInstance(const UWorld* World);

	UFUNCTION(BlueprintCallable)
	static void StartServer(const UWorld* World, const FString& Port, const FString& LevelName);

	
};
