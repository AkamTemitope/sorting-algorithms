#include <iostream>
#include <cstdlib>
#include <ctime>
//#include "Sort.h"
#include "BubbleSort.h"
#include"InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "SelectionSort.h"

#define RAND_MAX 100000

using namespace std;

void random(int* arr, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 1000;
	}
}

void random(double* arr, int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		double number = ((double)rand() / RAND_MAX) * 1000;
		arr[i] = number;
	}
}

void display(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void display(double* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	const int n = 10;
	int arr[n];

	cout << "Avant" << endl;
	random(arr, n);
	display(arr, n);


	//Sort* S1 = new BubbleSort();
	//S1->sort(arr, n);
	//Sort* S2 = new InsertionSort();
	//S2->sort(arr, n);
	Sort* S3 = new MergeSort();
	S3->sort(arr, 0, n-1);
	//Sort* S4 = new QuickSort();
	//S4->sort(arr, 0, n-1);
	//Sort* S5 = new SelectionSort();
	//S5->sort(arr, n);
	   
	cout << "Apres" << endl;
	display(arr, n);




	return 0;
}