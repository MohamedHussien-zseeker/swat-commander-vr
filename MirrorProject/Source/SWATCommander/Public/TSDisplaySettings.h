// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.TSDisplaySettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSDisplaySettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.TSDisplaySettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FTSDisplaySettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Gamma;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FOV;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool MotionBlur;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AmbientOcclusion;  // +0x9

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool LensFlares;  // +0xA

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 AAMode;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AMDFSREnabled;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 AMDFSRValue;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NvidiaReflexValue;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 VisionDeficiencyTypeID;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VisionDeficiencyStrength;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UIMovement;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 SubtitlesSize;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 SubtitlesBackgroundStyle;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SubtitlesBackgroundOpacity;  // +0x30

};

