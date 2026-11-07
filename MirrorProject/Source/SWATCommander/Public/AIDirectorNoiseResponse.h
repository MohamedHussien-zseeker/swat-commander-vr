// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AIDirectorNoiseResponse
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class ENoiseResponseType : uint8;

#include "AIDirectorNoiseResponse.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AIDirectorNoiseResponse
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FIDirectorNoiseResponse {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 IntensityLevel;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ENoiseResponseType> AllowedResponses;  // +0x8

};

