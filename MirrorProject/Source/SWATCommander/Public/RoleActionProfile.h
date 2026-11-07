// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.RoleActionProfile
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FGameplayTagContainer;

#include "RoleActionProfile.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.RoleActionProfile
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FRoleActionProfile {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer PointActionTag;  // +0x8

};

