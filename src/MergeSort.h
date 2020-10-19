#pragma once
#include "Sort.h"

class MergeSort : public Sort
{
public:

	void sort(int* array, int l, int r) {


		if (l < r) {
			// Calculate mid-point of array
			int mid = (l + r) / 2;

			// Sort the sub-arrays
			sort(array, l, mid);
			sort(array, mid + 1, r);

			// Merge the two sub-lists 
			merge(array, l, mid, r);
		}
	}

	void sort(int* arr, int n){}

private:

	void merge(int* array, int start, int middle, int end) {
		

		int left = middle - start + 1;
		int* left_arr =  new int[left];
		for (int i = 0; i < left; i++) {
			left_arr[i] = array[start + i];
		}

		int right = end - middle;
		int* right_arr = new int[right];
		for (int i = 0; i < right; i++) {
			right_arr[i] = array[middle + 1 + i];
		}

		int i = 0;
		int j = 0;
		int pos = start;
		while ((i < left) && (j < right)) {

			if (left_arr[i] <= right_arr[j]) {
				array[pos++] = left_arr[i++];
			}
			else {
				array[pos++] = right_arr[j++];
			}

		}

		while (i < left) 
			array[pos++] = left_arr[i++];


		while (j < right) 
			array[pos++] = right_arr[j++];

		delete [] left_arr;
		delete [] right_arr;

	}
};


// Time complexity 
// O(nlogn)