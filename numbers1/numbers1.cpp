#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	srand(time(0));
	for (int i = 0; n > i; i++)
	{
		arr[i] = rand()%(10-0) ;
	}
	for (int i=0; n > i; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	int couter = 0;
	int couter_2 = 0;

	for (int i = 0; n > i; i++)
	{
		for (int j = 0; j < n; j++)
		{
			
			if (arr[j] == arr[i])
			{
				couter++;

			}
		}
		if (couter > 1)
		{
			cout << "Число " << arr[i] << " встречается " << couter << " раз в массиве " << endl;
		}
		else cout << "Число " << arr[i] << " не повторяется в масиве"<<endl;
		couter = 0;
	}
}