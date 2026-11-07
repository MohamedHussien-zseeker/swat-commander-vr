// Auto-generated UHT enum. Source: Enum EInteractiveObjectType
#pragma once

#include "CoreMinimal.h"

#include "EInteractiveObjectType.generated.h"

UENUM(BlueprintType)
enum class EInteractiveObjectType : uint8 {
    Unknown = 0 UMETA(DisplayName="Unknown"),
    Evidence = 1 UMETA(DisplayName="Evidence"),
    DeadBody = 2 UMETA(DisplayName="DeadBody"),
    Bomb = 3 UMETA(DisplayName="Bomb"),
    Interactive = 4 UMETA(DisplayName="Interactive"),
    IncapacitatedBody = 5 UMETA(DisplayName="IncapacitatedBody"),
    Vehicle = 6 UMETA(DisplayName="Vehicle"),
    Max = 7 UMETA(DisplayName="Max"),
};
