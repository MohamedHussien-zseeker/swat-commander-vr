// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.InteractiveActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAnimMontage;
class UArrowComponent;
class AMovementZoneProxyActor;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundBase;
class UStaticMesh;
class UStaticMeshComponent;

struct FVector;

enum class EInteractiveBodyType : uint8;
enum class EInteractiveObjectType : uint8;

#include "InteractiveActor.generated.h"

// Class: Class /Script/SWATCommander.InteractiveActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API AInteractiveActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName InteractiveActorIdentifier = FName(TEXT("None"));  // +0x220

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EInteractiveObjectType Type;  // +0x228  // default: {
            "enumType": "EInteractiveObjectType",
            "value": 0
  ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EInteractiveBodyType BodyType;  // +0x229  // default: {
            "enumType": "EInteractiveBodyType",
            "value": 0
    ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UAnimMontage* InteractionAnimation;  // +0x230

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMesh* ItemMesh;  // +0x238

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMesh* ItemSkeletalMesh;  // +0x240

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* UseSound;  // +0x248

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseOnce = false;  // +0x250

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool Used = false;  // +0x251

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<bool, FString> UseDialogs;  // +0x258  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldMakeNoise = false;  // +0x2A8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseLoudness = 1.0f;  // +0x2AC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NoiseMaxRange = 0.0f;  // +0x2B0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName NoiseTag = FName(TEXT("None"));  // +0x2B4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldDestroyActor = false;  // +0x2BC

    UPROPERTY(VisibleAnywhere, BlueprintAssignable, BlueprintCallable)
    FMulticastScriptDelegate OnUseObject;  // +0x2C0  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> InteractionStandLocations;  // +0x2D0  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AMovementZoneProxyActor> MovementZoneProxyClass;  // +0x2E0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMeshComponent* ObjectMeshComponent;  // +0x2E8  // default: {
            "address": "0x299FDC58B20",
            "className": "StaticMes...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMeshComponent* ObjectSkeletalMeshComponent;  // +0x2F0  // default: {
            "address": "0x299FDC8A060",
            "className": "SkeletalM...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UArrowComponent* StandPointArrow;  // +0x2F8

    UPROPERTY(VisibleAnywhere)
    TArray<AMovementZoneProxyActor*> SpawnedProxies;  // +0x300  // default: []


    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 Use(UObject* UserCharacter);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnEnable();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnDisable();
    UFUNCTION(BlueprintPure)
    bool HasInteractionStandLocations();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetInteractionStandLocations();
};

