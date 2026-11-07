// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.BuildSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "BuildSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.BuildSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FBuildSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SpawnOfficers;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SpawnCivilians;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SpawnSuspects;  // +0x2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableInfiniteAmmo;  // +0x3

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableGodMode;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableOfficersKillPlayerOnDamage;  // +0x5

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ItsAlwaysSunny;  // +0x6

};

