// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.MovementTagCacheActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FActorTickFunction;
struct FRepAttachment;

#include "MovementTagCacheActor.generated.h"

// Class: Class /Script/SWATCommander.MovementTagCacheActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API AMovementTagCacheActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TMap<FActorTickFunction, FRepAttachment> MovementTagActors;  // +0x220  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...


    // ── Methods ──
    UFUNCTION(BlueprintPure)
    UObject* GetRandomMovementTagActor(UObject* inRequestingActor, FName& inMovementTag);
    UFUNCTION(BlueprintPure)
    UObject* GetMovementTagCache(UObject* WorldContextObject);
};

