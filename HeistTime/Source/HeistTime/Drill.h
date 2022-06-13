// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Drill.generated.h"

UCLASS()
class HEISTTIME_API ADrill : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADrill();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetConnectedVault(class AVaultDoor* pVault);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Drill Settings")
	float _drillDuration = 180.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Drill Settings")
	float _remainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Drill Settings")
	float _chanceToFail = 1.0f;

private:
	class AVaultDoor* _pConnectedVault = nullptr;

	UPROPERTY(EditAnywhere, Category = "Drill Settings")
	class UStaticMeshComponent* _pDrillMesh = nullptr;

};
