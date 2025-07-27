// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/GlobalDev/GlobDevController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

AGlobDevController::AGlobDevController()
{
}

//void AGlobDevController::AddMappingContext(UInputMappingContext* _MappingContext)
//{
//	if (nullptr == GetLocalPlayer())
//	{
//		return;
//	}
//
//	UEnhancedInputLocalPlayerSubsystem* InputSystem =
//		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
//
//	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
//	
//	InputSystem->ClearAllMappings();
//
//	InputSystem->AddMappingContext(_MappingContext, 0);
//}

