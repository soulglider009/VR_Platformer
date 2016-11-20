// Fill out your copyright notice in the Description page of Project Settings.

#include "VR_Platformer.h"
#include "Spin.h"


// Sets default values for this component's properties
USpin::USpin()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called every frame
void USpin::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	FRotator DeltaRotator = FRotator(0.0, RotationsPerSecond, 0.0);
	GetOwner()->AddActorWorldRotation(DeltaRotator);
}

