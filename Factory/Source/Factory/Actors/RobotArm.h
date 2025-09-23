#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RobotArm.generated.h"

class USceneComponent;
class ASell;

UCLASS()
class FACTORY_API ARobotArm : public AActor
{
	GENERATED_BODY()
	
public:	
	ARobotArm();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	void Action(float DeltaTime);
	void ActionExit();
	void ActionReady();
	void AttachWheelToCar(float DeltaTime);
	void GetWheelFromStorage(float DeltaTime);
	void ReturnToIdlePos(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	USceneComponent* Point;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	TArray<FVector> TargetPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	TArray<FVector> WheelSettingPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector IdlePos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	float MoveSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Left;

private:
	bool bAction;
	bool bHasWheel;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASell* ParentSell;

	UPROPERTY()
	AActor* TempWheel;

private:
	int32 TargetIndex;
	int32 SettingIndex;
};
