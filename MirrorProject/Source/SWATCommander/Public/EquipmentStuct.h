// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.EquipmentStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EAdditionalEquipmentEnum : uint8;
enum class EAmmoTypeEnum : uint8;
enum class EArmorTypeEnum : uint8;
enum class EEquipmentPresetEnum : uint8;
enum class EFaceEquipmentTypeEnum : uint8;
enum class EPrimaryWeaponEnum : uint8;
enum class ESecondaryWeaponEnum : uint8;
enum class ESpecialEquipmentEnum : uint8;

#include "EquipmentStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.EquipmentStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FEquipmentStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EquipmentPresetEnum Preset;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EPrimaryWeaponEnum PrimaryWeapon;  // +0x9

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> PrimaryWeaponAttachments;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAmmoTypeEnum PrimaryAmmo;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 PrimaryMags;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESecondaryWeaponEnum SecondaryWeapon;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> SecondaryWeaponAttachments;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAmmoTypeEnum SecondaryAmmo;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 SecondaryMags;  // +0x44

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESpecialEquipmentEnum SpecialEquipment;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAdditionalEquipmentEnum> AdditionalEquipment;  // +0x50

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EArmorTypeEnum ArmorType;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EFaceEquipmentTypeEnum FaceEquipment;  // +0x61

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TotalWeight;  // +0x64

};

