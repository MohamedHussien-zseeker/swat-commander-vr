// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.OfficerFocusInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class ATSCharacterBase;

struct FVector;

#include "OfficerFocusInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.OfficerFocusInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FOfficerFocusInfo {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ATSCharacterBase* Officer;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* POI;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector FocusLocation;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Distance;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Priority;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsThread;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LastFocusedTime;  // +0x28

};

