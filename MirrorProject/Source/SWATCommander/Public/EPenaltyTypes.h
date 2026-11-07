// Auto-generated UHT enum. Source: Enum EPenaltyTypes
#pragma once

#include "CoreMinimal.h"

#include "EPenaltyTypes.generated.h"

UENUM(BlueprintType)
enum class EPenaltyTypes : uint8 {
    UnauthorizedUseOfForce = 0 UMETA(DisplayName="UnauthorizedUseOfForce"),
    UnauthorizedUseOfDeadlyForce = 1 UMETA(DisplayName="UnauthorizedUseOfDeadlyForce"),
    FailedReportDownedOfficer = 2 UMETA(DisplayName="FailedReportDownedOfficer"),
    InjuredFellowOfficer = 3 UMETA(DisplayName="InjuredFellowOfficer"),
    IncapacitatedAFellowOfficer = 4 UMETA(DisplayName="IncapacitatedAFellowOfficer"),
    IncapacitatedAHostage = 5 UMETA(DisplayName="IncapacitatedAHostage"),
    KilledAHostage = 6 UMETA(DisplayName="KilledAHostage"),
    FailedToReportDownedCivilian = 7 UMETA(DisplayName="FailedToReportDownedCivilian"),
    FailedToReportDownedSuspect = 8 UMETA(DisplayName="FailedToReportDownedSuspect"),
    FailedToApprehendFleeingSuspect = 9 UMETA(DisplayName="FailedToApprehendFleeingSuspect"),
    FailedToPreventDestructionOfEvidence = 10 UMETA(DisplayName="FailedToPreventDestructionOfEvidence"),
    EPenaltyTypes_MAX = 11 UMETA(DisplayName="EPenaltyTypes_MAX"),
};
