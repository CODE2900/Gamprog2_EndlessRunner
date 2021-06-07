// Fill out your copyright notice in the Description page of Project Settings.


#include "RunGameMode.h"
#include "FloorTile.h"
#include "Run_Character.h"
#include "TimerManager.h"

void ARunGameMode::CreateInitialFloorTiles()
{
	for (int i = 0; i < NumInitialFloorTiles; i++)
	{
		AddFloorTile();
	}

}

void ARunGameMode::AddFloorTile()
{
	UWorld* World = GetWorld();

	if (World)
	{
		AFloorTile* Tile = World->SpawnActor<AFloorTile>(FloorTileClass, NextSpawnPoint);
		
		
		if (Tile)
		{
			NextSpawnPoint = Tile->GetAttachPointTransform();
		}
		
		Tile->TileExited.AddDynamic(this, &ARunGameMode::OnHitCollider);
	}
}

void ARunGameMode::DestroyTile(AFloorTile* tile)
{
	tile->Destroy();

}

void ARunGameMode::BeginPlay()
{
	Super::BeginPlay();

	CreateInitialFloorTiles();

	
}

void ARunGameMode::OnHitCollider(AFloorTile* tile)
{
	AddFloorTile();

	//Delay
	FTimerHandle Time;
	FTimerDelegate TimerDelagate = FTimerDelegate::CreateUObject(this, &ARunGameMode::DestroyTile, tile);

	GetWorldTimerManager().SetTimer(Time, TimerDelagate, 1.5f, false);
	
	
}
