#include "DeliveryController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "../Managers/Spawner.h"
#include "../Managers/Manager.h"
#include "../Actors/Sell.h"
#include "../Actors/Item.h"
#include "../Actors/ItemPos.h"


ADeliveryController::ADeliveryController()
{
	TargetArray.SetNum((int32)ECurrentMoveState::MaxCount);
}

void ADeliveryController::BeginPlay()
{
	Super::BeginPlay();

	if (UPathFollowingComponent* PathFollowingComp = GetPathFollowingComponent())
	{
		PathFollowingComp->OnRequestFinished.AddUObject(this, &ADeliveryController::OnMoveCallback);
	}
}

void ADeliveryController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsMove())
	{
		InterpMoveToTarget(DeltaTime);
	}
}

void ADeliveryController::AIMoveToTarget()
{
	EPathFollowingRequestResult::Type MoveResult = MoveToLocation(GetCurrentTarget(), 5.0f);
}

void ADeliveryController::InterpMoveToTarget(float DeltaTime)
{
	FVector Pos = GetCharacter()->GetActorLocation();
	FVector Target = GetCurrentTarget();

	if (FVector::Distance(Pos, Target) > 5.0f)
	{
		Pos = FMath::VInterpConstantTo(Pos, Target, DeltaTime, 700);
		GetCharacter()->SetActorLocation(Pos);
	}
	else
	{
		MoveResult();
	}
}

void ADeliveryController::MoveResult()
{
	switch (CurrentMoveState)
	{
		case ECurrentMoveState::MovingToIdlePos:
		{
			SetMoveState(ECurrentMoveState::MovingToItemPos);
			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToItemPos: 
		{
			TargetItemPos->Item->SetItemLocation(GetCharacter()->GetActorLocation());
			TargetItemPos->Item->SetItemRotation(GetCharacter()->GetActorRotation());
			TargetItemPos->Item->SetItemAttach(GetCharacter());

			CurAttachedItem = TargetItemPos->Item;

			if (CurAttachedItem == nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("CurAttachedItem Null"));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("CurAttachedItem Set"));
			}

			TargetItemPos->Item = nullptr;
			TargetItemPos->SetSelect(false);

			SetMoveState(ECurrentMoveState::MovingToTargetPos);
			AIMoveToTarget();
			break;
		}
		case ECurrentMoveState::MovingToTargetPos:
		{
			SetMoveState(ECurrentMoveState::MovingToWorkPos);
			
			FVector TargetVector = GetCurrentTarget() - GetCharacter()->GetActorLocation();
			TargetVector.Z = 0;

			FRotator TargetRotation = TargetVector.Rotation();
			GetCharacter()->SetActorRotation(TargetRotation);

			SetMove(true);

			break;
		}
		case ECurrentMoveState::MovingToWorkPos:
		{
			SetMove(false);
			SetMoveState(ECurrentMoveState::MovingToWorkOutPos);


			TargetSell->ActionStart();

			break;
		}
		case ECurrentMoveState::MovingToWorkOutPos:
		{
			SetMove(false);

			SetMoveState(ECurrentMoveState::MovingToEndPos);

			AActor* ManagerActor = UGameplayStatics::GetActorOfClass(GetWorld(), AManager::StaticClass());
			AManager* Manager = Cast<AManager>(ManagerActor);

			FVector Cur = GetCharacter()->GetActorLocation();
			FVector Target = Manager->GetEndAreaClosestPoint(Cur);

			SetTargetPos(CurrentMoveState, Target);

			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToEndPos:
		{
			SetMoveState(ECurrentMoveState::MovingToEndOutPos);

			CurAttachedItem->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			AActor* SpawnerActor = UGameplayStatics::GetActorOfClass(GetWorld(), ASpawner::StaticClass());
			ASpawner* Spawner = Cast<ASpawner>(SpawnerActor);

			AItem* Item = Cast<AItem>(CurAttachedItem);
			Spawner->ReturnItem(Item);

			CurAttachedItem = nullptr;

			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToEndOutPos:
		{
			SetMoveState(ECurrentMoveState::MovingToReturnPos);

			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToReturnPos:
		{
			SetMoveState(ECurrentMoveState::None);

			AActor* SpawnerActor = UGameplayStatics::GetActorOfClass(GetWorld(), ASpawner::StaticClass());
			ASpawner* Spawner = Cast<ASpawner>(SpawnerActor);
			Spawner->ReturnDelivery(GetCharacter());

			break;
		}
	}
}

void ADeliveryController::OnMoveCallback(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if (Result.Code == EPathFollowingResult::Success)
	{
		MoveResult();
	}
}

void ADeliveryController::SetMoveState(ECurrentMoveState MoveState)
{
	CurrentMoveState = MoveState;
}

void ADeliveryController::SetTargetPos(ECurrentMoveState MoveState, FVector Pos)
{
	TargetArray[(int32)MoveState] = Pos;
}

FVector ADeliveryController::GetCurrentTarget()
{
	return TargetArray[GetCurrentTargetIndex()];
}

int32 ADeliveryController::GetCurrentTargetIndex()
{
	return (int32)CurrentMoveState;
}

void ADeliveryController::SetTargetItemPos(AItemPos* ItemPos)
{
	TargetItemPos = ItemPos;
	SetTargetPos(ECurrentMoveState::MovingToItemPos, ItemPos->IdlePos);
}

AItem* ADeliveryController::GetCurItem()
{
	return CurAttachedItem;
}

void ADeliveryController::SetTargetSell(ASell* Sell)
{
	UE_LOG(LogTemp, Warning, TEXT("Name %s"), *Sell->GetName());
	
	TargetSell = Sell;
	Sell->TargetDelivery = this;
	
	if (Sell->TargetDelivery == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Sell Target Null"));
	}

	SetTargetPos(ECurrentMoveState::MovingToTargetPos, Sell->TargetSceneComp->GetComponentLocation());
	SetTargetPos(ECurrentMoveState::MovingToWorkPos, Sell->WorkSceneComp->GetComponentLocation());
	SetTargetPos(ECurrentMoveState::MovingToWorkOutPos, Sell->OutSceneComp->GetComponentLocation());
}

void ADeliveryController::SetMove(bool Move)
{
	bMove = Move;
}

bool ADeliveryController::IsMove()
{
	return bMove;
}

