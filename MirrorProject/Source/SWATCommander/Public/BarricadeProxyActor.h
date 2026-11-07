// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.BarricadeProxyActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class ABarricadeConfigurationActor;
class ADoorActor;
class AMovementZoneTrigger;

#include "BarricadeProxyActor.generated.h"

// Class: Class /Script/SWATCommander.BarricadeProxyActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ABarricadeProxyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<ABarricadeConfigurationActor> OwningBarricadeConfigActorRef;  // +0x220  // default: {
            "offset": 544,
            "type": "WeakObjectProperty"
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<AMovementZoneTrigger> MovementZoneToBarricade;  // +0x228  // default: {
            "offset": 552,
            "type": "SoftObjectProperty"
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ChanceToSpawnBarricade = 0.5f;  // +0x250

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled = true;  // +0x254

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<ADoorActor> DoorRef;  // +0x258  // default: {
            "offset": 600,
            "type": "SoftObjectProperty"
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ADoorActor>> BarricadedDoorsToPreventProxyValidation;  // +0x280  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AActor>> BarricadeDoorsIfActorExist;  // +0x290  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsBarricadedInFrontSide = false;  // +0x2A0


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 PreviewBarricade();
    UFUNCTION(BlueprintCallable)
    bool AreProxyConditionsValid();
};

