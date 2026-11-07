// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.ArchetypeParameters
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FCharacterCombatResponses;
struct FEquipmentPermissions;
struct FEquipmentStuct;
struct FFloatRange;

enum class EAICombatStyle : uint8;
enum class ECharacterMoodType : uint8;

#include "ArchetypeParameters.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.ArchetypeParameters
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FArchetypeParameters {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange MoraleRange;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange AggressivenessRange;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange IntelligenceRange;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange HealthRange;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanAlertEnemies;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanUseCombatBranches;  // +0x49

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanComplainWhileCombat;  // +0x4A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanGetSpawnedWeapon;  // +0x4B

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ComplainDialogForCombat;  // +0x4C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange TimeForCombatToStart;  // +0x54

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAICombatStyle> AllowedCombatStyles;  // +0x68

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterCombatResponses NotAllowedResponses;  // +0x78

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool RandomizeWeaponInHand;  // +0xD8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldHoldWeaponOnSpawn;  // +0xD9

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ECharacterMoodType DefaultCharacterMood;  // +0xDA

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange LockDoorChance;  // +0xDC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FEquipmentPermissions EquipmentPermissions;  // +0xEC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FEquipmentStuct Equipment;  // +0xF8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TMap<TMap<bool, FString>, FString>, FString> PrimaryWeaponTypeChances;  // +0x160

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TMap<bool, FString>, FString> SecondaryWeaponTypeChances;  // +0x1B0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<bool, FString> PrimaryWeaponAmmoTypes;  // +0x200

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool RandomizeSecondaryWeaponSpawn;  // +0x250

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool RandomizePrimaryWeaponSpawn;  // +0x251

};

