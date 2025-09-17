#include "Manager.h"
#include "Spawner.h"
#include "../AIController/DeliveryController.h"
#include "../Actors/Sell.h"
#include "../Actors/PartsPos.h"
#include "Engine/TriggerBox.h"
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
	if (OrderCount <= 0)
	{
		return;
	}

	if (!SpawnTime(DeltaTime))
	{
		return;
	}

	if (ReadyController == nullptr)
	{
		if (ACharacter* Delivery = Spawner->GetDelivery())
		{
			if (AController* Controller = Delivery->GetController())
			{
				ReadyController = Cast<ADeliveryController>(Controller);
			}
		}
	}
	else
	{
		if (APartsPos* FoundPartsPos = SelectPartsPos())
		{
			if (ASell* FoundSell = SelectSell())
			{
				FoundPartsPos->SetSelect(true);
				FoundSell->SetWorking(true);

				ReadyController->SetTargetPos(ADeliveryController::ECurrentMoveState::MovingToIdlePos, IdlePos);
				ReadyController->SetTargetPos(ADeliveryController::ECurrentMoveState::MovingToEndOutPos, EndOutPos);
				ReadyController->SetTargetPos(ADeliveryController::ECurrentMoveState::MovingToReturnPos, ReturnPos);
				ReadyController->SetTargetSell(FoundSell);
				ReadyController->SetTargetPartsPos(FoundPartsPos);

				ReadyController->SetMoveState(ADeliveryController::ECurrentMoveState::MovingToIdlePos);
				ReadyController->AIMoveToTarget();

				ReadyController = nullptr;

				CurTime = MaxTime;
				OrderCount--;
			}
		}
	}
}

APartsPos* AManager::SelectPartsPos()
{
	for (APartsPos* CurParts : PartsPosArray)
	{
		if (CurParts->Parts)
		{
			if (!CurParts->IsSelect() && CurParts->IsReady())
			{
				return CurParts;
			}
		}
	}

	return nullptr;
}


ASell* AManager::SelectSell()
{
	for (ASell* CurSell : SellArray)
	{
		if (CurSell->IsActive())
		{
			if (!CurSell->IsWorking())
			{
				return CurSell;
			}
		}
	}

	return nullptr;
}

FVector AManager::GetEndAreaClosestPoint(const FVector& InputPoint)
{
	FVector ReturnPoint = FVector::ZeroVector;
	
	if (UBoxComponent* Box = EndArea->FindComponentByClass<UBoxComponent>())
	{
		Box->GetClosestPointOnCollision(InputPoint, ReturnPoint);
	}

	return ReturnPoint;
}


void AManager::SetReady(bool Ready)
{
	bReady = Ready;
}

bool AManager::IsReady()
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