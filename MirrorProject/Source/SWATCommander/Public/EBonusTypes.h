// Auto-generated UHT enum. Source: Enum EBonusTypes
#pragma once

#include "CoreMinimal.h"

#include "EBonusTypes.generated.h"

UENUM(BlueprintType)
enum class EBonusTypes : uint8 {
    ReportSuspect = 0 UMETA(DisplayName="ReportSuspect"),
    ReportCivilian = 1 UMETA(DisplayName="ReportCivilian"),
    ReportOfficer = 2 UMETA(DisplayName="ReportOfficer"),
    ReportDeadSuspect = 3 UMETA(DisplayName="ReportDeadSuspect"),
    ReportDeadCivilian = 4 UMETA(DisplayName="ReportDeadCivilian"),
    ReportDeadOfficer = 5 UMETA(DisplayName="ReportDeadOfficer"),
    ReportIncapacSuspect = 6 UMETA(DisplayName="ReportIncapacSuspect"),
    ReportIncapacCivilian = 7 UMETA(DisplayName="ReportIncapacCivilian"),
    ReportIncapacOfficer = 8 UMETA(DisplayName="ReportIncapacOfficer"),
    ReportEvidence = 9 UMETA(DisplayName="ReportEvidence"),
    ReportWeapon = 10 UMETA(DisplayName="ReportWeapon"),
    DefuseBomb = 11 UMETA(DisplayName="DefuseBomb"),
    EBonusTypes_MAX = 12 UMETA(DisplayName="EBonusTypes_MAX"),
};
