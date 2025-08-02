// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/LCGlobal.h"
#include "Kismet/GameplayStatics.h"
#include "LCGameInstance.h"


ULCGameInstance* ULCGlobal::GetLCGameInstance(const UWorld* World)
{
	return Cast<ULCGameInstance>(UGameplayStatics::GetGameInstance(World));
}

void ULCGlobal::StartServer(const UWorld* World, const FString& Port, const FString& LevelName)
{
	ULCGlobal::GetLCGameInstance(World)->StartAsHost();
}
