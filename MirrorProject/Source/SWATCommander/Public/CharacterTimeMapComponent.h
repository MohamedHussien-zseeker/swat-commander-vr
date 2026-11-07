// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.CharacterTimeMapComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAssetUserData;

struct FActorComponentTickFunction;

#include "CharacterTimeMapComponent.generated.h"

// Class: Class /Script/SWATCommander.CharacterTimeMapComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UCharacterTimeMapComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<FActorComponentTickFunction, TArray<UAssetUserData*>> CharacterTimeMap;  // +0xB0  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SetTime(UObject* Character, float Time);
    UFUNCTION(BlueprintCallable)
    bool RemoveCharacter(UObject* Character);
    UFUNCTION(BlueprintPure)
    bool HasTimeForCharacter(UObject* Character);
    UFUNCTION(BlueprintPure)
    bool GetTime(UObject* Character, float& OutTime);
    UFUNCTION(BlueprintCallable)
    uint8 ClearAll();
    UFUNCTION(BlueprintCallable)
    uint8 AddTime(UObject* Character, float Delta);
};

