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
				TempWheel->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
				TempWheel->AttachToActor(ParentSell->GetTargetDelivery()->GetCurItem(), FAttachmentTransformRules::KeepWorldTransform);
				TempWheel = nullptr;
				TargetIndex++;
				bHasWheel = false;
			}
		}
		else
		{
			if (SettingIndex < WheelSettingPos.Num())
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
			else
			{
				SettingIndex = 0;
				bHasWheel = true;
			}
		}
	}
	else
	{
		if(FVector::Distance(IdlePos, Point->GetRelativeLocation()) > 3.0f)
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

	if (Item == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Item Null"));
		return;
	}
	TargetPos = Left ? Item->GetLeftWheelPosArray() : Item->GetRightWheelPosArray();
	
	
	bAction = true;
}


