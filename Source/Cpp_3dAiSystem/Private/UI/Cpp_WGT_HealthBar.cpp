// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/Cpp_WGT_HealthBar.h"
#include "Components/ProgressBar.h"

void UCpp_WGT_HealthBar::NativeConstruct() {
	Super::NativeConstruct();
}

void UCpp_WGT_HealthBar::SetHealthBarPercentage(const float Percentage) {
	PB_HealthBar->SetPercent(Percentage);
}
