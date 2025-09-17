#include "DeliveryController.h"
#include "../Managers/Spawner.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "../Actors/Sell.h"
#include "../Actors/PartsPos.h"

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
		case ECurrentMoveState::MovingToPartsPos: 
		{
			TargetPartsPos->SetPartsLocation(GetCharacter()->GetActorLocation());
			TargetPartsPos->SetPartsRotation(GetCharacter()->GetActorRotation());
			TargetPartsPos->SetPartsAttach(GetCharacter());

			CurAttachedParts = TargetPartsPos->Parts;
			TargetPartsPos->Parts = nullptr;
			TargetPartsPos->SetSelect(false);

			CurrentMoveState = ECurrentMoveState::MovingToTargetPos;
			AIMoveToTarget();
			break;
		}
		case ECurrentMoveState::MovingToTargetPos:
		{
			CurrentMoveState = ECurrentMoveState::MovingToWorkPos;
			
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
			CurrentMoveState = ECurrentMoveState::MovingToWorkOutPos;

			TargetSell->ActionStart();

			break;
		}
		case ECurrentMoveState::MovingToWorkOutPos:
		{
			SetMove(false);
			CurrentMoveState = ECurrentMoveState::MovingToEndPos;
				
			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToEndPos:
		{
			CurrentMoveState = ECurrentMoveState::MovingToEndOutPos;

			CurAttachedParts->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			AActor* SpawnerActor = UGameplayStatics::GetActorOfClass(GetWorld(), ASpawner::StaticClass());
			ASpawner* Spawner = Cast<ASpawner>(SpawnerActor);
			Spawner->ReturnParts(CurAttachedParts);
			CurAttachedParts = nullptr;

			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToEndOutPos:
		{
			CurrentMoveState = ECurrentMoveState::MovingToReturnPos;
			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToReturnPos:
		{
			CurrentMoveState = ECurrentMoveState::None;

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

void ADeliveryController::SetTargetPartsPos(APartsPos* PartsPos)
{
	TargetPartsPos = PartsPos;
	SetTargetPos(ECurrentMoveState::MovingToPartsPos, PartsPos->IdlePos);

	CurrentMoveState = ECurrentMoveState::MovingToPartsPos;
}

void ADeliveryController::SetTargetSell(ASell* Sell)
{
	TargetSell = Sell;
	Sell->TargetDelivery = this;
	
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

