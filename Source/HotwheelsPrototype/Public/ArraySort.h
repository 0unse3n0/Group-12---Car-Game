// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArraySort.generated.h"

/**
 * 
 */
UCLASS()
class HOTWHEELSPROTOTYPE_API UArraySort : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "BubbleSort Int Array", CompactNodeTitle = "BubbleSortIntArr", Category = "Utilities"))
		static void BubbleSort(UPARAM(ref) TArray<int> &intArray);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Insertion Sort Int Array", CompactNodeTitle = "InsrtSrtIntArr", Category = "Utilities"))
	static void InsertionSort(UPARAM(ref) TArray<int> &intArray);
};