// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SpawnSystemSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "SpawnSystemSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SpawnSystemSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSpawnSystemSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DisableAll;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableCivilianSpawn;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableSuspectSpawn;  // +0x2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableOfficersSpawn;  // +0x3

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableOfficersCarSpawn;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableEvidenceSpawn;  // +0x5

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableInteractiveSpawn;  // +0x6

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableBarricadeConfigurator;  // +0x7

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableLightConfigurator;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableDecorativeConfigurator;  // +0x9

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableMovementZonesConfigurator;  // +0xA

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableDoorConfigurator;  // +0xB

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableDependencyConfigurator;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DeleteAllBombs;  // +0xD

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AllowRandomWindowDestruction;  // +0xE

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableGrenadeThrowing;  // +0xF

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DrawDoorDebugSpheres;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AllowPhoneCalls;  // +0x11

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AllowSuspectUnexpectedSurrendering;  // +0x12

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableCheckCarAlerts;  // +0x13

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableCheckFuze;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableCivilianRunFromDanger;  // +0x15

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableSuspectRunFromDanger;  // +0x16

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableSoundEventTrigger;  // +0x17

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AllowCivilianToCheckFuze;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AllowSuspectsFireThroughDoor;  // +0x19

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnablePhonePhotoWhenComplain;  // +0x1A

};

