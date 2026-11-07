// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.AIFocusInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "AIFocusInterface.generated.h"

// Class: Class /Script/SWATCommander.AIFocusInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UIFocusInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 AIF_SetFocusEnabled(bool inFocusEnabled);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 AIF_SetFocus(UObject* inCharacterAI, UObject* inCharacterTarget);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIF_IsFocusingCharacter(UObject* inCharacterTarget);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIF_IsFocusing();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIF_CanFocus(UObject* inCharacterAI, UObject* inCharacterTarget);
};

