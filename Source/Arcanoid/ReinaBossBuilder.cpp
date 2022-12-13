// Fill out your copyright notice in the Description page of Project Settings.


#include "ReinaBossBuilder.h"
#include "Boss.h"

// Sets default values
AReinaBossBuilder::AReinaBossBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AReinaBossBuilder::BeginPlay()
{
	Super::BeginPlay();

	Boss = GetWorld()->SpawnActor<ABoss>(ABoss::StaticClass());

	Boss->AttachToActor(this,FAttachmentTransformRules::KeepRelativeTransform);

	
}

// Called every frame
void AReinaBossBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AReinaBossBuilder::BuildTamano()
{
	if (!Boss) {
		UE_LOG(LogTemp, Error, TEXT("BuildTamano():Boss is NULL, make sure it's initialized.")); return; 
	}
	//Set the Swimming Pool of the Lodging
	Boss->SetTamano("Grande");
}

void AReinaBossBuilder::BuildDuresa()
{
	if (!Boss) {
		UE_LOG(LogTemp, Error, TEXT("BuildDuresa():Boss is NULL, make sure it's initialized.")); return; 
	}
	//Set the Lobby Area of the Lodging
	Boss->SetDuresa("Alta");

}

void AReinaBossBuilder::BuildArmas()
{
	if (!Boss) {
		UE_LOG(LogTemp, Error, TEXT("BuildArmas():Boss is NULL, make sure it's initialized.")); return; 
	}
	//Set the Restaurants of the Lodging
	Boss->SetArmas("5 Armas");
}

void AReinaBossBuilder::BuildMovimiento()
{
	if (!Boss) {
		UE_LOG(LogTemp, Error, TEXT("BuildMovimiento():Boss is NULL, make sure it's initialized.")); return;
	}
	//Set the Restaurants of the Lodging
	Boss->SetMovimiento("Rapido");
}

ABoss* AReinaBossBuilder::GetBoss()
{
	return Boss;
}

