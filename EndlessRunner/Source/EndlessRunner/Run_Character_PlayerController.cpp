// Fill out your copyright notice in the Description page of Project Settings.


#include "Run_Character_PlayerController.h"
#include "Run_Character.h"


void ARun_Character_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	RunCharacter = Cast<ARun_Character>(GetCharacter());

}

void ARun_Character_PlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

