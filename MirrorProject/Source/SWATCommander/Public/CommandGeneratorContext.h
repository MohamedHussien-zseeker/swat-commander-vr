// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CommandGeneratorContext
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class ATSCharacterBase;

struct FHitResult;
struct FVector;

enum class EOfficersTeamType : uint8;

#include "CommandGeneratorContext.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CommandGeneratorContext
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCommandGeneratorContext {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FHitResult HitResult;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FHitResult FwdHitResult;  // +0x88

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ATSCharacterBase*> MembersSortedToTarget;  // +0x110

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ATSCharacterBase*> MembersSortedToPlayer;  // +0x120

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ATSCharacterBase*> MembersUnsorted;  // +0x130

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TargetLocation;  // +0x140

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceStart;  // +0x14C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceEnd;  // +0x158

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceFwdVec;  // +0x164

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* TargetActor;  // +0x170

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* FoundedDoorActor;  // +0x178

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* CornerActor;  // +0x180

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* OperatorActor;  // +0x188

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* MovementZoneActor;  // +0x190

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* CurrentMovementZone;  // +0x198

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EOfficersTeamType TeamType;  // +0x1A0

};

