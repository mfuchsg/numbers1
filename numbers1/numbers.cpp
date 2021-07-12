#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	int max;
	int min;
	const int n = 5;
	int arr[n] = {};
	cout << "Введите максимально возможно число: "; cin >> max;
	cout << "Введите минимальное возможно число: "; cin >> min;
	for (int i = 0; n > i; i++)
	{
		arr[i] = rand() % (max, min);
	}
	for (int i = 0; n > i; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	int min_element= arr[0];
	
	
	int bufer; 

	
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				bufer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = bufer;
			}
		}
	}

	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
 }
	

