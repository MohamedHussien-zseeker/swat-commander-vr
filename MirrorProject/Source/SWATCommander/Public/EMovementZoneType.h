// Auto-generated UHT enum. Source: Enum EMovementZoneType
#pragma once

#include "CoreMinimal.h"

#include "EMovementZoneType.generated.h"

UENUM(BlueprintType)
enum class EMovementZoneType : uint8 {
    None = 0 UMETA(DisplayName="None"),
    Outside = 1 UMETA(DisplayName="Outside"),
    Corridor = 2 UMETA(DisplayName="Corridor"),
    Room = 3 UMETA(DisplayName="Room"),
    Stairs = 4 UMETA(DisplayName="Stairs"),
    Balcony = 5 UMETA(DisplayName="Balcony"),
    EMovementZoneType_MAX = 6 UMETA(DisplayName="EMovementZoneType_MAX"),
};
