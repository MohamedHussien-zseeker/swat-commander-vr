// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.ADetourPathActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;

struct FDetourPath;

#include "ADetourPathActor.generated.h"

// Class: Class /Script/SWATCommander.ADetourPathActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ADetourPathActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDetourPath> DetourPaths;  // +0x220  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<AMovementZoneTrigger*, AMovementZoneTrigger*> NPCStandingLocations;  // +0x230  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AMovementZoneTrigger* DebugStartZone;  // +0x280

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AMovementZoneTrigger* DebugEndZone;  // +0x288

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AMovementZoneTrigger*> DebugZones;  // +0x290  // default: []


    // ── Methods ──
    UFUNCTION(BlueprintPure)
    UObject* GetDetourPathesInstance(UObject* WorldContextObject);
};

