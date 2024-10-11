// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "ItemInventory.generated.h"

/**
 * 
 */

UCLASS()
class ELVIS_ESCAPE_API UItemInventory : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TArray<AItem*> Items; 
	
	
	
};
