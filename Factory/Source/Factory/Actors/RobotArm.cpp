#include "RobotArm.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SceneComponent.h"
#include "../AIController/DeliveryController.h"
#include "../Managers/Spawner.h"
#include "Sell.h"
#include "Item.h"

ARobotArm::ARobotArm()
{
	PrimaryActorTick.bCanEverTick = true;
	TargetIndex = 0;
	SettingIndex = 0;
}

void ARobotArm::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARobotArm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bAction)
	{
		Action(DeltaTime);
	}
}

void ARobotArm::Action(float DeltaTime)
{
	if (TargetIndex < TargetPos.Num())
	{
		if (bHasWheel)
		{
			AttachWheelToCar(DeltaTime);
		}
		else
		{
			if (SettingIndex < WheelSettingPos.Num())
			{
				GetWheelFromStorage(DeltaTime);
			}
			else
			{
				SettingIndex = 0;
				bHasWheel = true;
			}
		}
	}
	else
	{
		ReturnToIdlePos(DeltaTime);
	}
}

void ARobotArm::ActionExit()
{
	TargetIndex = 0;
	bAction = false;

	if (Left)
	{
		ParentSell->SetLeftWorkOut(true);
	}
	else
	{
		ParentSell->SetRightWorkOut(true);
	}

	ParentSell->ActionExit();
}

void ARobotArm::ActionReady()
{
	AItem* Item = ParentSell->GetTargetDelivery()->GetCurItem();

	TargetPos = Left ? Item->GetLeftWheelPosArray() : Item->GetRightWheelPosArray();
	
	bAction = true;
}

void ARobotArm::AttachWheelToCar(float DeltaTime)
{
	FVector Pos = Point->GetComponentLocation();

	if (FVector::Distance(TargetPos[TargetIndex], Pos) > 3.0f)
	{
		Pos = FMath::VInterpConstantTo(Pos, TargetPos[TargetIndex], DeltaTime, MoveSpeed);
		Point->SetWorldLocation(Pos);

		if (TempWheel)
		{
			FVector Dir = Pos - TempWheel->GetActorLocation();
			FRotator Rot = Dir.Rotation();
			TempWheel->SetActorRotation(Rot);
		}
	}
	else
	{
		AItem* Item = ParentSell->GetTargetDelivery()->GetCurItem();
		Item->AddAttachedWheel(TempWheel);

		TempWheel = nullptr;
		TargetIndex++;
		bHasWheel = false;
	}
}

void ARobotArm::GetWheelFromStorage(float DeltaTime)
{
	FVector Pos = Point->GetRelativeLocation();

	if (FVector::Distance(WheelSettingPos[SettingIndex], Pos) > 3.0f)
	{
		Pos = FMath::VInterpConstantTo(Pos, WheelSettingPos[SettingIndex], DeltaTime, MoveSpeed);
		Point->SetRelativeLocation(Pos);
	}
	else
	{
		if (SettingIndex == 2)
		{
			AActor* SpawnerActor = UGameplayStatics::GetActorOfClass(GetWorld(), ASpawner::StaticClass());
			ASpawner* Spawner = Cast<ASpawner>(SpawnerActor);

			TempWheel = Spawner->GetWheel();
			TempWheel->SetActorLocationAndRotation(Point->GetComponentLocation(), FRotator::ZeroRotator);
			TempWheel->AttachToComponent(Point, FAttachmentTransformRules::KeepWorldTransform);

		}

		SettingIndex++;
	}
}


void ARobotArm::ReturnToIdlePos(float DeltaTime)
{
	if (FVector::Distance(IdlePos, Point->GetRelativeLocation()) > 3.0f)
	{
		FVector Pos = Point->GetRelativeLocation();
		Pos = FMath::VInterpConstantTo(Pos, IdlePos, DeltaTime, MoveSpeed);
		Point->SetRelativeLocation(Pos);
	}
	else
	{
		Point->SetRelativeLocation(IdlePos);
		ActionExit();
	}
}