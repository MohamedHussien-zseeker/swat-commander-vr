// Auto-generated UHT enum. Source: Enum ESuspiciousEventType
#pragma once

#include "CoreMinimal.h"

#include "ESuspiciousEventType.generated.h"

UENUM(BlueprintType)
enum class ESuspiciousEventType : uint8 {
    None = 0 UMETA(DisplayName="None"),
    DestroyedDoor = 1 UMETA(DisplayName="DestroyedDoor"),
    RestrainedNPC = 2 UMETA(DisplayName="RestrainedNPC"),
    KilledOrIncapacNPC = 3 UMETA(DisplayName="KilledOrIncapacNPC"),
    ExplodedGrenade = 4 UMETA(DisplayName="ExplodedGrenade"),
    ESuspiciousEventType_MAX = 5 UMETA(DisplayName="ESuspiciousEventType_MAX"),
};
