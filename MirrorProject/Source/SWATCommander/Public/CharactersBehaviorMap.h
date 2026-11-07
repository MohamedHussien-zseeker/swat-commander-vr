// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CharactersBehaviorMap
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "CharactersBehaviorMap.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CharactersBehaviorMap
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCharactersBehaviorMap {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Civi_Complainer;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Civi_Hostage;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Approacher;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Flanker;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Runner;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Ambusher;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Pretender;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_HostageTaker;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Resp_FakeSurrender;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Resp_FakeDeath;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Resp_RunAndHide;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Resp_Surrender;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Resp_KillHostage;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Resp_TakeHostage;  // +0x34

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Resp_HideInRoom;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_Resp_Attack;  // +0x3C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Civi_RunFromDangerPercentage;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_RunFromDangerPercentage;  // +0x44

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_AttackWhenNotObservedPercentage;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_UnexpectedSurrenderPercentage;  // +0x4C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Susp_UnexpectedSurrenderCooldown;  // +0x50

};

