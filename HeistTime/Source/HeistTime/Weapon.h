// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

struct Bullet {
	FVector location;
	FVector direction;
	float maxRange;
	float currentDistance = 0.0f;
	float rangeIncrement;
	float dropRate = 15.0f;

	bool Check(UWorld* world, FCollisionQueryParams* params, FHitResult result);
};


UCLASS()
class HEISTTIME_API AWeapon : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AWeapon();

	void PullTrigger();

	void Reload();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	int GetCurrentAmmo() const {
		return _currentAmmo;
	}

	UFUNCTION(BlueprintCallable)
	int GetBulletsInClip() const {
		return _bulletsInClip;
	}
private:
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* pRootComponent;

	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* pMeshComponent;

	UPROPERTY(EditAnywhere, Category = "Weapon Effects")
	class UParticleSystem* pMuzzleFlash;

	UPROPERTY(EditAnywhere, Category = "Weapon Effects")
	class UParticleSystem* pImpactEffect;

	UPROPERTY(EditAnywhere, Category = "Weapon Effects")
	class USoundBase* pSfx;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon Stats")
	float _range = 10000.0f;

	UPROPERTY(EditAnywhere, Category = "Weapon Stats")
	float _damage = 30.0f;

	UPROPERTY(EditAnywhere, Category = "Weapon Stats")
	float _bulletDropRate = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Weapon Stats")
	int _bulletIterations = 10;

	UPROPERTY(EditAnywhere, Category = "Weapon Stats")
	int _totalAmmo = 180;

	UPROPERTY(EditAnywhere, Category = "Weapon Stats")
	int _clipSize = 6;

	int _currentAmmo;
	int _bulletsInClip;

	float _rangeIncrement;

	FCollisionQueryParams params;

	TArray<Bullet*> _pBullets;
};
