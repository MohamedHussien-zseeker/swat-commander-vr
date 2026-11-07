// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.PushAIComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UEnvQuery;

#include "PushAIComponent.generated.h"

// Class: Class /Script/SWATCommander.PushAIComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UPushAIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UEnvQuery* QueryTemplate;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UEnvQuery* AimQueryTemplate;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled = true;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldAutoAim = false;  // +0xC1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableForAnotherAIC = true;  // +0xC2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Debug = false;  // +0xC3

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName SpottedTargetIdentifier = FName(TEXT("Spotted Target"));  // +0xC4


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 OnOverlapWithCharacter(UObject* InActor);
    UFUNCTION(BlueprintPure)
    UObject* GetOverlappedActor();
};

