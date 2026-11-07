// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.GameStatCharacterInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ATSCharacterBase;

enum class EPenaltyTypes : uint8;
enum class EHealsStateEnum : uint8;

#include "GameStatCharacterInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.GameStatCharacterInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FGameStatCharacterInfo {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ATSCharacterBase* CharacterRef;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EHealsStateEnum Status;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float HealsStateChangeTimestamp;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsReported;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsRestrained;  // +0x11

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsFiring;  // +0x12

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EPenaltyTypes LastPenalty;  // +0x13

};

