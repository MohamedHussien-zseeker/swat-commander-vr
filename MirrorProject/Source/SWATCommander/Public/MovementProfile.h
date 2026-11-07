// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MovementProfile
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FFloatRange;
struct FGameplayTagContainer;

#include "MovementProfile.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MovementProfile
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMovementProfile {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange WaitTimeBeforeAskForNewMovementLocation;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer MovementTags;  // +0x18

};

