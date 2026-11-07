// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.ComplexDoorBolt
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UBoxComponent;
class UStaticMeshComponent;

enum class EDoorBoltName : uint8;
enum class EDoorBoltState : uint8;

#include "ComplexDoorBolt.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.ComplexDoorBolt
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FComplexDoorBolt {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDoorBoltName BoltName;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDoorBoltState BoltState;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMeshComponent* BoltMeshComponent;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UBoxComponent* BoltCollisionComponent;  // +0x10

};

