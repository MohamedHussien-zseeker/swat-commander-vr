// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.EquipmentWeaponStatsStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "EquipmentWeaponStatsStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.EquipmentWeaponStatsStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FEquipmentWeaponStatsStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StoppingPower;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Damage;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RateOfFire;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AmmoCapacity;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Recoil;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ADSSpeed;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Weight;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Noise;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Penetration;  // +0x20

};

