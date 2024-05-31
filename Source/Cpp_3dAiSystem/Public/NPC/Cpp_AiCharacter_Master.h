// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Cpp_AiCharacter_Master.generated.h"

UCLASS()
class CPP_3DAISYSTEM_API ACpp_AiCharacter_Master : public ACharacter
{
	GENERATED_BODY()

public:
	ACpp_AiCharacter_Master();

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};
