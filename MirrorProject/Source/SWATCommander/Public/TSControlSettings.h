// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.TSControlSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSControlSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.TSControlSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FTSControlSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AimAssistStrength;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AimAssistRadius;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AimAssistEnabled;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Sensitivity_X;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Sensitivity_Y;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Invert_X;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Invert_Y;  // +0x15

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool VibrationEnabled;  // +0x16

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool InvertHorizontal;  // +0x17

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float HorizontalSensitivity;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool InvertVertical;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VerticalSensitivity;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float HorizontalAimSensitivity;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VerticalAimSensitivity;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LeftStickDeadzone;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RightStickDeadzone;  // +0x30

};

