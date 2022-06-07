// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupBase.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HeistTimeCharacter.h"

// Sets default values
APickupBase::APickupBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_pSphere = CreateDefaultSubobject<USphereComponent>("Collider");
	_pSphere->SetSphereRadius(32.0f, true);
	RootComponent = _pSphere;

	_pMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	_pMesh->SetupAttachment(_pSphere);
}

// Called when the game starts or when spawned
void APickupBase::BeginPlay()
{
	Super::BeginPlay();
	
	_pSphere->OnComponentBeginOverlap.AddDynamic(this, &APickupBase::OnSphereBeginOverlap);
	_pSphere->OnComponentEndOverlap.AddDynamic(this, &APickupBase::OnSphereEndOverlap);
}

// Called every frame
void APickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickupBase::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	UE_LOG(LogTemp, Warning, TEXT("Colliding"));

	AHeistTimeCharacter* pCharacter = Cast<AHeistTimeCharacter>(OtherActor);

	if (pCharacter == nullptr) return;

	pCharacter->SetNearbyPickup(this);

}

void APickupBase::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AHeistTimeCharacter* pCharacter = Cast<AHeistTimeCharacter>(OtherActor);

	if (pCharacter == nullptr) return;

	pCharacter->SetNearbyPickup(nullptr);
}

void APickupBase::Pickup(AHeistTimeCharacter* character) {
	OnPickUp.Broadcast(character);
}

