#include "DataManager.h"
#include "Spawner.h"
#include "../AIController/DeliveryController.h"
#include "../Actors/Sell.h"
#include "../Actors/ItemPos.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TriggerBox.h"
#include "Components/BoxComponent.h"

ADataManager::ADataManager()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ADataManager::BeginPlay()
{
	Super::BeginPlay();
}

bool ADataManager::IsControllerExist()
{
	if (ReadyController)
	{
		return true;
	}

	return false;
}

void ADataManager::SetReadyController()
{
	if (ACharacter* Delivery = Spawner->GetDelivery())
	{
		if (AController* Controller = Delivery->GetController())
		{
			ReadyController = Cast<ADeliveryController>(Controller);
		}
	}
}

ADeliveryController* ADataManager::GetReadyController()
{
	return ReadyController;
}

void ADataManager::DeliverySetTarget(ASell* Sell, AItemPos* ItemPos)
{
	ReadyController->SetTargetPos(ADeliveryController::ECurrentMoveState::MovingToIdlePos, IdlePos);
	ReadyController->SetTargetPos(ADeliveryController::ECurrentMoveState::MovingToEndOutPos, EndOutPos);
	ReadyController->SetTargetPos(ADeliveryController::ECurrentMoveState::MovingToReturnPos, ReturnPos);
	ReadyController->SetMoveState(ADeliveryController::ECurrentMoveState::MovingToIdlePos);
	ReadyController->SetTargetSell(Sell);
	ReadyController->SetTargetItemPos(ItemPos);
}

bool ADataManager::StartDeliveryProcess()
{
	if (AItemPos* FoundItemPos = SelectItemPos())
	{
		if (ASell* FoundSell = SelectSell())
		{
			FoundItemPos->SetSelect(true);
			FoundSell->SetWorking(true);

			DeliverySetTarget(FoundSell, FoundItemPos);

			ReadyController->AIMoveToTarget();

			ReadyController = nullptr;

			return true;
		}
	}

	return false;
}

AItemPos* ADataManager::SelectItemPos()
{
	for (AItemPos* CurItem : ItemPosArray)
	{
		if (CurItem->Item)
		{
			if (!CurItem->IsSelect() && CurItem->IsReady())
			{
				return CurItem;
			}
		}
	}

	return nullptr;
}


ASell* ADataManager::SelectSell()
{
	for (ASell* CurSell : SellArray)
	{
		if (CurSell->IsActive())
		{
			if (!CurSell->IsSelect())
			{
				CurSell->SetSelect(true);
				return CurSell;
			}
		}
	}

	return nullptr;
}

UBoxComponent* ADataManager::GetEndAreaBoxComp()
{
	return EndArea->FindComponentByClass<UBoxComponent>();
}


int32 ADataManager::GetOrderCount()
{
	return OrderCount;
}

int32 ADataManager::GetCurrentCount()
{
	return CurrentCount;
}

int32 ADataManager::GetCompleteCount()
{
	return CompleteCount;
}

void ADataManager::SetOrderCount(int32 Count)
{
	OrderCount = Count;
}