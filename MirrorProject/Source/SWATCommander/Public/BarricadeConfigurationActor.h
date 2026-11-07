// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.BarricadeConfigurationActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class ABarricadeProxyActor;

#include "BarricadeConfigurationActor.generated.h"

// Class: Class /Script/SWATCommander.BarricadeConfigurationActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ABarricadeConfigurationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ABarricadeProxyActor> BarricadeProxyClass;  // +0x220

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled = true;  // +0x228

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseChancePerProxy = true;  // +0x229

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<AActor> BarricadeActorRef;  // +0x230  // default: {
            "offset": 560,
            "type": "SoftObjectProperty"
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ABarricadeProxyActor>> BaricadeTransformProxies;  // +0x258  // default: []


    // ── Methods ──
    UFUNCTION(BlueprintPure)
    UObject* GetBaricadedDoor();
    UFUNCTION(NetMulticast, Reliable)
    uint8 BarricadeTheDoor_MULTICAST(uint8 /*struct*/ barricadeProxyTransform);
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 BarricadeTheDoor();
};

