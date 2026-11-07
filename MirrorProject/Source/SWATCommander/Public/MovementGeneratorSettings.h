// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MovementGeneratorSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FInt32Range;

#include "MovementGeneratorSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MovementGeneratorSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMovementGeneratorSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range MovementDepthForUniqueNPCs;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range MovementDepthForRegularNPCs;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumCharactersPerZone;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumCharactersPerCorridorZone;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumCharactersPerOutsideZone;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CharacterPlacementDelimiter;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool GenerateCiviliansMovement;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool GenerateSuspectsMovement;  // +0x31

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> DoNotGenerateMovementForNPCs;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RoomSequenceProportion;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CorridorSequenceProportion;  // +0x4C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float OutsideSequenceProportion;  // +0x50

};

