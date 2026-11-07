// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AIDirectorSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FFloatRange;
struct FInt32Range;

#include "AIDirectorSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AIDirectorSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FIDirectorSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange TimeBetweenAmbushes;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange TimeBetweenKillingOrders;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange TimeBetweenFireThroughDoors;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinTimeBetweenThrowGrenade;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MovementActivationRange;  // +0x34

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TimeBetweenNpcMovement;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range NumSimultaneouslyMovingSuspects;  // +0x3C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range NumSimultaneouslyMovingCivilians;  // +0x4C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range NumSimultaneouslyRunningCivilians;  // +0x5C

};

