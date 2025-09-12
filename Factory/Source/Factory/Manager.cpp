#include "Manager.h"
#include "Spawner.h"
#include "DeliveryController.h"
#include "Sell.h"

AManager::AManager()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AManager::BeginPlay()
{
	Super::BeginPlay();
	OrderCount = 10;
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
		UE_LOG(LogTemp, Display, TEXT("OrderCount <= 0"));
		return;
	}

	if (ReadyController == nullptr)
	{
		UE_LOG(LogTemp, Display, TEXT("ReadyController nullptr"));
		
		if (ACharacter* Delivery = Spawner->GetDelivery())
		{
			UE_LOG(LogTemp, Display, TEXT("Delivery Suc"));

			if (AController* Controller = Delivery->GetController())
			{
				UE_LOG(LogTemp, Display, TEXT("Controller Suc"));
			
				ReadyController = Cast<ADeliveryController>(Controller);
				if (ReadyController != nullptr)
				{
					UE_LOG(LogTemp, Display, TEXT("Cast Suc"));
				}
			}
		}
	}
	else
	{
		FVector Pos = ReadyController->GetCharacter()->GetActorLocation();
		
		if (FVector::Distance(Pos, IdlePos) > 5.0f)
		{
			Pos = FMath::VInterpConstantTo(Pos, IdlePos, DeltaTime, TestSpeed);
			ReadyController->GetCharacter()->SetActorLocation(Pos);
		}
		else
		{
			if (ASell* FoundSell = SelectSell())
			{
				ReadyController->TargetPos = FoundSell->TargetSceneComp->GetComponentLocation();
				ReadyController->MoveToTarget();
				ReadyController = nullptr;
				OrderCount--;
			}
		}
	}
}

ASell* AManager::SelectSell()
{
	for (ASell* CurSell : SellArray)
	{
		if (CurSell->IsActive())
		{
			if (!CurSell->IsWorking())
			{
				UE_LOG(LogTemp, Warning, TEXT("SelectSell True"));
				CurSell->SetWorking(true);
				return CurSell;
			}
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("SelectSell null"));
	return nullptr;
}

void AManager::SetReady(bool Ready)
{
	bReady = Ready;
}

bool AManager::IsReady()
{
	return bReady;
}