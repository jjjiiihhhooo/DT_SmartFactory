#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "DeliveryController.generated.h"

class ASell;
class APartsPos;


UCLASS()
class FACTORY_API ADeliveryController : public AAIController
{
	GENERATED_BODY()
public:
	ADeliveryController();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	enum class ECurrentMoveState : uint8
	{
		None,
		MovingToPartsPos,
		MovingToTargetPos,
		MovingToWorkPos,
		MovingToWorkOutPos,
		MovingToEndPos,
		MovingToEndOutPos,
		MovingToReturnPos,
		MaxCount
	};

public:
	void AIMoveToTarget();
	void InterpMoveToTarget(float DeltaTime);
	void MoveResult();
	void OnMoveCallback(FAIRequestID RequestID, const FPathFollowingResult& Result);
	void SetTargetPos(ECurrentMoveState MoveState, FVector Pos);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	TArray<FVector> TargetArray;

private:
	FVector GetCurrentTarget();
	int32 GetCurrentTargetIndex();

	ECurrentMoveState CurrentMoveState;

public:
	void SetTargetPartsPos(APartsPos* PartsPos);

	UPROPERTY()
	APartsPos* TargetPartsPos;

	UPROPERTY()
	AActor* CurAttachedParts;

public:
	void SetTargetSell(ASell* Sell);

	UPROPERTY()
	ASell* TargetSell;

public:
	void SetMove(bool Move);

private:
	bool IsMove();

	bool bMove;
};
