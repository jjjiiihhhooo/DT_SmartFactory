#include "Manager.h"
#include "Spawner.h"
#include "DeliveryController.h"
#include "Sell.h"
#include "PartsPos.h"

AManager::AManager()
{
	PrimaryActorTick.bCanEverTick = true;

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
		FVector Pos = ReadyController->GetCharacter()->GetActorLocation();
		
		if (FVector::Distance(Pos, IdlePos) > 5.0f)
		{
			Pos = FMath::VInterpConstantTo(Pos, IdlePos, DeltaTime, 1000);
			ReadyController->GetCharacter()->SetActorLocation(Pos);
		}
		else
		{
			if (APartsPos* FoundPartsPos = SelectPartsPos())
			{
				if (ASell* FoundSell = SelectSell())
				{
					FoundPartsPos->SetSelect(true);
					FoundSell->SetWorking(true);
					ReadyController->EndPos = EndPos;
					ReadyController->EndOutPos = EndOutPos;
					ReadyController->ReturnPos = ReturnPos;
					ReadyController->SetTargetSell(FoundSell);

					ReadyController->SetTargetPartsPos(FoundPartsPos);
					ReadyController->AIMoveToTarget();

					ReadyController = nullptr;
					OrderCount--;
				}
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

void AManager::SetReady(bool Ready)
{
	bReady = Ready;
}

bool AManager::IsReady()
{
	return bReady;
}