// Fill out your copyright notice in the Description page of Project Settings.


#include "VaultDoor.h"
#include "Components/BoxComponent.h"
#include "HeistTimeCharacter.h"

// Sets default values
AVaultDoor::AVaultDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_pVaultWall = CreateDefaultSubobject<UStaticMeshComponent>("Vault Wall");

	RootComponent = _pVaultWall;

	_pVaultDoor = CreateDefaultSubobject<UStaticMeshComponent>("Door");
	_pVaultDoor->SetupAttachment(_pVaultWall);

	_pVaultHandle = CreateDefaultSubobject<UStaticMeshComponent>("Handle");
	_pVaultHandle->SetupAttachment(_pVaultDoor);

	_pBoxCollider = CreateDefaultSubobject<UBoxComponent>("Box Collider");
	_pBoxCollider->SetupAttachment(_pVaultDoor);
	

}

// Called when the game starts or when spawned
void AVaultDoor::BeginPlay()
{
	Super::BeginPlay();
	
	_pBoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AVaultDoor::OnSphereBeginOverlap);
	_pBoxCollider->OnComponentEndOverlap.AddDynamic(this, &AVaultDoor::OnSphereEndOverlap);
}

// Called every frame
void AVaultDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVaultDoor::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Collision"));
	AHeistTimeCharacter* pPlayer = Cast<AHeistTimeCharacter>(OtherActor);
	if (pPlayer) {
		UE_LOG(LogTemp, Warning, TEXT("Broadcasting"));
		_vaultOpen.Broadcast();
	}
}

void AVaultDoor::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

