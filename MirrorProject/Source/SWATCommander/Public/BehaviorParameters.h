// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.BehaviorParameters
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;
class AMovementZoneTrigger;

struct FGameplayTagContainer;

enum class EAICombatEvacuationMode : uint8;
enum class EAICombatStyle : uint8;
enum class EAIExtremeSituationResponse : uint8;
enum class EAIFakeSurrenderTypes : uint8;

#include "BehaviorParameters.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.BehaviorParameters
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FBehaviorParameters {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Aggressiveness;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Intelligence;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanAlertEnemies;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanRunFromDanger;  // +0x21

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanAttackWhenNotObserved;  // +0x22

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanPhoneCall;  // +0x23

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanUseCombatBranches;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanComplainWhileCombat;  // +0x25

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ComplainDialogForCombat;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICombatStyle CombatStyle;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIExtremeSituationResponse LowHealthResponse;  // +0x31

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIExtremeSituationResponse LowMoraleResponse;  // +0x32

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIExtremeSituationResponse NoAmmoResponse;  // +0x33

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICombatEvacuationMode EvacuationMode;  // +0x34

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIExtremeSituationResponse DeathResponse;  // +0x35

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIExtremeSituationResponse UnawareOrderToSurrenderResponse;  // +0x36

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIFakeSurrenderTypes FakeSurrenderType;  // +0x37

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TimeForCombatToStart;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldHoldWeaponOnSpawn;  // +0x3C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LockDoorChance;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AMovementZoneTrigger*> MovementZones;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AMovementZoneTrigger* SpawnMovementZone;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanPerformPatrolMovement;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* RoleDataTable;  // +0x68

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName RoleActionProfile;  // +0x70

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer AIPatchTags;  // +0x78

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanEnableFuze;  // +0x98

};

