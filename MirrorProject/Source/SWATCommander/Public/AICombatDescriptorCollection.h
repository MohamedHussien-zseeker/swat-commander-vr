// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AICombatDescriptorCollection
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FICombatDescriptor;

#include "AICombatDescriptorCollection.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AICombatDescriptorCollection
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FICombatDescriptorCollection {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FAICombatDescriptor> Descriptors;  // +0x0

};

