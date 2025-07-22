// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster/AI/BTTaskNode_Idle.h"

UBTTaskNode_Idle::UBTTaskNode_Idle()
{
	AIStateValue = EAIState::Idle;
}

void UBTTaskNode_Idle::Start(UBehaviorTreeComponent& _OwnerComp)
{
	FPlayAIData& PlayAIData = UAIBTTaskNode::GetPlayAIData(_OwnerComp);
}

void UBTTaskNode_Idle::TickTask(UBehaviorTreeComponent& _OwnerComp, uint8* _pNodeMemory, float _DeltaSeconds)
{
	Super::TickTask(_OwnerComp, _pNodeMemory, _DeltaSeconds);

	FPlayAIData& PlayAIData = UAIBTTaskNode::GetPlayAIData(_OwnerComp);
}
