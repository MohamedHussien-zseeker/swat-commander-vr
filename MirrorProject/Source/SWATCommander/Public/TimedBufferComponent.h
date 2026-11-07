// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TimedBufferComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FTimedBufferEntry;

#include "TimedBufferComponent.generated.h"

// Class: Class /Script/SWATCommander.TimedBufferComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UTimedBufferComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FTimedBufferEntry> Buffer;  // +0xB0  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxLifetime = 10.0f;  // +0xC0


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UpdateTime();
    UFUNCTION(BlueprintPure)
    bool Contains(UObject* Object);
    UFUNCTION(BlueprintCallable)
    uint8 Clear();
    UFUNCTION(BlueprintCallable)
    uint8 AddUnique(UObject* Object);
};

