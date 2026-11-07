// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TargetPrioritizerComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AIControllerBaseV2;

struct FTargetInfo;

#include "TargetPrioritizerComponent.generated.h"

// Class: Class /Script/SWATCommander.TargetPrioritizerComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UTargetPrioritizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FTargetInfo> SortedTargetList;  // +0xC0  // default: []

    UPROPERTY(EditAnywhere)
    TMap<float, FString> TeamsWeights;  // +0xD0  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(EditAnywhere)
    float FullResortTimeout = 4.0f;  // +0x120

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<AIControllerBaseV2> OwnerAIC;  // +0x124  // default: {
            "offset": 292,
            "type": "WeakObjectProperty"
       ...

    UPROPERTY(VisibleAnywhere)
    float LastTimeSorted = 0.0f;  // +0x12C


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 ResortTargets();
    UFUNCTION(BlueprintCallable)
    uint8 RecalculateScores();
    UFUNCTION(BlueprintCallable)
    UObject* PickTarget(int32 RandomDeviation);
    UFUNCTION(BlueprintCallable)
    uint8 FilterOutInvalidTargets();
    UFUNCTION(BlueprintCallable)
    uint8 AddTarget(UObject* NewTarget);
};

