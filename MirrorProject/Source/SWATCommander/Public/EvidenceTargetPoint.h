// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.EvidenceTargetPoint
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EEvidenceSpawnSize : uint8;

#include "EvidenceTargetPoint.generated.h"

// Class: Class /Script/SWATCommander.EvidenceTargetPoint
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API AEvidenceTargetPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EvidenceSpawnSize Size;  // +0x220  // default: {
            "enumType": "EEvidenceSpawnSize",
            "value": 0
      ...

};

