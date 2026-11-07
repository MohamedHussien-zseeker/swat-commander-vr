// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.EvidenceSpawnData
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UObject;

struct FCharacterSpawnDataEv;
struct FGameplayTagContainer;

enum class EEvidenceSpawnSize : uint8;

#include "EvidenceSpawnData.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.EvidenceSpawnData
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FEvidenceSpawnData {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UObject> InteractiveClass;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UObject> SpawnIfNotEvidenceClass;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Identifier;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer SpawnZones;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EvidenceSpawnSize Size;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumItemsToSpawn;  // +0x3C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool RandomizeSpawn;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSpawnDataEv CharacterSpawnInfo;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SpawnCharacterIfNotEvidence;  // +0x90

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled;  // +0x91

};

