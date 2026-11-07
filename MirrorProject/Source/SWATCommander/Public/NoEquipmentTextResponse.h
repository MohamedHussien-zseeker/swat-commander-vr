// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.NoEquipmentTextResponse
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "NoEquipmentTextResponse.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.NoEquipmentTextResponse
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FNoEquipmentTextResponse {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TMap<FName, FString>, FString> DeploymentItemResponse;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FName, FString> OtherReasons;  // +0x58

};

