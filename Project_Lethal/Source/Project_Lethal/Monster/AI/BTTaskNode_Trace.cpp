// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster/AI/BTTaskNode_Trace.h"
#include "Monster/AI/AIBTTaskNode.h"



UBTTaskNode_Trace::UBTTaskNode_Trace()
{
	AIStateValue = EAIState::Trace;
}

void UBTTaskNode_Trace::Start(UBehaviorTreeComponent& _OwnerComp)
{
}

void UBTTaskNode_Trace::TickTask(UBehaviorTreeComponent& _OwnerComp, uint8* _pNodeMemory, float _DeltaSeconds)
{
}