#include "DeliveryController.h"
#include "Spawner.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Sell.h"
#include "PartsPos.h"

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
	EPathFollowingRequestResult::Type MoveResult = MoveToLocation(CurTargetPos, 5.0f);
}

void ADeliveryController::InterpMoveToTarget(float DeltaTime)
{
	FVector Pos = GetCharacter()->GetActorLocation();

	if (FVector::Distance(Pos, CurTargetPos) > 5.0f)
	{
		Pos = FMath::VInterpConstantTo(Pos, CurTargetPos, DeltaTime, 700);
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
			TargetPartsPos->Parts->SetActorLocation(GetCharacter()->GetActorLocation());
			TargetPartsPos->Parts->SetActorRotation(GetCharacter()->GetActorRotation());
			TargetPartsPos->Parts->AttachToActor(GetCharacter(), FAttachmentTransformRules::KeepWorldTransform);
			CurAttachedParts = TargetPartsPos->Parts;
			TargetPartsPos->Parts = nullptr;
			TargetPartsPos->SetSelect(false);

			SetMoveTarget(TargetPos, ECurrentMoveState::MovingToTargetPos);
			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToTargetPos:
		{
			SetMoveTarget(WorkPos, ECurrentMoveState::MovingToWorkPos);

			FVector TargetVector = WorkPos - GetCharacter()->GetActorLocation();
			TargetVector.Z = 0;

			FRotator TargetRotation = TargetVector.Rotation();
			GetCharacter()->SetActorRotation(TargetRotation);

			SetMove(true);

			break;
		}
		case ECurrentMoveState::MovingToWorkPos:
		{
			SetMove(false);
			SetMoveTarget(WorkOutPos, ECurrentMoveState::MovingToWorkOutPos);

			TargetSell->ActionStart();

			break;
		}
		case ECurrentMoveState::MovingToWorkOutPos:
		{
			SetMove(false);
			SetMoveTarget(EndPos, ECurrentMoveState::MovingToEndPos);
			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToEndPos:
		{
			SetMoveTarget(EndOutPos, ECurrentMoveState::MovingToEndOutPos);

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
			SetMoveTarget(ReturnPos, ECurrentMoveState::MovingToReturnPos);
			AIMoveToTarget();

			break;
		}
		case ECurrentMoveState::MovingToReturnPos:
		{
			SetMoveTarget(TargetPos, ECurrentMoveState::None);

			AActor* SpawnerActor = UGameplayStatics::GetActorOfClass(GetWorld(), ASpawner::StaticClass());
			ASpawner* Spawner = Cast<ASpawner>(SpawnerActor);
			Spawner->ReturnDelivery(GetCharacter());

			break;
		}
	}
}

void ADeliveryController::SetMoveTarget(FVector Target, ECurrentMoveState State)
{
	CurTargetPos = Target;
	CurrentMoveState = State;
}

void ADeliveryController::SetTargetPartsPos(APartsPos* PartsPos)
{
	TargetPartsPos = PartsPos;
	PartsPickPos = PartsPos->IdlePos;

	SetMoveTarget(PartsPickPos, ECurrentMoveState::MovingToPartsPos);
}

void ADeliveryController::SetTargetSell(ASell* Sell)
{
	TargetSell = Sell;
	Sell->TargetDelivery = this;
	TargetPos = Sell->TargetSceneComp->GetComponentLocation();
	WorkPos = Sell->WorkSceneComp->GetComponentLocation();
	WorkOutPos = Sell->OutSceneComp->GetComponentLocation();
}

void ADeliveryController::OnMoveCallback(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if (Result.Code == EPathFollowingResult::Success)
	{
		MoveResult();
	}
}

void ADeliveryController::SetMove(bool Move)
{
	bMove = Move;
}

bool ADeliveryController::IsMove()
{
	return bMove;
}
