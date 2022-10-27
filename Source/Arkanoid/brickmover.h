// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "brickmover.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ARKANOID_API Ubrickmover : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Ubrickmover();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


protected:

	AActor* brick;

	UPROPERTY(EditAnywhere)
		FVector posicion;

	UPROPERTY(EditAnywhere)
		int velocidad = 1;
};
