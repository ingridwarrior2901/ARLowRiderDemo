// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ARCustomPawn.generated.h"

class UApplicationLifecycleComponent;
class UARTrackableNotifyComponent;

UCLASS()
class ARLOWRIDERDEMO_API AARCustomPawn : public APawn
{
	GENERATED_BODY()

public:
	
	AARCustomPawn();
    
    UPROPERTY(Category = ApplicationLifecycle, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    UApplicationLifecycleComponent* ApplicationLifecycleComponent;
    
    UPROPERTY(Category = TrackableNotify, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    UARTrackableNotifyComponent * ARTrackableNotifyComponent;

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
