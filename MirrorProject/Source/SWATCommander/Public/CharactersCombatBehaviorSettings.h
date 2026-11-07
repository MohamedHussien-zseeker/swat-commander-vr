// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CharactersCombatBehaviorSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EAIFakeSurrenderTypes : uint8;

#include "CharactersCombatBehaviorSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CharactersCombatBehaviorSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCharactersCombatBehaviorSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinAgressivenessForApproacher;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinAgressivenessForFlanker;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxAgressivenessForFlanker;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxAgressivenessForRunner;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinIntelligenceForAmbusher;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinIntelligenceForPretender;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxIntelligenceForPretender;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<bool, FString> CombatResponses;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableDebug;  // +0x78

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIFakeSurrenderTypes FakeSurrenderTypeForDebug;  // +0x79

};

