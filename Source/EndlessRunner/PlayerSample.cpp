// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerSample.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
APlayerSample::APlayerSample()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	SetRootComponent(StaticMesh);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>("Movement");

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(StaticMesh);
	SpringArm->TargetArmLength = 500.0f;
	//SpringArm->TargetOffset(FVector(0,0,50.0f));

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
	//Camera->SetRelativeLocation(FVector(-500.0f, 0, 0));

	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = true;
}

// Called when the game starts or when spawned
void APlayerSample::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerSample::MoveForward(float scale)
{
	Movement->AddInputVector(GetActorForwardVector() * scale);
}

void APlayerSample::MoveRight(float scale)
{
	Movement->AddInputVector(GetActorRightVector() * scale);
}

void APlayerSample::LookUp(float scale)
{
	AddControllerPitchInput(scale);
}

void APlayerSample::Turn(float scale)
{
	AddControllerYawInput(scale);
}

// Called every frame
void APlayerSample::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerSample::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerSample::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerSample::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerSample::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &APlayerSample::Turn);

}

