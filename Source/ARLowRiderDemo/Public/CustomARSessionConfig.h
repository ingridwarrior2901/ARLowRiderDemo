// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ARSessionConfig.h"
#include "CustomARSessionConfig.generated.h"

/**
 *
 */
UCLASS()
class ARLOWRIDERDEMO_API UCustomARSessionConfig : public UARSessionConfig
{
    GENERATED_BODY()
    
    UCustomARSessionConfig()
    {
        bTrackSceneObjects = true;
        WorldAlignment = EARWorldAlignment::Gravity;
        SessionType = EARSessionType::World;
        PlaneDetectionMode_DEPRECATED = EARPlaneDetectionMode::HorizontalPlaneDetection;
        bHorizontalPlaneDetection = true;
        bVerticalPlaneDetection = false;
        bEnableAutoFocus = false;
        LightEstimationMode = EARLightEstimationMode::AmbientLightEstimate;
        FrameSyncMode = EARFrameSyncMode::SyncTickWithoutCameraImage;
        bEnableAutomaticCameraOverlay = true;
        bEnableAutomaticCameraTracking = true;
        bResetCameraTracking = true;
        bResetTrackedObjects = true;
        MaxNumSimultaneousImagesTracked = 1;
    }
};
