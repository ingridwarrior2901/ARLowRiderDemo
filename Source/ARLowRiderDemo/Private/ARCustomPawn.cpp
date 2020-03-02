// Fill out your copyright notice in the Description page of Project Settings.


#include "ARCustomPawn.h"
#include "Components/ApplicationLifecycleComponent.h"
#include "ARTrackableNotifyComponent.h"

AARCustomPawn::AARCustomPawn()
{
	PrimaryActorTick.bCanEverTick = true;
    ApplicationLifecycleComponent = CreateDefaultSubobject<UApplicationLifecycleComponent>(TEXT("ApplicationLifecycleComponent"));
    ARTrackableNotifyComponent = CreateDefaultSubobject<UARTrackableNotifyComponent>(TEXT("ARTrackableNotifyComponent"));
}

void AARCustomPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AARCustomPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AARCustomPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
