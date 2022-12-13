// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Constructor.h"
#include "Director.generated.h"

UCLASS()
class ARCANOID_API ADirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector();

private:

	IConstructor* Constructor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstructorBoss();
	//Set the Builder Actor
	void SetBossBuilder(AActor* Builder);
	//Get the Lodging of the Builder
	class ABoss* GetBoss();


};
