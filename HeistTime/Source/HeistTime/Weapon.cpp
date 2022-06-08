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

	_rangeIncrement = _range / _bulletIterations;

	_currentAmmo = _totalAmmo;
	Reload();
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

				//UE_LOG(LogTemp, Warning, TEXT("Hit something"));
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

void AWeapon::CollectAmmo(int amount)
{
	_currentAmmo += amount;

	if (_currentAmmo > _totalAmmo) {
		_currentAmmo = _totalAmmo;
	}
}

void AWeapon::PullTrigger() {
	if (_bulletsInClip == 0) return;

	APawn* owner = Cast<APawn>(GetOwner());
	if (owner == nullptr) return;


	AController* ownerController = owner->GetController();
	if (ownerController == nullptr) return;

	FVector location;
	FRotator rotation;
	ownerController->GetPlayerViewPoint(location, rotation);

	Bullet* b = new Bullet();
	b->location = location;
	b->direction = rotation.Vector();
	b->maxRange = _range;
	b->rangeIncrement = _rangeIncrement;
	b->dropRate = _bulletDropRate;
	
	_pBullets.Add(b);

	_bulletsInClip--;
	//UE_LOG(LogTemp, Warning, TEXT("Bullets Left: %i"), _bulletsInClip);

	if (pMuzzleFlash != nullptr) {
		UGameplayStatics::SpawnEmitterAttached(pMuzzleFlash, pMeshComponent, "MuzzleFlashSocket");
	}

	if (pSfx != nullptr) {
		UGameplayStatics::PlaySoundAtLocation(this, pSfx, location);
	}
}

void AWeapon::Reload()
{
	if (_currentAmmo == 0) return;
	if (_bulletsInClip == _clipSize) return;

	int remainder = _clipSize - _bulletsInClip;

	if (remainder > _currentAmmo) {
		remainder = _currentAmmo;
		_bulletsInClip = _currentAmmo;
	}
	else {
		_bulletsInClip = _clipSize;
	}

	_currentAmmo -= remainder;

	//UE_LOG(LogTemp, Warning, TEXT("Total Ammo Left: %i"), _currentAmmo);
}

bool Bullet::Check(UWorld* world, FCollisionQueryParams* params, FHitResult result)
{
	FVector end = location + direction * rangeIncrement;

	float drop = dropRate * 9.81f;
	end.Z -= drop;

	currentDistance += rangeIncrement;

	//UE_LOG(LogTemp, Warning, TEXT("Start: %s End: %s"), *location.ToString(), *end.ToString());
	//DrawDebugLine(world, location, end, FColor::Green, true, 100.0f);

	bool hit = world->LineTraceSingleByChannel(result, location, end, ECC_Visibility, *params);

	location = end;

	return hit;
}
