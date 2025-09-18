#include "ItemPos.h"
#include "../Managers/Spawner.h"
#include "Kismet/GameplayStatics.h"

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
			SetItemLocation(SpawnPos);
			SetItemRotation(FRotator::ZeroRotator);
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

void AItemPos::SetItem(AActor* NewItem)
{
	Item = NewItem;
}

void AItemPos::SetItemLocation(FVector Pos)
{
	Item->SetActorLocation(Pos);
}

void AItemPos::SetItemRotation(FRotator Rot)
{
	Item->SetActorRotation(Rot);
}

void AItemPos::SetItemAttach(AActor* Parent)
{
	Item->AttachToActor(Parent, FAttachmentTransformRules::KeepWorldTransform);
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