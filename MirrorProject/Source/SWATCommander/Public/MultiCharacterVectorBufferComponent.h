// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.MultiCharacterVectorBufferComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAssetUserData;

#include "MultiCharacterVectorBufferComponent.generated.h"

// Class: Class /Script/SWATCommander.MultiCharacterVectorBufferComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UMultiCharacterVectorBufferComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<int32, TArray<UAssetUserData*>> CharacterBuffers;  // +0xB0  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(VisibleAnywhere)
    int32 DefaultBufferSize = 6;  // +0x100


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 InitBufferSize(int32 InBufferSize);
    UFUNCTION(BlueprintPure)
    bool GetLastVectorForCharacter(UObject* Character, uint8 /*struct*/& OutVector);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetBufferForCharacter(UObject* Character);
    UFUNCTION(BlueprintCallable)
    uint8 AddVectorForCharacter(UObject* Character, uint8 /*struct*/& InVector);
};

