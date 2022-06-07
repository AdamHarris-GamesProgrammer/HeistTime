// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupBase.h"
#include "Bag_Pickup.generated.h"

UENUM()
enum class BagType {
	Gold,
	Money
};



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectedEvent, class AHeistTimeCharacter*, PickUpCharacter);
UCLASS()
class HEISTTIME_API ABag_Pickup : public APickupBase
{
public:
	GENERATED_BODY()
	ABag_Pickup();

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnCollectedEvent OnCollected;

	virtual void Pickup(class AHeistTimeCharacter* character) override;
	void DropBag(AHeistTimeCharacter* character);

protected:
	virtual void BeginPlay() override;

	
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;



private:
	UPROPERTY(EditAnywhere, Category = "Pickup Base")
	BagType _type;
};
