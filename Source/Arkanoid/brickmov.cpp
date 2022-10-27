// Fill out your copyright notice in the Description page of Project Settings.


#include "brickmov.h"

// Sets default values for this component's properties
Ubrickmov::Ubrickmov()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Ubrickmov::BeginPlay()
{
	Super::BeginPlay();


	brick = GetOwner();
	// ...
	
}


// Called every frame
void Ubrickmov::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	velocidad += velocidad * DeltaTime;

	posicion.X = velocidad + brick->GetActorLocation().X;
	posicion.Y = brick->GetActorLocation().Y;
	posicion.Z = brick->GetActorLocation().Z;


	brick->SetActorLocation(posicion);


	// ...
}

