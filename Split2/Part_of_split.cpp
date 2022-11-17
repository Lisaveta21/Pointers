#include <iostream>
#include <math.h>

using namespace std;


void Fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;

	}
}
void Print (int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Массив: " << arr[i] << endl;

	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	Fillrand (arr, n);
	Print (arr, n);


	int* arr_even = new int[even_c];
	int* arr_odd = new int[odd_c];

	for (int i = 0; int j = 0; int l = 0; i < n; i++)

	{
		if (arr[i] % 2 == 0)
			arr_even[j++] = arr[i++];
		else arr_odd[k++] = arr[i];
	}
	Print(arr_even, even_c);
	Print(arr_odd, odd_c);

	delete[](arr_even, even_c);
	delete[](arr_odd, odd_c);


}