// Copyright Epic Games, Inc. All Rights Reserved.


#include "SnakeGameGameModeBase.h"
#include "SnakeBase.h."
#include "GameFramework/PlayerController.h"
#include "SnakeElementBase.h"
#include "Kismet/GameplayStatics.h"
#include "Food.h"
#include "DrawDebugHelpers.h"


void ASnakeGameGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        PC->bShowMouseCursor = false;
        PC->SetInputMode(FInputModeGameOnly());

        FoodGenerator();

    }
}

void ASnakeGameGameModeBase::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    HandleEscapeKey();
}

void ASnakeGameGameModeBase::HandleEscapeKey()
{
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        if (PC->WasInputKeyJustPressed(EKeys::Escape))
        {
            FGenericPlatformMisc::RequestExit(false);
        }
    }
}
void ASnakeGameGameModeBase::FoodGenerator()
{
    if (IsValid(Food))
    {
        int YOffset = FMath::RandRange(YEdge.X, YEdge.Y);
        int XOffset = FMath::RandRange(XEdge.X, XEdge.Y);
        FVector SpawnLocation;

        SpawnLocation = FVector(XOffset, YOffset, 10.f);

        const FTransform NewTransform = FTransform(SpawnLocation);
        AFood* NewFood = GetWorld()->SpawnActor<AFood>(Food, NewTransform, FActorSpawnParameters());
    }
}