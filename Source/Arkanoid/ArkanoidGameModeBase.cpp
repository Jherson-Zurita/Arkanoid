// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArkanoidGameModeBase.h"
#include "Brick.h"

void AArkanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	const FVector Ubicacion(20.0f, 0.0f, 150.0f);
	const FRotator Rotador(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();

	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor creado"));

	

	Ladrillo01 = World->SpawnActor<ABrick>(Ubicacion, Rotador);
	Ladrillo01->SetHidden(false);
	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor creado"));

	




}
