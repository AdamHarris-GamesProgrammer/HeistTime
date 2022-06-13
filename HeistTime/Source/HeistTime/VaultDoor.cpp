// Fill out your copyright notice in the Description page of Project Settings.


#include "VaultDoor.h"

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

}

// Called when the game starts or when spawned
void AVaultDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVaultDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

