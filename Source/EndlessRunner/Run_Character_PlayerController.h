// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Run_Character_PlayerController.generated.h"


/**
 * 
 */
UCLASS()
class ENDLESSRUNNER_API ARun_Character_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void SetupInputComponent() override;
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class ARun_Character* RunCharacter;

	virtual void BeginPlay() override;

	void MoveForward(float scale);
	void MoveRight(float scale);
private:
	
};
