// Fill out your copyright notice in the Description page of Project Settings.


#include "mov.h"

// Sets default values for this component's properties
Umov::Umov()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Umov::BeginPlay()
{
	Super::BeginPlay();

	// ...
	

	cube = GetOwner();

}


// Called every frame
void Umov::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	velocidad += velocidad * DeltaTime;

	posicion.X = velocidad + cube->GetActorLocation().X;
	posicion.Y = cube->GetActorLocation().Y;
	posicion.Z = cube->GetActorLocation().Z;


	cube->SetActorLocation(posicion);
}

