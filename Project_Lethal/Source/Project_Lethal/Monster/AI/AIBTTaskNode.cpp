// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster/AI/AIBTTaskNode.h"
#include <Monster/MonsterDataTable.h>
#include <Global/LCConst.h>
#include "BehaviorTree/BlackboardComponent.h"


UAIBTTaskNode::UAIBTTaskNode()
{
	bNotifyTick = true;
}

void UAIBTTaskNode::Start(UBehaviorTreeComponent& _OwnerComp)
{
}


EBTNodeResult::Type UAIBTTaskNode::ExecuteTask(UBehaviorTreeComponent& _OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(_OwnerComp, NodeMemory);

	FPlayAIData& PlayAIData = UAIBTTaskNode::GetPlayAIData(_OwnerComp);

	if (PlayAIData.AIState != EAIState::Idle)
	{
		return EBTNodeResult::Type::Failed;
	}

	Start(_OwnerComp);

	return EBTNodeResult::Type::InProgress;
}

FPlayAIData& UAIBTTaskNode::GetPlayAIData(UBehaviorTreeComponent& _OwnerComp)
{
	UObject* Data = _OwnerComp.GetBlackboardComponent()->GetValueAsObject(ULCConst::AI::AIDataName);
	return Cast<UAIDataObject>(Data)->PlayData;
}
 