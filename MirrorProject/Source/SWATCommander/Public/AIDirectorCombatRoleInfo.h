// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AIDirectorCombatRoleInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ATSCharacterBase;

enum class EAIDirectorRoleType : uint8;

#include "AIDirectorCombatRoleInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AIDirectorCombatRoleInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FIDirectorCombatRoleInfo {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIDirectorRoleType Role;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ATSCharacterBase* CharacterRef;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsDeadOrRestrained;  // +0x10

};

