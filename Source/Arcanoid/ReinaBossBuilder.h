// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Constructor.h"
#include "ReinaBossBuilder.generated.h"

UCLASS()
class ARCANOID_API AReinaBossBuilder : public AActor, public IConstructor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AReinaBossBuilder();

	UPROPERTY(VisibleAnywhere, Category = "Reina Boss")
		class ABoss* Boss;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BuildTamano() override;
	//Create the 
	virtual void BuildDuresa() override;
	//Create the 
	virtual void BuildArmas() override;
	//Create the 
	virtual void BuildMovimiento() override;
	//returns the 
	virtual class ABoss* GetBoss() override;

};
