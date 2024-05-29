// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/Cpp_BTTask_ChasePlayer.h"

UCpp_BTTask_ChasePlayer::UCpp_BTTask_ChasePlayer(const FObjectInitializer& ObjectInitializer) {
	// NodeNames are names which are shown in the BehaviorTree Editor
	NodeName = TEXT("Chase Player");
}

EBTNodeResult::Type UCpp_BTTask_ChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	// Get target location from blackboard via NPC's controller
	if (const auto* AiCont = Cast<ACpp_AiC_NPC>(OwnerComp.GetOwner())) {
		// Get player location from blackboard
		const auto PlayerLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(GetSelectedBlackboardKey());

		// Move to player location
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(AiCont, PlayerLocation);

		// Finish with success
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
