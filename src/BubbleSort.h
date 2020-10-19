#pragma once
#include "Sort.h"

class BubbleSort : public Sort 
{
public:

	// array and length as arguments
	void sort(int *array, int n) {

		for (int i = 0; i < n - 1; i++) {

			for (int j = 0; j < n - 1 - i; j++) {

				if (array[j] > array[j + 1]) {
					swap(&array[j], &array[j + 1]);
				}
			}
		}
	}

	void sort(int* arr, int n, int m) {
		return;
	}

private:
	void swap(int *a, int *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}

};


// Time complexity
// O(n^2) Comparisons and swaps 