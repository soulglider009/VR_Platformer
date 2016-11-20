// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "Spin.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VR_PLATFORMER_API USpin : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpin();

	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	// Rotation speed means total rotations per second
	UPROPERTY(EditAnywhere, Category = "Setup")
		float RotationsPerSecond = 0.5f;
};
