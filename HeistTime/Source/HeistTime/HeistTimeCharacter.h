// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PickupBase.h"
#include "Bag_Pickup.h"
#include "HeistTimeCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;

// Declaration of the delegate that will be called when the Primary Action is triggered
// It is declared as dynamic so it can be accessed also in Blueprints
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUseItem);

UCLASS(config=Game)
class AHeistTimeCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

public:
	AHeistTimeCharacter();

	UFUNCTION(BlueprintCallable)
	AWeapon* GetCurrentWeapon() const {
		return _pCurrentWeapon;
	}

protected:
	virtual void BeginPlay();

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float TurnRateGamepad;

	/** Delegate to whom anyone can subscribe to receive this event */
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnUseItem OnUseItem;


	class AVaultDoor* GetVaultDoor() const;

	void SetVaultDoor(class AVaultDoor* vaultDoor);

	void SetNearbyPickup(APickupBase* pickup) {
		UE_LOG(LogTemp, Warning, TEXT("Item nearby or not nearby"));
		_pNearbyPickup = pickup;
	}

	UFUNCTION(BlueprintCallable)
	APickupBase* GetNearbyPickup() const {
		return _pNearbyPickup;
	}

	bool CanPickupBag() {
		return !_carryingBag;
	}

	void SetCurrentBag(ABag_Pickup* pickup) {
		_pCurrentBag = pickup;

		if (pickup != nullptr) {
			_carryingBag = true;
		}
		else {
			_carryingBag = false;
		}
	}

	UFUNCTION(BlueprintCallable)
	class AExitPoint* GetExitPoint() const {
		return _pExitPoint;
	}

	void SetExitPoint(class AExitPoint* ep) {
		_pExitPoint = ep;
	}

	USkeletalMeshComponent* GetFirstPersonMesh() const {
		return Mesh1P;
	}

protected:
	
	/** Fires a projectile. */
	void OnPrimaryAction();

	//Reloads current Gun
	void OnReloadAction();

	
	void OnInteractionAction();

	void OnGAction();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

	void CrouchHandle();

	void MouseWheelHandle(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

private:
	
	UPROPERTY(EditAnywhere, Category = "Weapons")
	TSubclassOf<class AWeapon> _primaryWeaponClass;

	UPROPERTY(EditAnywhere, Category = "Weapons")
	TSubclassOf<class AWeapon> _secondaryWeaponClass;
	
	UPROPERTY()
	class AWeapon* _pCurrentWeapon = nullptr;

	UPROPERTY(EditAnywhere, Category = "Gameplay Settings")
	TSubclassOf<class ADrill> _drillClass;

	TArray<class AWeapon*> _pWeapons;

	class APickupBase* _pNearbyPickup = nullptr;
	class ABag_Pickup* _pCurrentBag = nullptr;
	class AExitPoint* _pExitPoint = nullptr;

	class AVaultDoor* _pNearbyVaultDoor = nullptr;

	int _currentWeaponIndex = 0;
	bool _carryingBag = false;
};

