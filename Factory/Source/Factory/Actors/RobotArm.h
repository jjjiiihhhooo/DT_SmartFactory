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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	USceneComponent* Point;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	TArray<FVector> TargetPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	float MoveSpeed;
	
	bool bAction;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASell* ParentSell;

private:
	int32 Index;
};
