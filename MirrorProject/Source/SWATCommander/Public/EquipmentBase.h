// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.EquipmentBase
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAnimMontage;
class UAnimSequence;
class UMeshComponent;
class UTexture2D;

struct FTransform;
struct FVector;

enum class EEquipmentTypeEnum : uint8;

#include "EquipmentBase.generated.h"

// Class: Class /Script/SWATCommander.EquipmentBase
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API AEquipmentBase : public AInteractiveActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    EquipmentTypeEnum EquipmentType;  // +0x310  // default: {
            "enumType": "EquipmentTypeEnum",
            "value": 0
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText EquipmentName = FText::FromString(TEXT("<FText>"));  // +0x318

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* EquipmentIcon;  // +0x330

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EquipmentTorsoRotation = 0.0f;  // +0x338

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UMeshComponent* RootMesh;  // +0x340  // default: {
            "address": "0x299FDC58080",
            "className": "StaticMes...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform SightTransformADS;  // +0x350  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform RightHandTransform;  // +0x380  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform LeftHandTransform;  // +0x3B0  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform LeftHandVFrontGripTransform;  // +0x3E0  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform LeftHandAFrontGripTransform;  // +0x410  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform LeftHandHFrontGripTransform;  // +0x440  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform RHandLoweredDownTransform;  // +0x470  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform RHandLoweredUpTransform;  // +0x4A0  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform RHandSemireadyTransform;  // +0x4D0  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform RHandRelaxedTransform;  // +0x500  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform RHandSprintingTransform;  // +0x530  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector RHandJointTargetLocation;  // +0x560  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector LHandJointTargetLocation;  // +0x56C  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DiferentBackPose = false;  // +0x578

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UAnimSequence* BackPoseAnim;  // +0x580

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UAnimMontage* RaiseAnim;  // +0x588

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UAnimMontage* HolsterAnim;  // +0x590

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool VisibleOnCharacter = true;  // +0x598


    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 Trigger();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 ReleaseTheTrigger();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    bool HasCharges();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 ForceUsedLOD();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 CreateDynamicMaterialInstance();
};

