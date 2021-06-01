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

// Sets default values
AFloorTile::AFloorTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>("Scene");
	SetRootComponent(Scene);

	Arrow = CreateDefaultSubobject<UArrowComponent>("Arrow");
	Arrow->SetupAttachment(Scene);
	

	Box = CreateDefaultSubobject<UBoxComponent>("Box");
	Box->SetupAttachment(Scene);

	Floor = CreateDefaultSubobject<UStaticMeshComponent>("Floor");
	Floor->SetupAttachment(Scene);
	
	Wall = CreateDefaultSubobject<UStaticMeshComponent>("Wall");
	Wall->SetupAttachment(Scene);
	
	Wall2 = CreateDefaultSubobject<UStaticMeshComponent>("Wall2");
	Wall2->SetupAttachment(Scene);
}



// Called when the game starts or when spawned
void AFloorTile::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AFloorTile::OnHit);

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
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Pass Thru");
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


