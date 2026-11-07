// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSCharacterBase
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UISightTargetInterface;
class UAudioComponent;
class UCrowdAgentInterface;
class UDialogComponent;
class AEquipmentBase;
class UFootstepComponent;
class UHealthComponent;
class UMovementZoneInterface;
class AMovementZoneTrigger;
class UPhysicalAnimationComponent;
class UPointActionInterface;
class ATSCharacterBase;
class UPSEnemyPointAction;

struct FEquipmentPermissions;
struct FEquipmentStuct;
struct FRotator;
struct FVector;

enum class EAITeams : uint8;
enum class ECharacterMoodType : uint8;
enum class EOfficersTeamType : uint8;
enum class EHostageState : uint8;

#include "TSCharacterBase.generated.h"

// Class: Class /Script/SWATCommander.TSCharacterBase
UCLASS(Config=Game, BlueprintType)
class SWATCOMMANDER_API ATSCharacterBase : public ACharacter, public ICrowdAgentInterface, public IISightTargetInterface, public IMovementZoneInterface, public IPointActionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UHealthComponent* HealthComponent;  // +0x4D8  // default: {
            "address": "0x299A4002A80",
            "className": "HealthCom...

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    UPhysicalAnimationComponent* PhysicalAnimationComponent;  // +0x4E0  // default: {
            "address": "0x2999EDEDA00",
            "className": "PhysicalA...

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UDialogComponent* DialogComponent;  // +0x4E8  // default: {
            "address": "0x299FF24BB40",
            "className": "DialogCom...

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UAudioComponent* SpeechAudioComponent;  // +0x4F0  // default: {
            "address": "0x2999FCF6E00",
            "className": "AudioComp...

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UAudioComponent* FootstepAudioComponent;  // +0x4F8  // default: {
            "address": "0x2999FCF5BC0",
            "className": "AudioComp...

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UFootstepComponent* FootstepComponent;  // +0x500  // default: {
            "address": "0x299FF193580",
            "className": "FootstepC...

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    FEquipmentStuct Equipment;  // +0x508  // default: "<struct>"

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    FEquipmentPermissions EquipmentPermissions;  // +0x570  // default: "<struct>"

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    AEquipmentBase* PrimaryWeapon;  // +0x578

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    AEquipmentBase* SecondaryWeapon;  // +0x580

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    AEquipmentBase* SpecialWeapon;  // +0x588

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    TArray<AEquipmentBase*> AdditionalWeapons;  // +0x590  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    AEquipmentBase* CurrentWeapon;  // +0x5A0

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    AEquipmentBase* DropedSecondaryWeapon;  // +0x5A8

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    AEquipmentBase* DropedPrimaryWeapon;  // +0x5B0

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    AEquipmentBase* DropedSpecialWeapon;  // +0x5B8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAITeams TeamType;  // +0x5C0  // default: {
            "enumType": "EAITeams",
            "value": 0
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    ECharacterMoodType DefaultMoodType;  // +0x5C1  // default: {
            "enumType": "ECharacterMoodType",
            "value": 0
      ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    ECharacterMoodType CurrentMoodType;  // +0x5C2  // default: {
            "enumType": "ECharacterMoodType",
            "value": 0
      ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> PerceptionSockets;  // +0x5C8  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> PerceptionAimingSockets;  // +0x5D8  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName PerceptionDefaultAimingSocket = FName(TEXT("None"));  // +0x5E8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinDistanceForComplexCheckVertical = 300.0f;  // +0x5F0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinDistanceForComplexCheckHorizontal = 1500.0f;  // +0x5F4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableSocketLoS = false;  // +0x5F8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool VisualizeTrace = false;  // +0x5F9

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float WalkSpeed = 300.0f;  // +0x5FC

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float SprintSpeed = 550.0f;  // +0x600

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float InjuredWalkSpeed = 150.0f;  // +0x604

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float InjuredSprintSpeed = 250.0f;  // +0x608

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float InTheDarkSpeedMultiplier = 0.6000000238418579f;  // +0x60C

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float KneeWalkSpeed = 100.0f;  // +0x610

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName PerceptionHeadSocketName = FName(TEXT("Head"));  // +0x614

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector PerceptionHeadOffset;  // +0x61C  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsControlledByAI = false;  // +0x628

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EHostageState CharacterHostageState;  // +0x629  // default: {
            "enumType": "HostageState",
            "value": 0
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ATSCharacterBase* CharacterHostage;  // +0x630

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ATSCharacterBase* CharacterTaker;  // +0x638

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsMale = true;  // +0x640

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsReported = false;  // +0x641

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsReportedBySniper = false;  // +0x642

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsReportedByCamera = false;  // +0x643

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsRestrained = false;  // +0x644

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsGoingToNiceSurrenderLocation = false;  // +0x645

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsVisuallyConfirmedDead = false;  // +0x646

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool WasIncapacitated = false;  // +0x647

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsMarkedForDeploy = false;  // +0x648

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsRestrainingStarted = false;  // +0x649

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float HeadArmorHealth = 0.0f;  // +0x64C

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float BodyArmorHealth = 0.0f;  // +0x650

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float RArmArmorHealth = 0.0f;  // +0x654

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float LArmArmorHealth = 0.0f;  // +0x658

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float EquipmentWeight = 0.0f;  // +0x65C

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    FName CharacterName = FName(TEXT("None"));  // +0x660

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float InjuredEquipmentSpeedModifier = 1.0f;  // +0x668

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float EquipmentSpeedModifier = 1.0f;  // +0x66C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsMagicalCreature = false;  // +0x670

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EOfficersTeamType OfficersTeamType;  // +0x671  // default: {
            "enumType": "EOfficersTeamType",
            "value": 0
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector ClavicleTranslation;  // +0x674  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Spine03Translation;  // +0x680  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Spine02Translation;  // +0x68C  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Spine01Translation;  // +0x698  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector NeckTranslation;  // +0x6A4  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector HeadTranslation;  // +0x6B0  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FRotator HeadRotator;  // +0x6BC  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector BallTranslation;  // +0x6C8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseBoneCorection = false;  // +0x6D4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float OriginalPrimaryDamage = 1.0f;  // +0x6D8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float OriginalSecondaryDamage = 1.0f;  // +0x6DC

    UPROPERTY(VisibleAnywhere)
    AMovementZoneTrigger* CurrentMovementZonePtr;  // +0x6E0

    UPROPERTY(VisibleAnywhere)
    UPSEnemyPointAction* CurrentPointActionPtr;  // +0x6E8


    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent)
    uint8 WalkingInDarkExtra();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 TakeHostage(UObject* Hostage);
    UFUNCTION(BlueprintImplementableEvent)
    uint8 SprintingInDarkExtra();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 SprintingExtra();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 SetRagdollForFakeDeath(bool Enable);
    UFUNCTION(BlueprintImplementableEvent)
    uint8 SetNewWeaponDamageModifier(float inDamageModifier);
    UFUNCTION(BlueprintImplementableEvent)
    uint8 SetNewFireRateModifier(float inFireRateMod, float inFireDelayMod);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 ReleaseHostage();
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnStartPointAction(UObject* inAction);
    UFUNCTION(BlueprintImplementableEvent)
    uint8 OnSpawnEquipmentAI();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 OnIncapacitateCheat();
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnEnterRoomZone(UObject* inZone);
    UFUNCTION(BlueprintPure)
    bool IsWalking();
    UFUNCTION(BlueprintPure)
    bool IsSprinting();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsSpecialSlotAvalible();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsReadyForRestrain();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsPlayingPointAction();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsGoingToSurrender();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsAgentStunned();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetSurrenderStartTimestamp();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 /*struct*/ GetNewMeshLocation();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetDropWeaponTimestamp();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<uint8> GetDroppedWeapons();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UObject* GetCurrentRoomZone();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UObject* GetCurrentPointAction();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool GetCanReportAnyway();
    UFUNCTION(BlueprintCallable)
    FName FindSocketNameForAiming(float& InFloat, bool& outSeen, bool& outSeeThroughWindow);
    UFUNCTION(BlueprintCallable)
    uint8 EnableWalkingInDark();
    UFUNCTION(BlueprintCallable)
    uint8 EnableWalking();
    UFUNCTION(BlueprintCallable)
    uint8 EnableSprintingInDark();
    UFUNCTION(BlueprintCallable)
    uint8 EnableSprinting();
    UFUNCTION(BlueprintCallable)
    uint8 EnableADSWalking();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 ADSWalkingExtra();
};

