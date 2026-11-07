// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSDialogManager
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSDialogManager.generated.h"

// Class: Class /Script/SWATCommander.TSDialogManager
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSDialogManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TMap<TMap<FName, FString>, FString>, FString> TeamVoiceLimits;  // +0x28  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(VisibleAnywhere)
    TMap<TMap<FName, FString>, FString> TeamLimitCounters;  // +0x78  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(VisibleAnywhere)
    TMap<FName, FString> CateogryUniqueMap;  // +0xC8  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

};

