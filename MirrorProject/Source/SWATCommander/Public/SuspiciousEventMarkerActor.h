// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.SuspiciousEventMarkerActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UIPerceptionStimuliSourceComponent;

enum class ESuspiciousEventType : uint8;

#include "SuspiciousEventMarkerActor.generated.h"

// Class: Class /Script/SWATCommander.SuspiciousEventMarkerActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ASuspiciousEventMarkerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESuspiciousEventType EventType;  // +0x220  // default: {
            "enumType": "ESuspiciousEventType",
            "value": 0
    ...

    UPROPERTY(VisibleAnywhere)
    UIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;  // +0x228  // default: {
            "address": "0x299A40005C0",
            "className": "AIPercept...

};

