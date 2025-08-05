// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/Controller/PlayPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"


void APlayPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void APlayPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	SetupInputComponentEvent();
}

void APlayPlayerController::AddMappingContext(UInputMappingContext* _MappingContext)
{
	if (nullptr == GetLocalPlayer())
	{
		return;
	}

	UEnhancedInputLocalPlayerSubsystem* InputSystem = ULocalPlayer::GetSubsystem< UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	InputSystem->ClearAllMappings();
	InputSystem->AddMappingContext(_MappingContext, 0);
}

