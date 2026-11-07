// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AICommandDescription
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class ATSCharacterBase;

struct FICompositeTaskParallel;
struct FHitResult;
struct FVector;

enum class EAICommandSignature : uint8;
enum class EOfficersTeamType : uint8;
enum class ESelectedStackupMode : uint8;

#include "AICommandDescription.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AICommandDescription
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FICommandDescription {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICommandSignature Signature;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EOfficersTeamType TeamType;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ATSCharacterBase*> SortedTeam;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ATSCharacterBase*> MembersSortedCustom;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FAICompositeTaskParallel> CompositeTaskChain;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int32> TaskChainCompletionLeaders;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumStepsToComplete;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* TargetActor;  // +0x50

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TargetLocation;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FHitResult HitResult;  // +0x64

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FHitResult FwdHitResult;  // +0xEC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceStart;  // +0x174

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceEnd;  // +0x180

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceFwdVec;  // +0x18C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsValid;  // +0x198

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseSpecificActors;  // +0x199

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Priority;  // +0x19C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool PlayOfficersResponseDialog;  // +0x1A0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int32> StackupTransformIndicies;  // +0x1A8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsForwardStackup;  // +0x1B8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESelectedStackupMode StackupMode;  // +0x1B9

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsAtomic;  // +0x1BA

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsDoorBased;  // +0x1BB

};

