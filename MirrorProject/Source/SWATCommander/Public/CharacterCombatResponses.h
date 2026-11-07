// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CharacterCombatResponses
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EAICombatEvacuationMode : uint8;
enum class EAIExtremeSituationResponse : uint8;

#include "CharacterCombatResponses.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CharacterCombatResponses
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCharacterCombatResponses {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAIExtremeSituationResponse> AllowedLowHealthResponse;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAIExtremeSituationResponse> AllowedLowMoraleResponse;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAIExtremeSituationResponse> AllowedNoAmmoResponse;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAICombatEvacuationMode> AllowedEvacuationModes;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAIExtremeSituationResponse> AllowedDeathResponses;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAIExtremeSituationResponse> AllowedUnawareOrderToSurrResponses;  // +0x50

};

