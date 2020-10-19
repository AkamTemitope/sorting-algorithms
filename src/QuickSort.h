#pragma once
#include "Sort.h"


class QuickSort : public Sort
{
public:

	// Tekes an array, left index and right index as arguments
	void sort(int *array, int left, int high) {

		if (left < high) {

			int pivot_index = partition(array, left, high);

			sort(array, left, pivot_index - 1);

			sort(array, pivot_index + 1, high);
		}
	}

	void sort(int* arr, int n){}

private:


 // Takes an array, left index, and right index(as pivot index) as arguments
	int partition(int *array, int left, int pivot) {

		int final_position = left - 1;

		for (int j = left; j < pivot; j++) {

			if (array[j] <= array[pivot]) {

				final_position++;

				swap(&array[final_position], &array[j]);
			}
		}

		swap(&array[final_position + 1], &array[pivot]);

		// Returning the index of the element in its correct position
		return final_position + 1;
	}

	void swap(int *a, int *b) {
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}
};



// Worst case time complexity  O(n^2)
// But if pivot is chosen properly, then
// Average case time complexity O(nlogn)