// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VaultDoor.generated.h"

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

private:

	UPROPERTY(EditAnywhere, Category = "Vault Settings")
	class UStaticMeshComponent* _pVaultWall = nullptr;

};
