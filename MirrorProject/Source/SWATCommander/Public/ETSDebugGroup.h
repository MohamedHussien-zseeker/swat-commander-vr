// Auto-generated UHT enum. Source: Enum ETSDebugGroup
#pragma once

#include "CoreMinimal.h"

#include "ETSDebugGroup.generated.h"

UENUM(BlueprintType)
enum class ETSDebugGroup : uint8 {
    Weapons = 0 UMETA(DisplayName="Weapons"),
    Grenades = 1 UMETA(DisplayName="Grenades"),
    AI = 2 UMETA(DisplayName="AI"),
    Player = 3 UMETA(DisplayName="Player"),
    Triggers = 4 UMETA(DisplayName="Triggers"),
    Perception = 5 UMETA(DisplayName="Perception"),
    ETSDebugGroup_MAX = 6 UMETA(DisplayName="ETSDebugGroup_MAX"),
};
