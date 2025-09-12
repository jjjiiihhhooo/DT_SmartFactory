#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Manager.generated.h"

class ASpawner;
class ADeliveryController;
class ASell;

UCLASS()
class FACTORY_API AManager : public AActor
{
	GENERATED_BODY()
	
public:	
	AManager();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
	void Run(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OrderCount;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CompleteCount;

public:
	ASell* SelectSell();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ASell*> SellArray;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASpawner* Spawner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector IdlePos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TestSpeed;

public:
	UFUNCTION(BlueprintCallable)
	void SetReady(bool Ready);

private:
	bool IsReady();

	bool bReady;

	ADeliveryController* ReadyController;
};
