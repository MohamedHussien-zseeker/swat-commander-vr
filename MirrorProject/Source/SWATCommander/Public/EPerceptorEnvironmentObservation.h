// Auto-generated UHT enum. Source: Enum EPerceptorEnvironmentObservation
#pragma once

#include "CoreMinimal.h"

#include "EPerceptorEnvironmentObservation.generated.h"

UENUM(BlueprintType)
enum class EPerceptorEnvironmentObservation : uint8 {
    DestroyedDoor = 0 UMETA(DisplayName="DestroyedDoor"),
    BlockedDoor = 1 UMETA(DisplayName="BlockedDoor"),
    BreachedDoor = 2 UMETA(DisplayName="BreachedDoor"),
    InactiveNPC = 3 UMETA(DisplayName="InactiveNPC"),
    RestrainedNPC = 4 UMETA(DisplayName="RestrainedNPC"),
    EPerceptorEnvironmentObservation_MAX = 5 UMETA(DisplayName="EPerceptorEnvironmentObservation_MAX"),
};
