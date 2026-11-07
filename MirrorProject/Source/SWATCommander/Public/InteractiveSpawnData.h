// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.InteractiveSpawnData
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UObject;

#include "InteractiveSpawnData.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.InteractiveSpawnData
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FInteractiveSpawnData {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UObject> InteractiveClass;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName InteractiveActorIdentifier;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseCustomIdentifier;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName InteractiveGroupName;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumItemsToSpawn;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled;  // +0x20

};

