// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ArcVehiclePawn.generated.h"

class UArcVehicleSeatConfig;

//Base Pawn class for all vehicle objects.  This diverges between Vehicles and the Seat Pawns
UCLASS(Abstract)
class ARCVEHICLES_API AArcVehiclePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AArcVehiclePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UArcVehicleSeatConfig* GetSeatConfig() PURE_VIRTUAL(AArcVehiclePawn::GetSeatConfig(), return nullptr;);


};
