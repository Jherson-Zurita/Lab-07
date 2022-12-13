// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Equipo.h"
#include "Boss.generated.h"

//class UFloatingActorMovement;
UCLASS()
class ARCANOID_API ABoss : public AActor, public IEquipo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoss();

private:

	FString Tamano;

	FString Duresa;

	FString Armas;

	FString Movimiento;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Boss;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UFloatingActorMovement* FloatingMovement;*/

	//UPROPERTY(EditAnywhere)


	/*UPROPERTY(EditAnywhere)
		AActor* Player;*/
	//int c ;
	

	FVector Location;
	//FTransform tran;
	//FScale scala;
	ABoss* Muro;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void SetTamano(FString MiTamano);
	void SetDuresa(FString MiDuresa);
	void SetArmas(FString MiArmas);
	void SetMovimiento(FString MiMovimiento);
	//Logs all the Lodging floors
	void BossCaracteristicas();
	void Destructor();

};
