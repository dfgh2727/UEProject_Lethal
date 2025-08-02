// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/LCGameInstance.h"
//#include "LCGameInstance.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

ULCGameInstance::ULCGameInstance()
{

}

ULCGameInstance::~ULCGameInstance()
{
	 
}

void ULCGameInstance::StartAsHost()
{
	FString TitleLevelName = TitleLevel.GetLongPackageName();
	FString OpenLevelName = FString::Printf(TEXT(":%s%s"), *Port, *TitleLevelName);
	UGameplayStatics::OpenLevel(GetWorld(), *OpenLevelName, true, TEXT("listen"));
}

void ULCGameInstance::StartAsClient()
{


}