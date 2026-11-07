// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.FindCoverEnvQueryGenerator
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ACoverPointActor;
class UEnvQueryContext;

struct FIDataProviderBoolValue;
struct FIDataProviderFloatValue;

#include "FindCoverEnvQueryGenerator.generated.h"

// Class: Class /Script/SWATCommander.FindCoverEnvQueryGenerator
UCLASS(EditInlineNew, BlueprintType)
class SWATCOMMANDER_API UFindCoverEnvQueryGenerator : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ACoverPointActor> CoverPointClass;  // +0x50  // default: {
            "address": "0x2999F4591C0",
            "className": "CoverPoin...

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue ObtainFromCurrentCharacterZone;  // +0x58  // default: "<struct>"

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue GenerateOnlyActorsInRadius;  // +0x90  // default: "<struct>"

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SearchRadius;  // +0xC8  // default: "<struct>"

    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> SearchCenter;  // +0x100  // default: {
            "address": "0x2999F5C4540",
            "className": "EnvQueryC...

};

