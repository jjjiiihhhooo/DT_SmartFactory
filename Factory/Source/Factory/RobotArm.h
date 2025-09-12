#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RobotArm.generated.h"

UCLASS()
class FACTORY_API ARobotArm : public AActor
{
	GENERATED_BODY()
	
public:	
	ARobotArm();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
