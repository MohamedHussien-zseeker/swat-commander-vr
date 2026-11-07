// Auto-generated UHT enum. Source: Enum ENoEquipmentReason
#pragma once

#include "CoreMinimal.h"

#include "ENoEquipmentReason.generated.h"

UENUM(BlueprintType)
enum class ENoEquipmentReason : uint8 {
    None = 0 UMETA(DisplayName="None"),
    HasNoSpecialSlot = 1 UMETA(DisplayName="HasNoSpecialSlot"),
    OutOfAmmo = 2 UMETA(DisplayName="OutOfAmmo"),
    Busy = 3 UMETA(DisplayName="Busy"),
    CommandIsRunning = 4 UMETA(DisplayName="CommandIsRunning"),
    CantShootFortifiedDoor = 5 UMETA(DisplayName="CantShootFortifiedDoor"),
    ENoEquipmentReason_MAX = 6 UMETA(DisplayName="ENoEquipmentReason_MAX"),
};
