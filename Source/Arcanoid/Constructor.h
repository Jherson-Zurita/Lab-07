// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Constructor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UConstructor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ARCANOID_API IConstructor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildTamano() = 0;
	virtual void BuildDuresa() = 0;
	virtual void BuildArmas() = 0;
	virtual void BuildMovimiento() = 0;
	virtual class ABoss* GetBoss() = 0;
};
