// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SpawnSystemLevelRefs
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class ACoverPointActor;
class ADoorActor;
class AInteractiveActor;
class AMovementZoneTrigger;
class UObject;

struct FBombConfigurationRefSource;
struct FDecorativeConfigurationRefSource;
struct FInteractiveConfigurationRefSource;
struct FLightConfigurationRefSource;
struct FLightZoneConfiguration;
struct FMovementZonesToggleSettings;

#include "SpawnSystemLevelRefs.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SpawnSystemLevelRefs
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSpawnSystemLevelRefs {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> AutoplayMovementZonesRefs;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ADoorActor>> AutoplayDoorsRefs;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ADoorActor>> SurrenderDoorsRefs;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ADoorActor*> SurrenderDoorsRefs_Hard;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> MovementZonesRefs;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AMovementZoneTrigger*> MovementZonesRefs_Hard;  // +0x50

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FMovementZonesToggleSettings> MovementZonesToggleSettings;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TSubclassOf<UObject>, TSubclassOf<UObject>> MovementZonesGameModeSettings;  // +0x70

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UObject> OfficersClass;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TSubclassOf<UObject>, TSubclassOf<UObject>> OfficersSpawnLocations;  // +0xC8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UObject> OfficersCarClass;  // +0x118

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float OfficersCarSpawnOffsetZ;  // +0x120

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TArray<TSoftObjectPtr<AInteractiveActor>>, TArray<TSoftObjectPtr<AInteractiveActor>>> OfficersCarSpawnLocations;  // +0x128

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AInteractiveActor>> StaticEvidenceRefs;  // +0x178

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AActor>> SoundActionEventsRefs;  // +0x188

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumPercentageOfEnabledSoundEvents;  // +0x198

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 RandomDiviationPercentageOfEnabledSoundEvents;  // +0x19C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FBombConfigurationRefSource> BombsRefs;  // +0x1A0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AActor>> WindowsAllowedToBeDestroyed;  // +0x1B0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FLightConfigurationRefSource, FLightConfigurationRefSource> Barricades;  // +0x1C0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLightConfigurationRefSource LightSourceGroupRefs;  // +0x210

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLightZoneConfiguration LightZoneConfigurationRefs;  // +0x260

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ADoorActor>> AllDoors;  // +0x280

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ADoorActor*> AllDoors_Hard;  // +0x290

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ADoorActor>> DoorsNeedsToBeLocked;  // +0x2A0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ADoorActor>> DoorsNeedsToBeUnlocked;  // +0x2B0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ADoorActor>> DoorsNeedsToBeNotOpened;  // +0x2C0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDecorativeConfigurationRefSource DecorativeSourceGroupRefs;  // +0x2D0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInteractiveConfigurationRefSource InteractiveSourceRefs;  // +0x320

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ACoverPointActor>> LocationForCiviliansToHide;  // +0x3A0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ACoverPointActor*> LocationForCiviliansToHide_Hard;  // +0x3B0

};

