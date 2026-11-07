// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.HeadEquipmentStruct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USkeletalMesh;
class UTexture;

enum class EFaceEquipmentTypeEnum : uint8;

#include "HeadEquipmentStruct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.HeadEquipmentStruct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FHeadEquipmentStruct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EFaceEquipmentTypeEnum Item;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* Icon;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMesh* Mesh;  // +0x18

};

