// Fill out your copyright notice in the Description page of Project Settings.


#include "Bag_Pickup.h"
#include "Components/SceneComponent.h"
#include "HeistTimeCharacter.h"

ABag_Pickup::ABag_Pickup()
	: APickupBase()
{

}

void ABag_Pickup::Pickup(AHeistTimeCharacter* character)
{
	Super::Pickup(character);

	character->SetCurrentBag(this);
	AttachToActor(character->GetOwner(), FAttachmentTransformRules::KeepRelativeTransform);
}

void ABag_Pickup::BeginPlay()
{
	Super::BeginPlay();
}

void ABag_Pickup::DropBag(AHeistTimeCharacter* character)
{
	character->SetCurrentBag(nullptr);
	UE_LOG(LogTemp, Warning, TEXT("DETACHING"));
	//DetachFromComponent(FAttachmentTransformRules::KeepRelativeTransform);
	DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);

	SetActorLocation(character->GetActorLocation());
}

void ABag_Pickup::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	//TODO: Test for collection point
}
