// Fill out your copyright notice in the Description page of Project Settings.


#include "Director.h"

// Sets default values
ADirector::ADirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector::SetBossBuilder(AActor* Builder)
{
	Constructor = Cast<IConstructor>(Builder);
	if (!Constructor) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetBossBuilder(): The Actor is not a constructor !Are you sure that the Actor implements that interface ? "));
	}

}

ABoss* ADirector::GetBoss()
{

	if (Constructor)
	{
		//Returns the Lodging of the Builder
		return Constructor->GetBoss();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetBoss(): Return nullptr"));

	return nullptr;
}

void ADirector::ConstructorBoss()
{
	if (!Constructor) 
	{
		UE_LOG(LogTemp, Error,TEXT("ConstructBoss(): Constructor is NULL, make sure it'sinitialized.")); return; 
	}
	//Creates the buildings
	Constructor->BuildTamano();
	Constructor->BuildDuresa();
	Constructor->BuildArmas();
	Constructor->BuildMovimiento();
}
