// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.GameRankInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FInt32Range;

#include "GameRankInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.GameRankInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FGameRankInfo {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range SuspectsArrested;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range SuspectsIncapacitated;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range SuspectsNeutralized;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range DownedOfficers;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 PlayerInjured;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range OfficersUninjured;  // +0x44

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range ReportStatusToTOC;  // +0x54

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range AllEvidenceSecured;  // +0x64

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range AllCiviliansUnharmed;  // +0x74

};

