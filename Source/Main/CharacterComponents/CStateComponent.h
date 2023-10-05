#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStateComponent.generated.h"

UENUM(BlueprintType)
enum class EStateType : uint8
{
	Idle, Jump, Equip, Action, Hitted, Dead, Max
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateTypeChangedSignature, EStateType, InPrevType, EStateType, InNewType);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAIN_API UCStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCStateComponent();

protected:
	virtual void BeginPlay() override;

public:		// Get StateType
	bool IsIdleMode() { return Type == EStateType::Idle; }
	//bool IsWarpMode() { return Type == EStateType::Warp; }		// qŰ�� ������ ������ �ڷ���Ʈ(�뽬)
	bool IsJumpMode() { return Type == EStateType::Jump; }
	bool IsEquipMode() { return Type == EStateType::Equip; }
	bool IsActionMode() { return Type == EStateType::Action; }
	bool IsHittedMode() { return Type == EStateType::Hitted; }
	bool IsDeadMode() { return Type == EStateType::Dead; }
	
	EStateType GetType() { return Type; }

public:		// Set StateType
	void SetIdleMode();
	//void SetWarpMode();
	void SetJumpMode();
	void SetEquipMode();
	void SetActionMode();
	void SetHittedMode();
	void SetDeadMode();

	void ChangeType(EStateType InNewType);

public:
	UPROPERTY(BlueprintAssignable)
		FStateTypeChangedSignature OnStateTypeChanged;

private:
	EStateType Type;
};