#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DeliveryController.generated.h"

UCLASS()
class FACTORY_API ADeliveryController : public AAIController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	void MoveToTarget();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EndPos;

public:
	void SetReady(bool Ready);
	void SetMove(bool Move);

private:
	bool bReady;
	bool bMove;
};
