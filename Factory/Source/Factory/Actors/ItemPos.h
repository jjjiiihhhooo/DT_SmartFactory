#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemPos.generated.h"

class AItem;

UCLASS()
class FACTORY_API AItemPos : public AActor
{
	GENERATED_BODY()
	
public:	
	AItemPos();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	void CreateItem();
	void SetItem(AItem* NewItem);

public:
	void MoveToIdlePos(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnPos;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector IdlePos;

public:
	void SetSelect(bool Select);
	bool IsSelect() const;
	bool IsReady() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AItem* Item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSelect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReady;
};
