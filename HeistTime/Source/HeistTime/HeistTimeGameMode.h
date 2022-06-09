// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HeistTimeGameMode.generated.h"

UCLASS(minimalapi)
class AHeistTimeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AHeistTimeGameMode();

	UFUNCTION(BlueprintCallable)
	int GetCurrentMoney() const { return _currentMoney; }

	UFUNCTION(BlueprintCallable)
	int GetMoneyTarget() const { return _moneyTarget; }

	UFUNCTION(BlueprintCallable)
	bool CanEscape() const { return _canEscape; }

	void AddCurrentMoney(int amount) {
		_currentMoney += amount;

		if (_currentMoney > _moneyTarget) {
			//TODO: Objective handling 
			_canEscape = true;
		}
	}


	void GameOver(bool won) {
		if (won) {
			UE_LOG(LogTemp, Warning, TEXT("Game Won"));
			//TODO: Trigger Logic for win screen
		}
		else {
			//TODO: Trigger Logic for loss screen 
		}
	}

	


private:

	int _currentMoney = 0;

	UPROPERTY(EditAnywhere, Category = "Level Settings")
	int _moneyTarget = 350000;


	bool _canEscape = false;
};



