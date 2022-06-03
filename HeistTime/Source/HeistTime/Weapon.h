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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* pRootComponent;

	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* pMeshComponent;

	UPROPERTY(EditAnywhere)
	class UParticleSystem* pMuzzleFlash;

	UPROPERTY(EditAnywhere)
	class UParticleSystem* pImpactEffect;

	UPROPERTY(EditAnywhere)
	class USoundBase* pSfx;

	UPROPERTY(EditDefaultsOnly)
	float _range = 10000.0f;

	UPROPERTY(EditAnywhere)
	float _damage = 30.0f;

	FCollisionQueryParams params;

	TArray<Bullet*> _pBullets;
};
