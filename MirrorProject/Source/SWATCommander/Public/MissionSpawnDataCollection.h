// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MissionSpawnDataCollection
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UBehaviorTree;
class UDataTable;
class UHTN;

struct FCharacterSpawnData;
struct FCharactersBehaviorMap;
struct FDecorativeConfiguratorData;
struct FDoorConfiguratorData;
struct FEvidenceSpawnData;
struct FInt32Range;
struct FInteractiveSpawnData;
struct FLightConfiguratorData;
struct FMobSpawnSettings;
struct FMovementGeneratorSettings;
struct FSpawnDependencies;
struct FSpawnSystemSettings;

enum class ETSGameplayModes : uint8;

#include "MissionSpawnDataCollection.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MissionSpawnDataCollection
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMissionSpawnDataCollection {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 DefaultCharactersPerMission;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumCharactersPerMission;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FSpawnSystemSettings SpawnSystemSettings;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSGameplayModes GameplayMode;  // +0x2B

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> MetadataSublevelsToLoadOnSpawn;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FMovementGeneratorSettings MovementGenerationSettings;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* CombatBehaviorDataTable;  // +0xA0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName CombatBehaviorProfileName;  // +0xA8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* OfficersInfoDataTable;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharactersBehaviorMap BehaviorMap;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* NPCArchetypesDataTable;  // +0x110

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* NPCCommonArchetypesDataTable;  // +0x118

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UDataTable*> AdditionalArchetypes;  // +0x120

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* RoleProfileDataTable;  // +0x130

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UBehaviorTree* CiviliansBT;  // +0x138

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UBehaviorTree* SuspectsBT;  // +0x140

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UHTN* SuspectsHTN;  // +0x148

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UHTN* CiviliansHTN;  // +0x150

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FCharacterSpawnData> UniqueCharactersSpawnData;  // +0x158

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FCharacterSpawnData> RegularCharactersSpawnData;  // +0x168

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FMobSpawnSettings MobsSpawnSettings;  // +0x178

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FInteractiveSpawnData> InteractiveSpawnData;  // +0x198

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumBombsAllowedToBeSpawned;  // +0x1A8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FInt32Range NumWindowsToDestroy;  // +0x1AC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FEvidenceSpawnData> EvidencesSpawnData;  // +0x1C0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FLightConfiguratorData> LightConfiguration;  // +0x1D0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDoorConfiguratorData DoorConfiguration;  // +0x1E0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDecorativeConfiguratorData> DecorativeConfiguration;  // +0x1F8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSpawnDependencies> SpawnDependencies;  // +0x208

};

