// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.OfficersNameData
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EOfficersTeamType : uint8;

#include "OfficersNameData.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.OfficersNameData
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FOfficersNameData {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Name;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EOfficersTeamType TeamType;  // +0x10

};

