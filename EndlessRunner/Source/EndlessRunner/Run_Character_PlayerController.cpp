// Fill out your copyright notice in the Description page of Project Settings.


#include "Run_Character_PlayerController.h"
#include "Run_Character.h"
#include "Components/InputComponent.h"
#include "GameFramework/Pawn.h"



void ARun_Character_PlayerController::MoveForward(float scale)
{
	RunCharacter->AddMovementInput(RunCharacter->GetActorForwardVector(), scale);
}

void ARun_Character_PlayerController::MoveRight(float scale)
{
	RunCharacter->AddMovementInput(RunCharacter->GetActorRightVector(), scale);
}

void ARun_Character_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	RunCharacter = Cast<ARun_Character>(GetCharacter());

}

void ARun_Character_PlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (RunCharacter->getIsDead() != true)
	{
		MoveForward(1);
		
	}
}

void ARun_Character_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//InputComponent->BindAxis("MoveForward", this, &ARun_Character_PlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ARun_Character_PlayerController::MoveRight);

}

