// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AIDirectorNoiseTableRow
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FIDirectorNoiseResponse;

enum class EGameDifficultyMode : uint8;
enum class EPrimaryWeaponEnum : uint8;
enum class ESecondaryWeaponEnum : uint8;

#include "AIDirectorNoiseTableRow.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AIDirectorNoiseTableRow
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FIDirectorNoiseTableRow {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EGameDifficultyMode DifficultyMode;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TimeToCheckNoise;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CooldownTimeForNoiseResponse;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseThrasholdValue;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ShoutNoiseCoef;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ExplosiveNoiseCoef;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BatteringRamNoiseCoef;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StingerGrenadeNoiseCoef;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FlashGrenadeNoiseCoef;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float GasGrenadeNoiseCoef;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float GenericWeaponNoiseCoef;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float GenericWeaponSuppressedCoef;  // +0x34

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EPrimaryWeaponEnum> PrimaryWeapons;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> PrimaryWeaponsCoefs;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ESecondaryWeaponEnum> SecondaryWeapons;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> SecondaryWeaponsCoefs;  // +0x68

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FAIDirectorNoiseResponse> NoiseResponses;  // +0x78

};

