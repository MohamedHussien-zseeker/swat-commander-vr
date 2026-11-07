// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MissionStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UTexture;
class UWorld;

struct FGameplayModeListItem;

enum class ETSGameplayModes : uint8;

#include "MissionStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MissionStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMissionStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText MissionTitle;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UWorld> MissionLevel;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsMissionEnabled;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsMissionTutorial;  // +0x49

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* MissionPreviewTexture;  // +0x50

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSGameplayModes DefaultGameplayMode;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FGameplayModeListItem> SupportedGameplayModes;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TArray<int32>, FString> BrifingInfo;  // +0x70

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int32> RequiredScore;  // +0xC0

};

