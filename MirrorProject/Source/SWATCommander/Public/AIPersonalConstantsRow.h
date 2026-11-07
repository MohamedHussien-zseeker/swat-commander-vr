// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AIPersonalConstantsRow
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "AIPersonalConstantsRow.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AIPersonalConstantsRow
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FIPersonalConstantsRow {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseOrderToSurrender;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseGunshotMoraleModification;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NearbyCivilianKilledMoraleModification;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NearbyEnemyKilledMoraleModification;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NearbydOfficerKilledMoraleModification;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float KillOfficerMoraleModification;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseC2MoraleModification;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseCiviIncapacMoraleModification;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseSuspIncapacMoraleModification;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseOfficerIncapacMoraleModification;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseSurrenderMoraleModification;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageOrdinaryMoraleModification;  // +0x34

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageOrdinaryLimbsMoraleModification;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageSlugMoraleModification;  // +0x3C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageSlugLimbsMoraleModification;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageRubberSlugMoraleModification;  // +0x44

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageRubberSlugLimbsMoraleModification;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageTaserMoraleModification;  // +0x4C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageC2MoraleExplosionModification;  // +0x50

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageStingMoraleModification;  // +0x54

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageSmokeMoraleModification;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageFlashMoraleModification;  // +0x5C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageMeleeMoraleModification;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamagePapperSprayMoraleModification;  // +0x64

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float UnobservedComplianceMoraleModification;  // +0x68

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseOrderToSurrender;  // +0x6C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseGunshot;  // +0x70

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseCivilianDeath;  // +0x74

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseSuspectDeath;  // +0x78

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseOfficerDeath;  // +0x7C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseCivilianIncapac;  // +0x80

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseSuspectIncapac;  // +0x84

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseOfficerIncapac;  // +0x88

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxKillOfficer;  // +0x8C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseExplosion;  // +0x90

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageOrdinary;  // +0x94

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageOrdinaryLimbs;  // +0x98

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageSlug;  // +0x9C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageSlugLimbs;  // +0xA0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageRubberSlug;  // +0xA4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageRubberSlugLimbs;  // +0xA8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageTaser;  // +0xAC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageC2;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageSting;  // +0xB4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageSmoke;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageFlash;  // +0xBC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamageMelee;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxDamagePapperSpray;  // +0xC4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNoiseGoingToSurrender;  // +0xC8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinInvestigateTime;  // +0xCC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxInvestigateTime;  // +0xD0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinInvestigateDelayTime;  // +0xD4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxInvestigateDelayTime;  // +0xD8

};

