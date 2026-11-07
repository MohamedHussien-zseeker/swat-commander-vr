// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.MovementZoneProxyActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class ACornerTriggerBox;
class ADoorActor;
class AMovementZoneTrigger;

struct FClearingWaypoint;

#include "MovementZoneProxyActor.generated.h"

// Class: Class /Script/SWATCommander.MovementZoneProxyActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API AMovementZoneProxyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> TargetPointClass;  // +0x220

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TWeakObjectPtr<AMovementZoneTrigger> OwningMovementZone;  // +0x228  // default: {
            "offset": 552,
            "type": "WeakObjectProperty"
       ...

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TWeakObjectPtr<ACornerTriggerBox> OwningCornerTrigger;  // +0x230  // default: {
            "offset": 560,
            "type": "WeakObjectProperty"
       ...

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TWeakObjectPtr<ADoorActor> OwningDoor;  // +0x238  // default: {
            "offset": 568,
            "type": "WeakObjectProperty"
       ...

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    int32 MovementPointIndex = 0;  // +0x240

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    bool IsFrontStackup = true;  // +0x244

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    bool IsForWaypointSetup = false;  // +0x245

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    int32 WaypointIndex = 0;  // +0x248

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FClearingWaypoint WaypointSettings;  // +0x250  // default: "<struct>"

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    AActor* VirtualAimPointProxyRef;  // +0x2D0


    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SetVisualizationColor(int32 Color);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 PreviewWithCharacter();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetVisualizationColor();
};

