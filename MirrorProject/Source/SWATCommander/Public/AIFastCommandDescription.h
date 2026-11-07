// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AIFastCommandDescription
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EAICommandCategory : uint8;
enum class EAICommandSignature : uint8;

#include "AIFastCommandDescription.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AIFastCommandDescription
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FIFastCommandDescription {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICommandSignature Signature;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICommandCategory Category;  // +0x1

};

