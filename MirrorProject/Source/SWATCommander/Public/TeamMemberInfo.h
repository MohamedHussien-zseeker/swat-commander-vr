// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.TeamMemberInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TeamMemberInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.TeamMemberInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FTeamMemberInfo {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 PlayerId;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString SteamID;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString PlayerName;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsLeader;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsReady;  // +0x29

};

