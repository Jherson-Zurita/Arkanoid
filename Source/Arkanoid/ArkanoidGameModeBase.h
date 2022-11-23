// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArkanoidGameModeBase.generated.h"

/**
 * 
 */

class ABrick;

UCLASS()
class ARKANOID_API AArkanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;


	ABrick* Ladrillo01;

};
