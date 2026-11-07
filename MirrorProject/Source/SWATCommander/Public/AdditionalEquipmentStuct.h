// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AdditionalEquipmentStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USkeletalMesh;
class UTexture;

enum class EAdditionalEquipmentEnum : uint8;

#include "AdditionalEquipmentStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AdditionalEquipmentStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FAdditionalEquipmentStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAdditionalEquipmentEnum Item;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* Icon;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMesh* Mesh;  // +0x18

};

