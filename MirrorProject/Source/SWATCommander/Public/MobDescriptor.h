// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MobDescriptor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ATSCharacterBase;

#include "MobDescriptor.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MobDescriptor
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMobDescriptor {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ATSCharacterBase> MobClass;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsEnabled;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 MobBehaviorMask;  // +0x9

};

