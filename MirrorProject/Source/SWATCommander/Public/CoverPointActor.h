// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.CoverPointActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ACharacter;

struct FRotator;
struct FVector;

#include "CoverPointActor.generated.h"

// Class: Class /Script/SWATCommander.CoverPointActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ACoverPointActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, ExposeOnSpawn)
    FVector Location;  // +0x220  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ExposeOnSpawn)
    FVector _DirectionToWall;  // +0x22C  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ExposeOnSpawn)
    FRotator RotatorXToWall;  // +0x238  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ExposeOnSpawn)
    bool bLeftCoverStanding = false;  // +0x244

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ExposeOnSpawn)
    bool bRightCoverStanding = false;  // +0x245

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ExposeOnSpawn)
    bool bLeftCoverCrouched = false;  // +0x246

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ExposeOnSpawn)
    bool bRightCoverCrouched = false;  // +0x247

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ExposeOnSpawn)
    bool bFrontCoverCrouched = false;  // +0x248

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ExposeOnSpawn)
    bool bCrouchedCover = false;  // +0x249

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StandForwardOffset = 50.0f;  // +0x24C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StandSideOffset = 20.0f;  // +0x250

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CrouchForwardOffset = 30.0f;  // +0x254

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CrouchSideOffset = 15.0f;  // +0x258

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EyeHeightStand = 80.0f;  // +0x25C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EyeHeightCrouch = 40.0f;  // +0x260

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bEnableLeaning = true;  // +0x264

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LeanAngle = 15.0f;  // +0x268

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LeanSideOffset = 10.0f;  // +0x26C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsOccupied = false;  // +0x270

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsAmbush = false;  // +0x271

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ACharacter* OccupiedBy;  // +0x278


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 OccupyCoverPoint(UObject* InCharacter);
    UFUNCTION(BlueprintCallable)
    uint8 FreeCoverPoint(UObject* InCharacter);
    UFUNCTION(BlueprintPure)
    bool FindBestCoverPose(UObject* EnemyActor, bool bAllowLeaning, uint8 /*struct*/& OutTransform, uint8 /*enum*/& OutLeanSide, bool& bOutCrouched, bool& bOutLeaning);
};

