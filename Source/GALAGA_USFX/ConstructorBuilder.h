// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ConstructorBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UConstructorBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API IConstructorBuilder
{
	GENERATED_BODY()


	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetBlock1(class Ablock1* bloque1 ) = 0;
	virtual void SetBlock2(class Ablock2* bloque2) = 0;
	virtual void SetBlock3(class Ablock3* bloque3) = 0;
};
