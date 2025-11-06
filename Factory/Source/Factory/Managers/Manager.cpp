#include "Manager.h"
#include "DataManager.h"
#include "Spawner.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"

AManager::AManager()
{
	PrimaryActorTick.bCanEverTick = true;
	MaxTime = 1.0f;
	CurTime = 1.0f;
}

void AManager::BeginPlay()
{
	Super::BeginPlay();
}

void AManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (IsReady())
	{
		Run(DeltaTime);
	}
}

void AManager::Run(float DeltaTime)
{
	if (DataManager->GetOrderCount() <= 0)
	{
		return;
	}

	if (!SpawnTime(DeltaTime))
	{
		return;
	}

	if (DataManager->IsDeliveryFull())
	{
		return;
	}

	if (!DataManager->IsControllerExist())
	{
		DataManager->SetReadyController();
	}
	else
	{
		if (DataManager->StartDeliveryProcess())
		{
			DataManager->IncreaseCurrentDeliveryCount();
			DataManager->DecreaseOrderCount();

			CurTime = MaxTime;
		}

	}
}

void AManager::Exit()
{
	DataManager->ExitDataManager();
	Spawner->ExitSpawner();
}

FVector AManager::GetEndAreaClosestPoint(const FVector& InputPoint) const
{
	FVector ReturnPoint = FVector::ZeroVector;
	
	if (UBoxComponent* Box = DataManager->GetEndAreaBoxComp())
	{
		Box->GetClosestPointOnCollision(InputPoint, ReturnPoint);
	}

	return ReturnPoint;
}

void AManager::SetReady(bool Ready)
{
	bReady = Ready;
}

bool AManager::IsReady() const
{
	return bReady;
}

bool AManager::SpawnTime(float DeltaTime)
{
	if (CurTime > 0)
	{
		CurTime -= DeltaTime;
		return false;
	}

	return true;
}

ADataManager* AManager::GetDataManager() const
{
	return DataManager;
}

ASpawner* AManager::GetSpawner() const
{
	return Spawner;
}