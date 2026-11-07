// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MobAction
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAnimationAsset;

struct FVector;

enum class EMobActionType : uint8;

#include "MobAction.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MobAction
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMobAction {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EMobActionType MobActionType;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UAnimationAsset* AnimationToPlay;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector LocationToMoveTo;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString DialogCategoryToPlay;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldPlayDialogAnim;  // +0x30

};

