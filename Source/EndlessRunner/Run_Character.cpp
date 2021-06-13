// Fill out your copyright notice in the Description page of Project Settings.

#include "Run_Character.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Run_Character_PlayerController.h"

// Sets default values
ARun_Character::ARun_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 250.0f;
	SpringArm->TargetOffset = (FVector(0,0,100.0f));

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

}

// Called when the game starts or when spawned
void ARun_Character::BeginPlay()
{
	Super::BeginPlay();
	
	isDead = false;
}

bool ARun_Character::getIsDead()
{
	return isDead;
}
void ARun_Character::addCoin()
{
	coins++;
}
// Called every frame
void ARun_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
// Called to bind functionality to input
void ARun_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}

void ARun_Character::Die()
{
	isDead = true;

	GetMesh()->SetVisibility(false);
	ARun_Character_PlayerController* Character_Controller = Cast<ARun_Character_PlayerController>(GetController());
	Character_Controller->DisableInput(Character_Controller);

	OnDeath.Broadcast(this);

	deathEffects(this);
	//GetController()->UnPossess();
}

