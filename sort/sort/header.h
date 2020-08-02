#include <iostream>
using namespace std;

void show(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void SelectSort()
{
	//O(N^2)
	int min,index, temp;
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (int i = 0; i < 10; i++) {
		min = 9999;
		for (int j = i; j < 10; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;

	}
	cout << "선택정렬 :";
	show(arr);
}
void BubbleSort()
{
	//O(N^2) 실제로는 선택정렬보다 느림
	int temp;
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
						}
		}
	}
	cout << "버블정렬 :";
	show(arr);
}

void InsertionSort()
{
	//O(N^2)
	int temp;
	int j;
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (int i = 0; i < 9; i++)
	{
		j = i;
		while (arr[j] > arr[j + 1])
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}
	cout << "삽입정렬 :";
	show(arr);
}
void Quick(int* data, int start, int end);
void QuickSort()
{
	//O(N*logN)  최악의 경우 O(N^2)
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	Quick(arr, 0, (sizeof(arr)/sizeof(int))-1);
	cout << "퀵 정렬  :";
	show(arr);
	
}
void Quick(int* data, int start, int end)
{
	if (start >= end)
		return;

	int key = start;
	int i = start + 1;
	int j = end;
	int temp;
	
	while (i <= j) {
		while (data[i] <= data[key])
			i++;
		while (data[j] >= data[key] && j > start)
			j--;
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	Quick(data, start, j - 1);
	Quick(data, j+1, end);
	
}