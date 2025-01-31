// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Cpp_BTTask_ChasePlayer.generated.h"

// Forward Declarations
class UBehaviorTreeComponent;

UCLASS()
class CPP_3DAISYSTEM_API UCpp_BTTask_ChasePlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	explicit UCpp_BTTask_ChasePlayer(const FObjectInitializer& ObjectInitializer);
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
