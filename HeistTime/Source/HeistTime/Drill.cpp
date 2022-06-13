// Fill out your copyright notice in the Description page of Project Settings.


#include "Drill.h"
#include "VaultDoor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ADrill::ADrill()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_pDrillMesh = CreateDefaultSubobject<UStaticMeshComponent>("Drill Mesh");

}

// Called when the game starts or when spawned
void ADrill::BeginPlay()
{
	Super::BeginPlay();


	_remainingTime = _drillDuration;
}

// Called every frame
void ADrill::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	_remainingTime -= GetWorld()->GetDeltaSeconds();

	if (_remainingTime < 0.0f) {
		_pConnectedVault->OpenVault();

		GetWorld()->DestroyActor(this);
	}

}

void ADrill::SetConnectedVault(class AVaultDoor* pVault)
{
	_pConnectedVault = pVault;
}

