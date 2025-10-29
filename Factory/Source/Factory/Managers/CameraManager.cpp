#include "CameraManager.h"
#include "Kismet/GameplayStatics.h"

ACameraManager::ACameraManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACameraManager::BeginPlay()
{
	Super::BeginPlay();

	CameraBlendTime = 0.5f;
}

void ACameraManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACameraManager::SelectCamera(int32 Index) const
{
	if (Cameras.IsValidIndex(Index) && Cameras[Index] != nullptr)
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

		if (PlayerController)
		{
			PlayerController->SetViewTargetWithBlend(Cameras[Index], CameraBlendTime);
		}
	}
}
