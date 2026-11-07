// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AICombatDescriptor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EAICombatFlags : uint8;
enum class EAICompositeTaskType : uint8;
enum class EAIFocusType : uint8;

#include "AICombatDescriptor.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AICombatDescriptor
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FICombatDescriptor {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICompositeTaskType TaskType;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIFocusType FocusType;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICombatFlags CombatFlags;  // +0x2

};

