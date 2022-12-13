// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
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
	SM_Capsula->SetEnableGravity(false);
	SM_Capsula->SetConstraintMode(EDOFMode::XZPlane);
	SM_Capsula->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Capsula->SetCollisionProfileName(TEXT("PhysicsActor"));
	TiempoDuracion = 10.0f;


	/*BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxCollision->SetBoxExtent(FVector(5.5f, 5.5f, 5.5f));

	RootComponent = BoxCollision;*/

	
}

// Called when the game starts or when spawned
void ACapsula::BeginPlay()
{
	Super::BeginPlay();


	//auto MyPawn = Cast<ACapsula>(GetActor());
	//MyPawn->
	
}


// Called every frame
void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Mov = GetActorLocation();

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
	SM_Capsula->AddImpulse(FVector(0.0f, 0.0f, -100.0f), FName(), true);
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


