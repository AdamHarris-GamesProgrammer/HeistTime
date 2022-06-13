// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VaultDoor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVaultOpen);
UCLASS()
class HEISTTIME_API AVaultDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVaultDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vault Settings")
	class UStaticMeshComponent* _pVaultDoor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vault Settings")
	class UStaticMeshComponent* _pVaultHandle = nullptr;

	void OpenVault();

	bool IsBeingDrilled() const { return _isBeingDrilled; }
	void SetIsBeingDrilled(bool val) { _isBeingDrilled = val; }

private:

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnVaultOpen _vaultOpen;

	UPROPERTY(EditAnywhere, Category = "Vault Settings")
	class UBoxComponent* _pBoxCollider = nullptr;

	UPROPERTY(EditAnywhere, Category = "Vault Settings")
	class UStaticMeshComponent* _pVaultWall = nullptr;

	UFUNCTION()
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	bool _isBeingDrilled = false;
};
