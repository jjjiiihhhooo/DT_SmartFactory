#include "Sell.h"
#include "../AIController/DeliveryController.h"
#include "RobotArm.h"

ASell::ASell()
{
	PrimaryActorTick.bCanEverTick = true;
	USceneComponent* DefaultRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Default"));
	SetRootComponent(DefaultRootComp);

	TargetSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("TargetScene"));
	TargetSceneComp->SetupAttachment(RootComponent);

	WorkSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("WorkScene"));
	WorkSceneComp->SetupAttachment(RootComponent);

	OutSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("OutScene"));
	OutSceneComp->SetupAttachment(RootComponent);
}

void ASell::BeginPlay()
{
	Super::BeginPlay();
	
	bWorking = false;
}

void ASell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASell::SetActive(bool Active)
{
	bActive = Active;
}

void ASell::SetSelect(bool Select)
{
	bSelect = Select;
}

void ASell::SetWorking(bool Working)
{
	bWorking = Working;
}

bool ASell::IsActive() const
{
	return bActive;
}
 
bool ASell::IsSelect() const
{
	return bSelect;
}

bool ASell::IsWorking() const
{
	if(bLeftWorkOut && bRightWorkOut)
	{
		return true;
	}

	return false;
}

void ASell::ActionStart()
{
	LeftRobotArm->ParentSell = this;
	LeftRobotArm->ActionReady();

	RightRobotArm->ParentSell = this;
	RightRobotArm->ActionReady();
}

void ASell::ActionExit()
{
	if (!IsWorking())
	{
		return;
	}

	TargetDelivery->SetMove(true);
	TargetDelivery = nullptr;

	SetSelect(false);
	bLeftWorkOut = false;
	bRightWorkOut = false;
}

void ASell::SetLeftWorkOut(bool WorkOut)
{
	bLeftWorkOut = WorkOut;
}

void ASell::SetRightWorkOut(bool WorkOut)
{
	bRightWorkOut = WorkOut;
}

void ASell::NullRobotArms()
{
	LeftRobotArm = nullptr;
	RightRobotArm = nullptr;
}

ADeliveryController* ASell::GetTargetDelivery() const
{
	return TargetDelivery;
}