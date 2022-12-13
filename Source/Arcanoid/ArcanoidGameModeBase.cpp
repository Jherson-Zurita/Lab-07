// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArcanoidGameModeBase.h"
#include "Paddle.h"
#include "Brick.h"
#include "CreadorCapsulaPoder.h"
#include "CreadorCapsulaDanio.h"
#include "ReinaBossBuilder.h"
#include "Director.h"
#include "Boss.h"

AArcanoidGameModeBase::AArcanoidGameModeBase()
{

}

void AArcanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	

	//Crear la Fabrica de Capsulas
	//ACreadorCapsula* CapsulaPoder = GetWorld()->SpawnActor<ACreadorCapsulaPoder>(ACreadorCapsulaPoder::StaticClass());

	//ACreadorCapsula* CapsulaDanio = GetWorld()->SpawnActor<ACreadorCapsulaDanio>(ACreadorCapsulaDanio::StaticClass());


	//Crea una Capsula de poder y registra su nombre
	//ACapsula* Capsula = CapsulaPoder->GetCapsula("Poder");

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("La Capsula es %s"),*Capsula->ObtenerNombreCapsula()));

	//Crea una Capsula de Danio y registra su nombre
	//Capsula = CapsulaDanio->GetCapsula("Danio");
	
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("La Capsula es %s"),*Capsula->ObtenerNombreCapsula()));




	ReinaBuilder = GetWorld()->SpawnActor<AReinaBossBuilder>(AReinaBossBuilder::StaticClass());
	Engineer = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());
	//Set the Builder for the Engineer and create the buildings
	Engineer->SetBossBuilder(ReinaBuilder);
	Engineer->ConstructorBoss();
	//Get the Engineer's Lodging and Logs the created buildings
	ABoss* Boss = Engineer->GetBoss();
	Boss->BossCaracteristicas();

	ReinaBuilder1 = GetWorld()->SpawnActor<AReinaBossBuilder>(AReinaBossBuilder::StaticClass());
	Engineer1 = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());
	//Set the Builder for the Engineer and create the buildings
	Engineer1->SetBossBuilder(ReinaBuilder1);
	Engineer1->ConstructorBoss();
	//Get the Engineer's Lodging and Logs the created buildings
	ABoss* Boss1 = Engineer1->GetBoss();
	Boss1->BossCaracteristicas();


	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AArcanoidGameModeBase::Destruir, 10);



}

void AArcanoidGameModeBase::Tick(float DeltaTime)
{

	

}

void AArcanoidGameModeBase::Destruir()
{
	if (ReinaBuilder != nullptr) {

		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Destruir muro")));
		ReinaBuilder->Destroy();
	}

}
