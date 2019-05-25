// Fill out your copyright notice in the Description page of Project Settings.

#include "ArraySort.h"
#include <vector>

void UArraySort::BubbleSort(UPARAM(ref) TArray<int> &intArray)
{
	//Bubblesort

	for (int i = 0; i < intArray.Num(); i++)
	{
		for (int j = 0; j < (intArray.Num()- 1); j++)
		{
			if (intArray[j] > intArray[j + 1])
			{
				int temp = intArray[j];
				intArray[j] = intArray[j + 1];
				intArray[j + 1] = temp;
			}
		}
	}
}

void UArraySort::InsertionSort(UPARAM(ref) TArray<int> &intArray)
{
	int j, temp;

	for (int i = 0; i < intArray.Num(); i++)
	{
		j = i;

		while (j > 0 && intArray[j] < intArray[j - 1])
		{
			temp = intArray[j];
			intArray[j] = intArray[j - 1];
			intArray[j - 1] = temp;
			j--;
		}
	}
}