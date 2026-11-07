// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CombatWeaponSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FFloatRange;

#include "CombatWeaponSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CombatWeaponSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCombatWeaponSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange AutoFireTime;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange SingleFireTime;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange DelayBetweenAutoFire;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange DelayBetweenSingleFire;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DistanceForSingleFire;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaximumFireDistance;  // +0x4C

};

