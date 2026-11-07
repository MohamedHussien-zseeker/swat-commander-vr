// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.MovementZoneTrigger
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class ACoverPointActor;
class AInteractiveActor;
class AMovementZoneProxyActor;
class ATSCharacterBase;
class UPSEnemyPointAction;

struct FGameplayTagContainer;
struct FMovementZoneRoutePath;
struct FMovementZoneStatus;
struct FSpawnEvidenceInfo;
struct FTransform;
struct FVector;

enum class EAllowMovementGenerationFlags : uint8;
enum class EMovementZoneSpawnPriority : uint8;
enum class EMovementZoneType : uint8;
enum class ESpawnLimitMode : uint8;
enum class ETailRoomType : uint8;

#include "MovementZoneTrigger.generated.h"

// Class: Class /Script/SWATCommander.MovementZoneTrigger
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API AMovementZoneTrigger : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AMovementZoneProxyActor> MovementZoneProxyClass;  // +0x228

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ACoverPointActor> CoverPointActorClass;  // +0x230

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<FTransform> MovementTransforms;  // +0x238  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TMap<ETailRoomType, TArray<FMovementZoneRoutePath>> MovementTransformsBarricaded;  // +0x248  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETailRoomType ReverbType;  // +0x298  // default: {
            "enumType": "ETailRoomType",
            "value": 1
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsZoneBarricadedInTheMiddle = false;  // +0x299

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool HasDeadBodyInZone = false;  // +0x29A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName MovementZoneName = FName(TEXT("None"));  // +0x29C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EMovementZoneType ZoneType;  // +0x2A4  // default: {
            "enumType": "EMovementZoneType",
            "value": 0
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESpawnLimitMode SpawnLimitMode;  // +0x2A5  // default: {
            "enumType": "ESpawnLimitMode",
            "value": 0
          }

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    FMovementZoneStatus ZoneStatus;  // +0x2A8  // default: "<struct>"

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    bool WasOfficerInside = false;  // +0x2B8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ZoneFloor = 1;  // +0x2BC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumCharactersSpawn = 1;  // +0x2C0

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int32 NumSpawnedCharactes = 0;  // +0x2C4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EMovementZoneSpawnPriority Priority;  // +0x2C8  // default: {
            "enumType": "EMovementZoneSpawnPriority",
            "value": ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAllowMovementGenerationFlags AllowMovementGenerationFlags;  // +0x2C9  // default: {
            "enumType": "EAllowMovementGenerationFlags",
            "value...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FMovementZoneRoutePath> FlankingDetours;  // +0x2D0  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSet<TSet<TSet<TArray<TSoftObjectPtr<ACoverPointActor>>>>> ConnectedDoors;  // +0x2E0  // default: {
            "note": "not yet supported",
            "type": "SetProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSet<TSet<TArray<TSoftObjectPtr<ACoverPointActor>>>> ConnectedMovementZones;  // +0x330  // default: {
            "note": "not yet supported",
            "type": "SetProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSet<TArray<TSoftObjectPtr<ACoverPointActor>>> ZoneSearchAndSecureGroup;  // +0x380  // default: {
            "note": "not yet supported",
            "type": "SetProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ACoverPointActor>> CoverActors;  // +0x3D0  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<UPSEnemyPointAction>> PointActions;  // +0x3E0  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<AInteractiveActor> LightSwitchInZone;  // +0x3F0  // default: {
            "offset": 1008,
            "type": "SoftObjectProperty"
      ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AInteractiveActor>> BombsForActivationList;  // +0x418  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AActor>> FocusPoints;  // +0x428  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AActor>> StaticEvidencesToReport;  // +0x438  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSet<bool> ConnectedZonesForFocusInfo;  // +0x448  // default: {
            "note": "not yet supported",
            "type": "SetProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool RunSearchAndSecure = false;  // +0x498

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<UPSEnemyPointAction>> MobGroups;  // +0x4A0  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MinMobsNum = 0;  // +0x4B0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxMobsNum = 0;  // +0x4B4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrentMobsNum = 0;  // +0x4B8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldSpawnMobsAnyway = false;  // +0x4BC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer MovementTags;  // +0x4C0  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> PossibleSpawnLocations;  // +0x4E0  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float OffsetBetweenSpawnLocations = 150.0f;  // +0x4F0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugSpawnLocations = false;  // +0x4F4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSpawnEvidenceInfo> PossibleEvidenceSpawnInfo;  // +0x4F8  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<FSpawnEvidenceInfo> PossibleEvidenceSpawnInfoOriginal;  // +0x508  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<ATSCharacterBase*> ListOfNpcInZone;  // +0x518  // default: []


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SubmitPrecomputedTransforms(TArray<uint8>& inTransforms);
    UFUNCTION(BlueprintImplementableEvent)
    uint8 PrecomputeMovementTransforms();
    UFUNCTION(BlueprintCallable)
    uint8 OnCharacterLeaveZone(UObject* InCharacter);
    UFUNCTION(BlueprintCallable)
    uint8 OnCharacterEnterZone(UObject* InCharacter);
    UFUNCTION(BlueprintPure)
    bool NasFlankingDetours();
    UFUNCTION(BlueprintPure)
    bool NasCapacityForEneteringZone();
    UFUNCTION(BlueprintCallable)
    uint8 MarkWithLightstick();
    UFUNCTION(BlueprintPure)
    bool IsCoverInZone(UObject* inCoverActor);
    UFUNCTION(BlueprintPure)
    bool IsCharacterInsideZone(UObject* InCharacter);
    UFUNCTION(BlueprintPure)
    bool HasLightstick();
    UFUNCTION(BlueprintPure)
    bool HasFreeCovers();
    UFUNCTION(BlueprintPure)
    bool HasCovers();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetZoneTransformsSortedByFarDistance(UObject* inDoorActor, UObject* inSortingActor);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetSuspectsInZone();
    UFUNCTION(BlueprintImplementableEvent)
    TArray<uint8> GetShapeComponents();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetRawCoverPointers();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetCiviliansInZone();
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetAllStaticEvidencesForSearchAndSecure();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllNPCsInZoneForSearchSecure();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllCharactersInZone();
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetAllCharactersForSearchAndSecure();
    UFUNCTION(BlueprintCallable)
    TArray<uint8> FindLocationsWithActorVisibility(TArray<uint8>& inActors, float inOffsetZ);
    UFUNCTION(BlueprintPure)
    UObject* FindClosestUnlockedDoorToActor(UObject* InActor);
    UFUNCTION(BlueprintPure)
    UObject* FindClosestFreeCoverPointToActor(UObject* InActor);
    UFUNCTION(BlueprintPure)
    TArray<uint8> FindActionsForNPC(UObject* inAIC);
    UFUNCTION(BlueprintPure)
    float DistanceFromClosestUnlockedDoorToActor(UObject* InActor);
    UFUNCTION(BlueprintPure)
    float DistanceFromClosestFreeCoverPointToActor(UObject* InActor);
};

