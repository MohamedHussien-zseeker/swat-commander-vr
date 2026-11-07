// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SpecialEquipmentStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USkeletalMesh;
class UTexture;

enum class ESpecialEquipmentEnum : uint8;

#include "SpecialEquipmentStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SpecialEquipmentStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSpecialEquipmentStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESpecialEquipmentEnum Item;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* Icon;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMesh* Mesh;  // +0x18

};

