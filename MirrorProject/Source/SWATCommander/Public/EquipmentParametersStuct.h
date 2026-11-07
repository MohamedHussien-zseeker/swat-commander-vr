// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.EquipmentParametersStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AEquipmentBase;
class UTexture2D;

enum class EEquipmentTypeEnum : uint8;

#include "EquipmentParametersStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.EquipmentParametersStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FEquipmentParametersStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName EquipmentName;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AEquipmentBase> EquipmentClass;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EquipmentTypeEnum EquipmentType;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* EquipmentImage;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Weight;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsLocked;  // +0x2C

};

