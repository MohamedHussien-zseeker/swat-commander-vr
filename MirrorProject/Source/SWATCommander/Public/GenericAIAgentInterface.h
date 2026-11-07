// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.GenericAIAgentInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "GenericAIAgentInterface.generated.h"

// Class: Class /Script/SWATCommander.GenericAIAgentInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UGenericAIAgentInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnSpawnHTN(UObject* inAssetHTN);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnSpawnEquipment();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnSpawnBT(UObject* inAssetBT);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnHitCharacter(UObject* inInstigator, UObject* inDamageTypeClass, bool inIsLimbs);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnCharacterDeath();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UObject* GetCurrentTarget();
};

