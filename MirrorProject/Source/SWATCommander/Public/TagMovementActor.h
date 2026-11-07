// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TagMovementActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TagMovementActor.generated.h"

// Class: Class /Script/SWATCommander.TagMovementActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ATagMovementActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> MovementTags;  // +0x220  // default: []

};

