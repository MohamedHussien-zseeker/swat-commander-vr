// Auto-generated UHT enum. Source: Enum EAINoiseTagType
#pragma once

#include "CoreMinimal.h"

#include "EAINoiseTagType.generated.h"

UENUM(BlueprintType)
enum class EAINoiseTagType : uint8 {
    Footstep = 0 UMETA(DisplayName="Footstep"),
    GrenadeThrow = 1 UMETA(DisplayName="GrenadeThrow"),
    OrderToSurrender = 2 UMETA(DisplayName="OrderToSurrender"),
    OfficerHasBeenHit = 3 UMETA(DisplayName="OfficerHasBeenHit"),
    SuspectHasBeenHit = 4 UMETA(DisplayName="SuspectHasBeenHit"),
    Door = 5 UMETA(DisplayName="Door"),
    Explosion = 6 UMETA(DisplayName="Explosion"),
    GunShot = 7 UMETA(DisplayName="GunShot"),
    CivilianDeath = 8 UMETA(DisplayName="CivilianDeath"),
    SuspectDeath = 9 UMETA(DisplayName="SuspectDeath"),
    OfficerDeath = 10 UMETA(DisplayName="OfficerDeath"),
    CivilianIncapacitated = 11 UMETA(DisplayName="CivilianIncapacitated"),
    SuspectIncapacitated = 12 UMETA(DisplayName="SuspectIncapacitated"),
    OfficerIncapacitated = 13 UMETA(DisplayName="OfficerIncapacitated"),
    Voice = 14 UMETA(DisplayName="Voice"),
    GoingCover = 15 UMETA(DisplayName="GoingCover"),
    GoingReload = 16 UMETA(DisplayName="GoingReload"),
    GoingApproach = 17 UMETA(DisplayName="GoingApproach"),
    GoingAttack = 18 UMETA(DisplayName="GoingAttack"),
    GoingThrowGrenade = 19 UMETA(DisplayName="GoingThrowGrenade"),
    GoingMelee = 20 UMETA(DisplayName="GoingMelee"),
    GoingSurrender = 21 UMETA(DisplayName="GoingSurrender"),
    GoingFakeSurender = 22 UMETA(DisplayName="GoingFakeSurender"),
    HasBeenStunned = 23 UMETA(DisplayName="HasBeenStunned"),
    GoingFlank = 24 UMETA(DisplayName="GoingFlank"),
    WeaponMuzzleNoise = 25 UMETA(DisplayName="WeaponMuzzleNoise"),
    DoorRammingNoise = 26 UMETA(DisplayName="DoorRammingNoise"),
    SniperShot = 27 UMETA(DisplayName="SniperShot"),
    GunshotMorale = 28 UMETA(DisplayName="GunshotMorale"),
    FootstepForTimerUpdate = 29 UMETA(DisplayName="FootstepForTimerUpdate"),
    Max = 30 UMETA(DisplayName="Max"),
};
