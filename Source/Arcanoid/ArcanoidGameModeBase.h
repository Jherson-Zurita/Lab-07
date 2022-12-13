// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Boss.h"
#include "ArcanoidGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API AArcanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AArcanoidGameModeBase();

private:
	//The Builder Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AReinaBossBuilder* ReinaBuilder;
	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ADirector* Engineer;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AReinaBossBuilder* ReinaBuilder1;
	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ADirector* Engineer1;
	UFUNCTION()
		void Destruir();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
