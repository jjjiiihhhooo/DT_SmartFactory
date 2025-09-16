#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Containers/Queue.h"
#include "Spawner.generated.h"

UCLASS()
class FACTORY_API ASpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawner();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	void InitPool();
	void CreateDelivery();
	void CreateParts();
	void DeliveryEnqueue(ACharacter* Delivery);
	void PartsEnqueue(AActor* Parts);

	UPROPERTY()
	TSet<ACharacter*> DeliveryAllPooled;
	UPROPERTY()
	TSet<AActor*> PartsAllPooled;

	TQueue<ACharacter*> DeliveryQueue;
	TQueue<AActor*> PartsQueue;

	int32 Count;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	FVector SpawnPoint;

public:
	UFUNCTION(BlueprintCallable, Category = "Pool")
	ACharacter* GetDelivery();

	UFUNCTION(BlueprintCallable, Category = "Pool")
	AActor* GetParts();

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnDelivery(ACharacter* Delivery);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnParts(AActor* Parts);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	int32 GetCount();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TSubclassOf<ACharacter> DeliveryClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TSubclassOf<AActor> PartsClass;
};
