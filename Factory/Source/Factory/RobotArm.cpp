#include "RobotArm.h"
#include "Sell.h"
#include "Components/SceneComponent.h"

ARobotArm::ARobotArm()
{
	PrimaryActorTick.bCanEverTick = true;
	Index = 0;
}

void ARobotArm::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARobotArm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bAction)
	{
		Action(DeltaTime);
	}
}

void ARobotArm::Action(float DeltaTime)
{
	if (Index < TargetPos.Num())
	{
		FVector Pos;
		Pos = Point->GetRelativeLocation();

		if (FVector::Distance(TargetPos[Index], Pos) > 3.0f)
		{
			Pos = FMath::VInterpConstantTo(Pos, TargetPos[Index], DeltaTime, MoveSpeed);
			Point->SetRelativeLocation(Pos);
		}
		else
		{
			Index++;
		}
	}
	else
	{
		ActionExit();
		Index = 0;
	}
}

void ARobotArm::ActionExit()
{
	bAction = false;
	ParentSell->ActionExit();
}

void ARobotArm::ActionReady()
{
	bAction = true;
}


