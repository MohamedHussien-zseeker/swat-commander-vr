// Auto-generated UHT enum. Source: Enum ENoiseResponseType
#pragma once

#include "CoreMinimal.h"

#include "ENoiseResponseType.generated.h"

UENUM(BlueprintType)
enum class ENoiseResponseType : uint8 {
    SendCiviWithPhone = 0 UMETA(DisplayName="SendCiviWithPhone"),
    SendSusp = 1 UMETA(DisplayName="SendSusp"),
    SendSuspWithWeaponInHands = 2 UMETA(DisplayName="SendSuspWithWeaponInHands"),
    SendSuspReadyToCombat = 3 UMETA(DisplayName="SendSuspReadyToCombat"),
    SendSuspTurnTheFuzeBox = 4 UMETA(DisplayName="SendSuspTurnTheFuzeBox"),
    SendTwoSuspsForCombat = 5 UMETA(DisplayName="SendTwoSuspsForCombat"),
    SendTreeSusps = 6 UMETA(DisplayName="SendTreeSusps"),
    SendSpecialSusp = 7 UMETA(DisplayName="SendSpecialSusp"),
    ThrowGrenadeInTheRoom = 8 UMETA(DisplayName="ThrowGrenadeInTheRoom"),
    SendAllSuspectsToAttack = 9 UMETA(DisplayName="SendAllSuspectsToAttack"),
    ENoiseResponseType_MAX = 10 UMETA(DisplayName="ENoiseResponseType_MAX"),
};
