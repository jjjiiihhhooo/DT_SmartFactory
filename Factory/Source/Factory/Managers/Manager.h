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

	UFUNCTION(BlueprintCallable)
	void Exit();
public:
	FVector GetEndAreaClosestPoint(const FVector& InputPoint) const;

public:
	UFUNCTION(BlueprintCallable)
	void SetReady(bool Ready);
	bool IsReady() const;

	bool bReady;

private:
	bool SpawnTime(float DeltaTime);

	float MaxTime;
	float CurTime;

public:
	ADataManager* GetDataManager() const;
	ASpawner* GetSpawner() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADataManager* DataManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASpawner* Spawner;
};
