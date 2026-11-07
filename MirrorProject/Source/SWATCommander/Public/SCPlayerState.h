// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.SCPlayerState
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FTeamMemberInfo;

#include "SCPlayerState.generated.h"

// Class: Class /Script/SWATCommander.SCPlayerState
UCLASS(NotPlaceable, Config=Engine, BlueprintType)
class SWATCOMMANDER_API ASCPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated)
    FTeamMemberInfo TeamMemberInfo;  // +0x320  // default: "<struct>"

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing)
    bool bIsReady = false;  // +0x350

    UPROPERTY(VisibleAnywhere, Replicated)
    bool bClientReady = false;  // +0x351


    // ── Methods ──
    UFUNCTION(Server, Reliable)
    uint8 SetTeamMemberInfo_SERVER(uint8 /*struct*/ NewInfo);
    UFUNCTION(BlueprintCallable)
    uint8 SetTeamMemberInfo(uint8 /*struct*/& NewInfo);
    UFUNCTION()
    uint8 OnRep_Ready();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 HandleReadyChanged();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetTeamMemberInfo();
};

