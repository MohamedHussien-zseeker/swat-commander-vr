// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.MobSystemGroupInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "MobSystemGroupInterface.generated.h"

// Class: Class /Script/SWATCommander.MobSystemGroupInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UMobSystemGroupInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SpawnMobInGroup(UObject* inMobClass);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ShouldReplaceInitialAction();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool HasFreeSlots();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetNumRequiredMobs();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetMobInitalAction(int32 inMobIndex);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 GetMobBehaviorForSlot(int32 inMobIndex);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetMaximumMobsSlots();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetFreeSlotIndex();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AreSlotsOverlapWithCharacters();
};

