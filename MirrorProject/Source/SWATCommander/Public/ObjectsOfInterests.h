// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.ObjectsOfInterests
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class ADoorActor;

#include "ObjectsOfInterests.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.ObjectsOfInterests
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FObjectsOfInterests {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ADoorActor>> Doors;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AActor>> Windows;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AActor>> AimPoints;  // +0x20

};

