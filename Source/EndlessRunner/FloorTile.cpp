// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorTile.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Run_Character.h"
#include "Kismet/GameplayStatics.h"
#include "RunGameMode.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "Obstacle.h"
#include "Pickups.h"

// Sets default values
AFloorTile::AFloorTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("Scene");
	//SetRootComponent(Scene);

	Arrow = CreateDefaultSubobject<UArrowComponent>("Arrow");
	Arrow->SetupAttachment(RootComponent);
	

	Box = CreateDefaultSubobject<UBoxComponent>("Box");
	Box->SetupAttachment(RootComponent);

	CoinBox = CreateDefaultSubobject<UBoxComponent>("CoinBox");
	CoinBox->SetupAttachment(RootComponent);

	Floor = CreateDefaultSubobject<UStaticMeshComponent>("Floor");
	Floor->SetupAttachment(RootComponent);
	
	Wall = CreateDefaultSubobject<UStaticMeshComponent>("Wall");
	Wall->SetupAttachment(RootComponent);
	
	Wall2 = CreateDefaultSubobject<UStaticMeshComponent>("Wall2");
	Wall2->SetupAttachment(RootComponent);

	SpawnArea = CreateDefaultSubobject<UBoxComponent>("SpawnArea");
	SpawnArea->SetupAttachment(RootComponent);


}



// Called when the game starts or when spawned
void AFloorTile::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AFloorTile::OnHit);

	int32 chance = rand() % 100 + 1;

	if (chance >= 50)
	{
		for (int i = 0; i < 3; i++)
		{
			SpawnObstacle();
		}
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			SpawnPickup();
		}
	}
	

	
	//TileExited.AddDynamic(Cast<ARunGameMode>(UGameplayStatics::GetGameMode(GetWorld())), &ARunGameMode::OnHitCollider);
	
	
}

/*void AFloorTile::DestroyTile()
{
	Destroy();
}*/

void AFloorTile::OnHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ARun_Character* player = Cast<ARun_Character>(OtherActor))
	{
		TileExited.Broadcast(this);
		//ObstacleStorage->Destroy();

		DestroyObstacle();
		DestroyPickup();

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Pass Thru");
	}
	
	//GetWorldTimerManager().SetTimer(Time,this,&AFloorTile::DestroyTile,1.5f,false);
}

// Called every frame
void AFloorTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FTransform AFloorTile::GetAttachPointTransform()
{
	return Arrow->GetComponentTransform();
}

void AFloorTile::SpawnObstacle()
{
	FVector SpawnPoint = UKismetMathLibrary::RandomPointInBoundingBox(SpawnArea->Bounds.Origin, SpawnArea->Bounds.BoxExtent);
	/*FTransform SpawnPointArea;
	SpawnPointArea.SetLocation(SpawnPoint);*/

	AObstacle* rock = GetWorld()->SpawnActor<AObstacle>(rockObstacle[0],SpawnPoint,FRotator(0),FActorSpawnParameters());
	rock->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepWorld, true), AFloorTile::GetAttachParentSocketName());

	ObstacleStorage.Add(rock);
}

void AFloorTile::DestroyObstacle()
{
	for (int32 i = 0; i < ObstacleStorage.Num(); i++)
	{
		ObstacleStorage[i]->Destroy();
	}
}

void AFloorTile::SpawnPickup()
{
	FVector PickUp_SpawnPoint = UKismetMathLibrary::RandomPointInBoundingBox(CoinBox->Bounds.Origin, CoinBox->Bounds.BoxExtent);

	APickups* coins = GetWorld()->SpawnActor<APickups>(Pickups[0], PickUp_SpawnPoint, FRotator(0), FActorSpawnParameters());
	coins->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepWorld, true), AFloorTile::GetAttachParentSocketName());

	pickupStorage.Add(coins);
}

void AFloorTile::DestroyPickup()
{
	if (pickupStorage.Num() > 0)
	{
		for (int32 i = 0; i < pickupStorage.Num(); i++)
		{
			if (pickupStorage[i] != nullptr)
			{
				pickupStorage[i]->Destroy();
			}
			else
			{
				return;
			}
			
		}
	}
	
}




