// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.WeaponDescription
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UTexture;

struct FEquipmentOperatorStatsStuct;
struct FEquipmentWeaponStatsStuct;

enum class EAdditionalEquipmentEnum : uint8;
enum class EAmmoTypeEnum : uint8;
enum class EArmorTypeEnum : uint8;
enum class EEquipmentTypeEnum : uint8;
enum class EFaceEquipmentTypeEnum : uint8;
enum class EPrimaryWeaponEnum : uint8;
enum class ESecondaryWeaponEnum : uint8;
enum class ESpecialEquipmentEnum : uint8;

#include "WeaponDescription.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.WeaponDescription
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FWeaponDescription {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EquipmentTypeEnum EquipmentType;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 EquipmentOrder;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EPrimaryWeaponEnum PrimaryType;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESecondaryWeaponEnum SecondaryType;  // +0x11

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESpecialEquipmentEnum SpecialEquipmentType;  // +0x12

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAdditionalEquipmentEnum AdditionalEquipmentType;  // +0x13

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAmmoTypeEnum AmmoType;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EArmorTypeEnum ArmorType;  // +0x15

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EFaceEquipmentTypeEnum FaceEquipmentType;  // +0x16

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Title;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText ShortTitle;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Description;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* Image;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FEquipmentWeaponStatsStuct WeaponStats;  // +0x68

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FEquipmentOperatorStatsStuct OperatorStats;  // +0x8C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* SAImage;  // +0xA0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SmallAmmo;  // +0xA8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAmmoTypeEnum> Ammo;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsLocked;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsHidden;  // +0xC1

};

