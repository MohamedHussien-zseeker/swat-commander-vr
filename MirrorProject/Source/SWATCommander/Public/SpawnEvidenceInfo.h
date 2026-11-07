// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SpawnEvidenceInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FRotator;
struct FVector;

enum class EEvidenceSpawnSize : uint8;

#include "SpawnEvidenceInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SpawnEvidenceInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSpawnEvidenceInfo {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Location;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FRotator Rotation;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EvidenceSpawnSize Size;  // +0x18

};

