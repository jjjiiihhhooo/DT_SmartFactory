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
		MovingToReturnPos
	};

public:
	void AIMoveToTarget();
	
	void InterpMoveToTarget(float DeltaTime);
	void MoveResult();

	void SetMoveTarget(FVector Target, ECurrentMoveState State);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector PartsPickPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector TargetPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector WorkPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector WorkOutPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector EndPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector EndOutPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector ReturnPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector CurTargetPos;

public:
	void SetTargetPartsPos(APartsPos* PartsPos);

	APartsPos* TargetPartsPos;
	AActor* CurAttachedParts;
public:
	void SetTargetSell(ASell* Sell);

	ASell* TargetSell;

public:
	void OnMoveCallback(FAIRequestID RequestID, const FPathFollowingResult& Result);

	void SetMove(bool Move);

private:
	bool IsMove();

	bool bMove;

	ECurrentMoveState CurrentMoveState;
};
