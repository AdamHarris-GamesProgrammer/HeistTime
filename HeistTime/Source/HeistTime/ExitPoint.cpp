// Fill out your copyright notice in the Description page of Project Settings.


#include "ExitPoint.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "HeistTimeCharacter.h"
#include "Bag_Pickup.h"

// Sets default values
AExitPoint::AExitPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_pBox = CreateDefaultSubobject<USphereComponent>("Box Collider");
	RootComponent = _pBox;

	_pMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	_pMesh->SetupAttachment(_pBox);


}

// Called when the game starts or when spawned
void AExitPoint::BeginPlay()
{
	Super::BeginPlay();
	

	_pBox->OnComponentBeginOverlap.AddDynamic(this, &AExitPoint::OnSphereBeginOverlap);
	_pBox->OnComponentEndOverlap.AddDynamic(this, &AExitPoint::OnSphereEndOverlap);
}

// Called every frame
void AExitPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExitPoint::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AHeistTimeCharacter* pCharacter = Cast<AHeistTimeCharacter>(OtherActor);
	if (pCharacter != nullptr) {

	}

	ABag_Pickup* pBagPickup = Cast<ABag_Pickup>(OtherActor);
	if (pBagPickup != nullptr) {
		_currentMoney += pBagPickup->GetAmountToPickup();
		UE_LOG(LogTemp, Warning, TEXT("Money: %i"), _currentMoney);
		pBagPickup->Destroy();
	}
}

void AExitPoint::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AHeistTimeCharacter* pCharacter = Cast<AHeistTimeCharacter>(OtherActor);
	if (pCharacter != nullptr) {

	}
}

