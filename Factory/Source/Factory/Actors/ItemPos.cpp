#include "ItemPos.h"
#include "../Managers/Spawner.h"
#include "Kismet/GameplayStatics.h"
#include "Item.h"

AItemPos::AItemPos()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItemPos::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItemPos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsSelect())
	{
		if (Item == nullptr)
		{
			AActor* SpawnerActor = UGameplayStatics::GetActorOfClass(GetWorld(), ASpawner::StaticClass());
			ASpawner* Spawner = Cast<ASpawner>(SpawnerActor);
			
			SetItem(Spawner->GetItem());
			Item->SetItemLocation(SpawnPos);
			Item->SetItemRotation(FRotator::ZeroRotator);
			bReady = false;
		}
		else
		{
			FVector ItemPos = Item->GetActorLocation();
			if (FVector::Distance(ItemPos, IdlePos) > 5.0f && !bReady)
			{
				ItemPos = FMath::VInterpConstantTo(ItemPos, IdlePos, DeltaTime, 400);
				Item->SetActorLocation(ItemPos);
			}
			else
			{
				bReady = true;
			}
		}
	}
}

void AItemPos::SetItem(AItem* NewItem)
{
	Item = NewItem;
}



void AItemPos::SetSelect(bool Select)
{
	bSelect = Select;
}

bool AItemPos::IsSelect()
{
	return bSelect;
}

bool AItemPos::IsReady()
{
	return bReady;
}