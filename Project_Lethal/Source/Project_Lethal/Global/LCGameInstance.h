// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LCGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_LETHAL_API ULCGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	ULCGameInstance();
	~ULCGameInstance();

	void StartAsHost();
	void StartAsClient(FString IP, APlayerController* PlayerController);

	UPROPERTY(EditAnywhere, Category = "Level")
	TSoftObjectPtr<UWorld> TitleLevel;

	UPROPERTY(EditAnywhere, Category = "Level")
	TSoftObjectPtr<UWorld> PlayLevel;

	UPROPERTY(EditAnywhere, Category = "Num")
	FString Port = TEXT("1234");

private:

};
