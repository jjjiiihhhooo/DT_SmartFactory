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

void ADataManager::ExitDataManager()
{
	OnOrderCountUpdate.Clear();
	OnDeliveryCountUpdate.Clear();
	OnCompletedCountUpdate.Clear();

	for(ASell* Sell : SellArray)
	{
		if(Sell)
		{
			Sell->NullRobotArms();
		}
	}
}

bool ADataManager::IsControllerExist() const
{
	return ReadyController != nullptr;
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

ADeliveryController* ADataManager::GetReadyController() const
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

AItemPos* ADataManager::SelectItemPos() const
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


ASell* ADataManager::SelectSell() const
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

ASell* ADataManager::GetSellAt(int32 Index) const
{
	if (SellArray.IsValidIndex(Index))
	{
		return SellArray[Index];
	}

	return nullptr;
}

void ADataManager::ToggleSellState(int32 Index) const
{
	if (ASell* Sell = GetSellAt(Index))
	{
		Sell->SetActive(!Sell->IsActive());
	}
}

UBoxComponent* ADataManager::GetEndAreaBoxComp() const
{
	return EndArea->FindComponentByClass<UBoxComponent>();
}


int32 ADataManager::GetOrderCount() const
{
	return OrderCount;
}

int32 ADataManager::GetCompletedCount() const
{
	return CompletedCount;
}

int32 ADataManager::GetDeliveryCount() const
{
	return DeliveryCount;
}

int32 ADataManager::GetCurrentDeliveryCount() const
{
	return CurrentDeliveryCount;
}

void ADataManager::IncreaseOrderCount()
{
	OrderCount++;
	OnOrderCountUpdate.Broadcast();
}

void ADataManager::DecreaseOrderCount()
{
	if (GetOrderCount() > 0)
	{
		OrderCount--;
		OnOrderCountUpdate.Broadcast();
	}
}

void ADataManager::IncreaseDeliveryCount()
{
	DeliveryCount++;
	OnDeliveryCountUpdate.Broadcast();
}

void ADataManager::DecreaseDeliveryCount()
{
	if(GetDeliveryCount() > 0)
	{
		DeliveryCount--;
		OnDeliveryCountUpdate.Broadcast();
	}
}

void ADataManager::IncreaseCompletedCount()
{
	CompletedCount++;
	OnCompletedCountUpdate.Broadcast();
}

void ADataManager::IncreaseCurrentDeliveryCount()
{
	CurrentDeliveryCount++;
}

void ADataManager::DecreaseCurrentDeliveryCount()
{
	if(GetCurrentDeliveryCount() > 0)
	{
		CurrentDeliveryCount--;
	}
}

void ADataManager::SetOrderCount(int32 Count)
{
	OrderCount = Count;
}

bool ADataManager::IsDeliveryFull() const
{
	return GetCurrentDeliveryCount() >= GetDeliveryCount();
}