// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster/AI/BTTaskNode_Spawn.h"

void UBTTaskNode_Spawn::Start(UBehaviorTreeComponent& _OwnerComp)
{
}

void UBTTaskNode_Spawn::TickTask(UBehaviorTreeComponent& _OwnerComp, uint8* _pNodeMemory, float _DeltaSeconds)
{
	Super::TickTask(_OwnerComp, _pNodeMemory, _DeltaSeconds);
}

UBTTaskNode_Spawn::UBTTaskNode_Spawn()
{
	AIStateValue = EAIState::Spawn;
}
