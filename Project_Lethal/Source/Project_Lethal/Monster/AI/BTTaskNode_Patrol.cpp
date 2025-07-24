// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster/AI/BTTaskNode_Patrol.h"
#include "BTTaskNode_Patrol.h"
#include "Monster/AI/AIBTTaskNode.h"
#include "Monster/Monster.h"


UBTTaskNode_Patrol::UBTTaskNode_Patrol()
{
	AIStateValue = EAIState::Patrol;
}
void UBTTaskNode_Patrol::Start(UBehaviorTreeComponent& _OwnerComp)
{
	FPlayAIData& PlayAIData = UAIBTTaskNode::GetPlayAIData(_OwnerComp);

	if (nullptr != PlayAIData.SelfAnimPawn)
	{
		PlayAIData.SelfAnimPawn->ChangeAnimation(static_cast<int>(AIStateValue)); // 0 Àº Idle
	}
}

void UBTTaskNode_Patrol::TickTask(UBehaviorTreeComponent& _OwnerComp, uint8* _pNodeMemory, float _DeltaSeconds)
{
}
