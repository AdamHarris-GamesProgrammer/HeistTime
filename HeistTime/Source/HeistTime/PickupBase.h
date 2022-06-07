// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickUpEvent, class AHeistTimeCharacter*, PickUpCharacter);

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class HEISTTIME_API APickupBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupBase();

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnPickUpEvent OnPickUp;

	void Pickup(class AHeistTimeCharacter* character);

	UFUNCTION(BlueprintCallable)
	int GetAmountToPickup() const { return _amountToPickup; }

	UFUNCTION(BlueprintCallable)
	FString GetPickupName() const {
		return _pickupName;
	}

	UFUNCTION(BlueprintCallable)
	FString GetPickupText() {
		return FString::FromInt(_amountToPickup) + "x " + _pickupName;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
	UPROPERTY(EditAnywhere, Category = "Pickup Base")
	class UStaticMeshComponent* _pMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "Pickup Base")
	class USphereComponent* _pSphere = nullptr;

	UPROPERTY(EditAnywhere, Category = "Pickup Base")
	int _amountToPickup = 1;

	UPROPERTY(EditAnywhere, Category = "Pickup Base")
	FString _pickupName = "Pickup";



};
