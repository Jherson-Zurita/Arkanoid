// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "brickmov.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ARKANOID_API Ubrickmov : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Ubrickmov();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	AActor* brick;

	UPROPERTY(EditAnywhere)
		FVector posicion;

	UPROPERTY(EditAnywhere)
		int velocidad = 1;
};
