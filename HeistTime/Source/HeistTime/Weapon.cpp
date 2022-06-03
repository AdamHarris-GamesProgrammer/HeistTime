// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = pRootComponent;

	pMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun Mesh"));
	pMeshComponent->SetupAttachment(pRootComponent);
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	params.AddIgnoredActor(this);
	params.AddIgnoredActor(GetOwner());
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	TArray<Bullet*> pBulletsToRemove;

	FHitResult hitResult;
	for (int32 index = 0; index != _pBullets.Num(); ++index) {
		Bullet* b = _pBullets[index];

		if (b->Check(GetWorld(), &params, hitResult)) {
			FVector shotdirection = -b->direction;

			pBulletsToRemove.Add(b);

			if (pImpactEffect != nullptr) {
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), pImpactEffect, hitResult.Location, shotdirection.Rotation(), FVector::OneVector, true);

				UE_LOG(LogTemp, Warning, TEXT("Hit something"));
				//TODO: Damage
			}

			continue;
		}

		if (b->currentDistance >= b->maxRange) {
			pBulletsToRemove.Add(b);
		}
	}


	for (int32 index = 0; index != pBulletsToRemove.Num(); ++index) {
		_pBullets.Remove(pBulletsToRemove[index]);

		delete pBulletsToRemove[index];
	}

	//pBulletsToRemove.RemoveAll();
}

void AWeapon::PullTrigger() {

	APawn* owner = Cast<APawn>(GetOwner());

	if (owner == nullptr) return;


	AController* ownerController = owner->GetController();

	if (ownerController == nullptr) return;

	FVector location;
	FRotator rotation;

	ownerController->GetPlayerViewPoint(location, rotation);

	FVector end = location + rotation.Vector() * _range;

	Bullet* b = new Bullet();
	b->location = location;
	b->direction = rotation.Vector();
	b->maxRange = _range;
	b->rangeIncrement = _range / 10.0f;
	b->dropRate = 15.0f;
	
	_pBullets.Add(b);

	if (pMuzzleFlash != nullptr) {
		UGameplayStatics::SpawnEmitterAttached(pMuzzleFlash, pMeshComponent, "MuzzleFlashSocket");
	}

	if (pSfx == nullptr) {
		UGameplayStatics::PlaySoundAtLocation(this, pSfx, location);
	}
}

bool Bullet::Check(UWorld* world, FCollisionQueryParams* params, FHitResult result)
{
	FVector end = location + direction * rangeIncrement;

	float drop = dropRate * 9.81f;
	end.Z -= drop;

	currentDistance += rangeIncrement;


	UE_LOG(LogTemp, Warning, TEXT("Start: %s End: %s"), *location.ToString(), *end.ToString());

	DrawDebugLine(world, location, end, FColor::Green, true, 100.0f);

	bool hit = world->LineTraceSingleByChannel(result, location, end, ECC_Visibility, *params);

	location = end;

	return hit;
}
