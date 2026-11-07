// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.BriefingGameState
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FTeamMemberInfo;

#include "BriefingGameState.generated.h"

// Class: Class /Script/SWATCommander.BriefingGameState
UCLASS(NotPlaceable, Config=Game, BlueprintType)
class SWATCOMMANDER_API ABriefingGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, ReplicatedUsing)
    TArray<FTeamMemberInfo> TeamMembers;  // +0x290  // default: []


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SetMemberReady(int32 PlayerId, bool bReady);
    UFUNCTION(BlueprintCallable)
    uint8 RemoveTeamMemberByPlayerId(int32 PlayerId);
    UFUNCTION(BlueprintNativeEvent)
    uint8 RebuildTeamMembers();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 OnTeamMembersUpdated();
    UFUNCTION()
    uint8 OnRep_TeamMembers();
    UFUNCTION(BlueprintPure)
    uint8 GetTeamMembers(TArray<uint8>& OutMembers);
    UFUNCTION(BlueprintCallable)
    uint8 AddTeamMember(uint8 /*struct*/& NewMember);
};

