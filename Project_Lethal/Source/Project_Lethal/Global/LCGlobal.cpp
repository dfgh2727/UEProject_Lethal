// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/LCGlobal.h"
#include "Kismet/GameplayStatics.h"
#include "LCGameInstance.h"


ULCGameInstance* ULCGlobal::GetLCGameInstance(const UWorld* World)
{
	return Cast<ULCGameInstance>(UGameplayStatics::GetGameInstance(World));
}

void ULCGlobal::StartServer(UWorld* World/*, const FString& Port, const FString& LevelName*/)
{
	ULCGlobal::GetLCGameInstance(World)->StartAsHost();
}

void ULCGlobal::ConnectServer(UWorld* World, APlayerController* PlayerController, FString& IP/*, FString& Port*/)
{
	ULCGlobal::GetLCGameInstance(World)->StartAsClient(IP, PlayerController);
}
