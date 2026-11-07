// Auto-generated UHT enum. Source: Enum EAISignalType
#pragma once

#include "CoreMinimal.h"

#include "EAISignalType.generated.h"

UENUM(BlueprintType)
enum class EAISignalType : uint8 {
    GrenadeExploded = 0 UMETA(DisplayName="GrenadeExploded"),
    C2Exploded = 1 UMETA(DisplayName="C2Exploded"),
    DoorDestroyed = 2 UMETA(DisplayName="DoorDestroyed"),
    EnterZone = 3 UMETA(DisplayName="EnterZone"),
    EAISignalType_MAX = 4 UMETA(DisplayName="EAISignalType_MAX"),
};
