// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Paddle.h"

// Sets default values
ACapsula::ACapsula()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it. /Game/Assets/Meshes/SM_Capsula.SM_Capsula
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMessAsset(TEXT("/Game/Assets/Meshes/SM_Ball.SM_Ball"));

	SM_Capsula = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Capsula"));
	SM_Capsula->SetStaticMesh(CapsulaMessAsset.Object);
	RootComponent = SM_Capsula;
	SM_Capsula->SetSimulatePhysics(true);
	SM_Capsula->SetEnableGravity(true);
	SM_Capsula->SetConstraintMode(EDOFMode::XZPlane);
	SM_Capsula->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Capsula->SetCollisionProfileName(TEXT("PhysicsActor"));
	TiempoDuracion = 10.0f;

	
}

// Called when the game starts or when spawned
void ACapsula::BeginPlay()
{
	Super::BeginPlay();

	
}


// Called every frame
void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapsula::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Generando las capsulas %s"), *ObtenerNombreCapsula()));

}

void ACapsula::Cargar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, FString::Printf(TEXT("Se estan cargando las capsulas")));
}

void ACapsula::Desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Purple, FString::Printf(TEXT("Se estan desplegando las capsulas")));

}

void ACapsula::Destruir()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Las capsulas se estan destruyendo")));
	//this->Destroy();
}

FString ACapsula::ObtenerNombreCapsula()
{
	return NombreCapsula;
}

