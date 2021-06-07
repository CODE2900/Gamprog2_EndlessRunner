// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Runner.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlayer_Runner::APlayer_Runner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
}

// Called when the game starts or when spawned
void APlayer_Runner::BeginPlay()
{
	Super::BeginPlay();
	
	StaticMesh->SetWorldScale3D(FMath::VRand());

}

// Called every frame
void APlayer_Runner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

