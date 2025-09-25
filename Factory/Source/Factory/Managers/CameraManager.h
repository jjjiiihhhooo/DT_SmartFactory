#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraManager.generated.h"


UCLASS()
class FACTORY_API ACameraManager : public AActor
{
	GENERATED_BODY()
	
public:	
	ACameraManager();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
	void SelectCamera(int32 Index);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> Cameras;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraBlendTime;
private:
	int32 CamIndex;
};
