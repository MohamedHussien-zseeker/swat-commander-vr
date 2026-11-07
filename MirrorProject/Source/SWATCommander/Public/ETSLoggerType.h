// Auto-generated UHT enum. Source: Enum TSLoggerType
#pragma once

#include "CoreMinimal.h"

#include "ETSLoggerType.generated.h"

UENUM(BlueprintType)
enum class ETSLoggerType : uint8 {
    Gameplay = 0 UMETA(DisplayName="Gameplay"),
    AI = 1 UMETA(DisplayName="AI"),
    Network = 2 UMETA(DisplayName="Network"),
    Utils = 3 UMETA(DisplayName="Utils"),
    Spawner = 4 UMETA(DisplayName="Spawner"),
    Stat = 5 UMETA(DisplayName="Stat"),
    TSLoggerType_MAX = 6 UMETA(DisplayName="TSLoggerType_MAX"),
};
