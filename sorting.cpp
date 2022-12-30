#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;

bool ascending(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

bool descending(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

void shellSort( vector <int> list)
{
	for (int step = list.size() / 2; step > 0; step /= 2)
	{
		for (int i = step; i < list.size(); i += 1)
		{
			int j = i;
			while (j >= step && list[j - step] > list[i])
			{
				swap(list[j], list[j - step]);
				j -= step;
				cout << "\ndid";
			}
		}
	}
}

int findSmallestPosition(vector <int> list)
{
	int smallestPosition = 0;
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i] < list[smallestPosition])
			smallestPosition = i;
	}
	return smallestPosition;
}

void selectionSort(vector <int> list)
{
	for (int i = 0; i < list.size(); i++)
	{
		int smallestPosition = findSmallestPosition(list);
		swap(list[i], list[smallestPosition]);
	}
	return;
}

void insertionSort(vector <int> list)
{
	for (int i = 1; i < list.size(); i++)
	{
		int j = i - 1;
		while (j >= 0 && list[j] > list[j + 1])
		{
			swap(list[j], list[j + 1]);
			cout << "\ndid";
			j--;
		}
	}
}

void bubbleSort(vector <int> list)
{
	int listLength = list.size();
	while (listLength--)
	{
		bool swapped = false;

		for (int i = 0; i < listLength; i++)
		{
			if (list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}


void oddEvenSort(vector <int> list)
{
	bool isSorted = false;

	while (!isSorted)
	{
		isSorted = true;
		for (int i = 1; i <= list.size() - 2; i = i + 2)
		{
			if (list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
				isSorted = false;
			}
		}
		for (int i = 0; i <= list.size() - 2; i = i + 2)
		{
			if (list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
				isSorted = false;
			}
		}
	}
	return;
}

void shakerSort(vector <int> list)
{
	bool swapped = true;
	int start = 0;
	int end = list.size() - 1;

	while (swapped) {
		swapped = false;
		for (int i = start; i < end; ++i) {
			if (list[i] > list[i + 1]) {
				swap(list[i], list[i + 1]);
				swapped = true;
			}
		}
		if (!swapped)
			break;
		swapped = false;
		--end;
		for (int i = end - 1; i >= start; --i) {
			if (list[i] > list[i + 1]) {
				swap(list[i], list[i + 1]);
				swapped = true;
			}
		}
		++start;
	}
}



