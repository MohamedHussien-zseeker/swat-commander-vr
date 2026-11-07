// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MissionBrifing
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FEntryStuct;
struct FObjectiveStuct;
struct FSuspectStuct;
struct FTimelineEntry;

#include "MissionBrifing.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MissionBrifing
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMissionBrifing {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText MissionText;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FEntryStuct> Entry;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FEntryStuct> Floors;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FObjectiveStuct> Objectives;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSuspectStuct> Suspects;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSuspectStuct> Civilians;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FTimelineEntry> Timeline;  // +0x68

};

