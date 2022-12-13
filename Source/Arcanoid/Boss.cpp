// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/TransformCalculus3D.h"

// Sets default values
ABoss::ABoss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//StaticMesh'/Game/Assets/Meshes/SM_Paddle.SM_Paddle'
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMessAsset(TEXT("/Game/Assets/Meshes/SM_Paddle.SM_Paddle"));

	SM_Boss = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Capsula"));
	SM_Boss->SetStaticMesh(CapsulaMessAsset.Object);
	RootComponent = SM_Boss;
	SM_Boss->SetSimulatePhysics(true);
	SM_Boss->SetEnableGravity(false);
	SM_Boss->SetConstraintMode(EDOFMode::XZPlane);
	SM_Boss->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Boss->SetCollisionProfileName(TEXT("PhysicsActor"));

}

// Called when the game starts or when spawned
void ABoss::BeginPlay()
{
	Super::BeginPlay();

	Location = SM_Boss->GetRelativeTransform().GetLocation();
	
}

// Called every frame
void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("daaaaaa")));
	//DeltaTime = 0;
}

void ABoss::SetTamano(FString MiTamano)
{

	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

	FVector MeshLocation = Location;

	//MeshLocation.X += FMath::FRandRange(-140, 140);
	MeshLocation.Z += FMath::FRandRange(50, 240);

	SM_Boss->SetRelativeLocation(MeshLocation);


	Tamano = MiTamano;
}

void ABoss::SetDuresa(FString MiDuresa)
{
	Duresa = MiDuresa;
}

void ABoss::SetArmas(FString MiArmas)
{
	Armas = MiArmas;
}

void ABoss::SetMovimiento(FString MiMovimiento)
{
	//FloatingMovement = GetActorLocation();

	Movimiento = MiMovimiento;
}

void ABoss::BossCaracteristicas()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s"),*Tamano));
	/*GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s"),*Duresa));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s"),*Armas));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s"),*Movimiento))*/;
}

