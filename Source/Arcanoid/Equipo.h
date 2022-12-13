// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Equipo.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEquipo : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ARCANOID_API IEquipo
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetTamano(FString Tamano) = 0;
	virtual void SetDuresa(FString Duresa) = 0;
	virtual void SetArmas(FString Armas) = 0;
	virtual void SetMovimiento(FString Movimiento) = 0;

};
