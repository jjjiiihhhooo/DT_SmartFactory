#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Manager.generated.h"

class ADataManager;
class ASpawner;
class ADeliveryController;
class ASell;
class AItemPos;
class UBoxComponent;

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

public:
	FVector GetEndAreaClosestPoint(const FVector& InputPoint);

public:
	UFUNCTION(BlueprintCallable)
	void SetReady(bool Ready);
	bool IsReady();

	bool bReady;

private:
	bool SpawnTime(float DeltaTime);

	float MaxTime;
	float CurTime;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADataManager* DataManager;
};
