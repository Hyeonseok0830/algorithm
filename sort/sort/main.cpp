#include "header.h"

int num, pdata[1000001];

void qs(int* data, int start, int end)
{
	if (start >= end)
		return;
	int key = start;
	int i = start + 1, j = end, temp;
	while (i <= j)
	{
		while (data[i] <= data[key])
			i++;
		while (data[j] >= data[key] && j > start)
			j--;
		if(i>j)
		{ 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	qs(data, start, j - 1);
	qs(data, j + 1, end);
}

int main()
{
	
	cin >> num;
	for (int i = 0; i < num; i++)
		cin >> pdata[i];
	qs(pdata, 0, num - 1);
	for (int i = 0; i < num; i++)
		cout << pdata[i] << endl;


	//SelectSort();
	//BubbleSort();
	//InsertionSort();
	//QuickSort();


}