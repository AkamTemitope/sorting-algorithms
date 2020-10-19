#pragma once
#include "Sort.h"

class InsertionSort : public Sort
{
public:

	// array and length as arguments
	void sort(int *array, int n) {

		for (int i = 1; i < n; i++) {
			
			int j = i;

			while ((j > 0) && (array[j-1] > array[j])) {
				swap(array+ (j - 1), array +j);
				j = j - 1;
			}

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