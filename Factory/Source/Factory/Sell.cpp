#include "Sell.h"


ASell::ASell()
{
	PrimaryActorTick.bCanEverTick = true;
	USceneComponent* DefaultRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Default"));
	SetRootComponent(DefaultRootComp);

	TargetSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("TargetScene"));
	TargetSceneComp->SetupAttachment(RootComponent);
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
