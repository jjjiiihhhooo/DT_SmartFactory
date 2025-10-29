#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Sell.generated.h"

class ARobotArm;
class ADeliveryController;

UCLASS()
class FACTORY_API ASell : public AActor
{
	GENERATED_BODY()
	
public:	
	ASell();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	void SetActive(bool Active);
	void SetSelect(bool Select);	
	void SetWorking(bool Working);

	bool IsActive() const;
	bool IsSelect() const;
	bool IsWorking() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* TargetSceneComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* WorkSceneComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* OutSceneComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSelect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWorking;

public:
	void ActionStart();
	void ActionExit();

	void SetLeftWorkOut(bool WorkOut);
	void SetRightWorkOut(bool WorkOut);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ARobotArm* LeftRobotArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ARobotArm* RightRobotArm;

	bool bLeftWorkOut;
	bool bRightWorkOut;

public:
	ADeliveryController* GetTargetDelivery() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADeliveryController* TargetDelivery;
};
