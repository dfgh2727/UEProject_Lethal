// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MonsterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_LETHAL_API UMonsterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	void NativeBeginPlay() override;

	void NativeUpdateAnimation(float DetlaSeconds) override;

	template<typename EnumType>
	void ChangeAnimation(EnumType _Animation, FName _SectionName = TEXT("None"))
	{
		return ChangeAnimation(static_cast<int>(_Animation), _SectionName);
	}

	int GetCurAnimationType()
	{
		return CurAnimationType;
	}

	void ChangeAnimation(int _Animation, FName _SectionName = TEXT("None"));

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChangeAnimationEvent(UAnimMontage* _Montage, FName _SectionName);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim")
	TMap<int, UAnimMontage*> AnimMontages;

private:
	int CurAnimationType = 0;

	FName SectionName = TEXT("");

	UAnimMontage* CurMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* SkeletalMeshComponent;
};
