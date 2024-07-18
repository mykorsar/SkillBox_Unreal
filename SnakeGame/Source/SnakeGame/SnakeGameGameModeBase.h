// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Food.h"
#include "SnakeGameGameModeBase.generated.h"


class ASnakeBase;
class AFood;
/**
 * 
 */
UCLASS()
class SNAKEGAME_API ASnakeGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaSeconds) override;


	UFUNCTION()
	void FoodGenerator();

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	FVector2D YEdge;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	FVector2D XEdge;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TSubclassOf<AFood> Food;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class ASnakeBase* Player;

private:
	void HandleEscapeKey();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Debugging", meta = (AllowPrivateAccess = true))
	FString DebugString = "";

	
};
