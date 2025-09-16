#include "PartsPos.h"
#include "Spawner.h"
#include "Kismet/GameplayStatics.h"

APartsPos::APartsPos()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APartsPos::BeginPlay()
{
	Super::BeginPlay();
	
}

void APartsPos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsSelect())
	{
		if (Parts == nullptr)
		{
			AActor* SpawnerActor = UGameplayStatics::GetActorOfClass(GetWorld(), ASpawner::StaticClass());
			ASpawner* Spawner = Cast<ASpawner>(SpawnerActor);
			
			Parts = Spawner->GetParts();
			Parts->SetActorLocationAndRotation(SpawnPos, FRotator::ZeroRotator);
			bReady = false;
		}
		else
		{
			FVector PartsPos = Parts->GetActorLocation();
			if (FVector::Distance(PartsPos, IdlePos) > 5.0f && !bReady)
			{
				PartsPos = FMath::VInterpConstantTo(PartsPos, IdlePos, DeltaTime, 700);
				Parts->SetActorLocation(PartsPos);
			}
			else
			{
				bReady = true;
			}
		}
	}
}

void APartsPos::SetSelect(bool Select)
{
	bSelect = Select;
}

bool APartsPos::IsSelect()
{
	return bSelect;
}

bool APartsPos::IsReady()
{
	return bReady;
}