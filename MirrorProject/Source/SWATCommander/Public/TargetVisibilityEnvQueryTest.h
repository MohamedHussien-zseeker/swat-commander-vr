// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TargetVisibilityEnvQueryTest
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UEnvQueryContext;

struct FIDataProviderBoolValue;
struct FIDataProviderFloatValue;
struct FEnvTraceData;

#include "TargetVisibilityEnvQueryTest.generated.h"

// Class: Class /Script/SWATCommander.TargetVisibilityEnvQueryTest
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTargetVisibilityEnvQueryTest : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData TraceData;  // +0x1F8  // default: "<struct>"

    UPROPERTY(EditDefaultsOnly, AdvancedDisplay)
    FAIDataProviderFloatValue ItemHeightOffset;  // +0x228  // default: "<struct>"

    UPROPERTY(EditDefaultsOnly, AdvancedDisplay)
    FAIDataProviderFloatValue ContextHeightOffset;  // +0x260  // default: "<struct>"

    UPROPERTY(EditDefaultsOnly, AdvancedDisplay)
    FAIDataProviderFloatValue DistanceLimit;  // +0x298  // default: "<struct>"

    UPROPERTY(EditDefaultsOnly, AdvancedDisplay)
    FAIDataProviderBoolValue DrawTraces;  // +0x2D0  // default: "<struct>"

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;  // +0x308  // default: {
            "address": "0x2999F5C4540",
            "className": "EnvQueryC...

};

