#pragma once
#include "Sort.h"

class SelectionSort : public Sort
{
public:

	// array and length as arguments
	void sort(int *array, int n) {

		for (int i = 0; i < n - 1; i++) {
			// Seting the current index as minimum
			int min_key = i;

			// Looping over remaining elements
			for (int j = i + 1; j < n; j++) {
				if (array[j] < array[min_key]) {
					min_key = j;
				}
			}

			// Swap for the min element if its index not equal to "i"
			if ( min_key != i)
				swap(&array[i], &array[min_key]);
		}
	}

	void sort(int* arr, int n, int m){}

private:

	void swap(int *a, int *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}
};

// Time complexity
// O(n^2) Comparisons and swaps 