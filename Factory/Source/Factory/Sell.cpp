#include "Sell.h"
#include "DeliveryController.h"
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

void ASell::SetWorking(bool Working)
{
	bWorking = Working;
}

bool ASell::IsActive()
{
	return bActive;
}

bool ASell::IsWorking()
{
	return bWorking;
}

void ASell::ActionStart()
{
	RobotArm->ParentSell = this;
	RobotArm->ActionReady();
}

void ASell::ActionExit()
{
	TargetDelivery->SetMove(true);
	TargetDelivery = nullptr;
	SetWorking(false);
}