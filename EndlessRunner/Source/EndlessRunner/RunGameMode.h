// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RunGameMode.generated.h"


/**
 * 
 */
UCLASS()
class ENDLESSRUNNER_API ARunGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Config")
		class TSubclassOf<class AFloorTile> FloorTileClass;
		
	
	UPROPERTY(EditAnywhere, Category = "Config")
		int32 NumInitialFloorTiles = 10;

	UPROPERTY(VisibleAnywhere, Category = "Runtime")
		FTransform NextSpawnPoint;

	UFUNCTION(BlueprintCallable)
	void OnHitCollider(class AFloorTile* tile);

	UFUNCTION(BlueprintCallable)
	void DestroyTile(AFloorTile* tile);
	
	UFUNCTION(BlueprintCallable)
	void CreateInitialFloorTiles();
	
	UFUNCTION(BlueprintCallable)
	void AddFloorTile();

	//void AddFloorTile();
protected:
	virtual void BeginPlay() override;
	
	
	
};
