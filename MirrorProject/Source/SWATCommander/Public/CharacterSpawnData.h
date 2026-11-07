// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CharacterSpawnData
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UObject;

struct FGameplayTagContainer;

enum class ECharacterSpawnDataType : uint8;

#include "CharacterSpawnData.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CharacterSpawnData
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCharacterSpawnData {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UObject> CharacterClass;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSubclassOf<UObject>> RandomCharacterClasses;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ECharacterSpawnDataType SpawnType;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ChanceToBeSpawned;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer ZoneWhitelist;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> Archetype;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName RoleActionProfile;  // +0x50

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsUnique;  // +0x59

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanPerformPatrolMovement;  // +0x5A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldReserveSpawnLocation;  // +0x5B

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ExcludeFromRunAndHideBehaviors;  // +0x5C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanPhoneCall;  // +0x5D

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanEnableFuze;  // +0x5E

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer AIPatchTags;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer TypeTag;  // +0x80

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AllowInCustomGame;  // +0xA0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsPartOfObjective;  // +0xA1

};

