#include <stdlib.h>
#include <iostream>

using namespace std;
void Insertion_sort(int array[], int length);

int main()
{
	int i, n;
	cout << "masukkan jumlah elemen yg diurutkan: ";
	cin >> n;
	int A [n];
	for (i = 0; i < n; i++)
	{
		cout<< "masukkan bilangan ke-" << i+1 << " : ";
		cin >> A[i];
	}
	Insertion_sort(A, n);
	system("pause");
	return 0;
}

void Insertion_sort(int array[], int length)
{
	int i, j, key;
	for (i = 1; i < length; i++)
	{
		j = i;
		while (j > 0 && array [j - 1] > array[j])
		{
			key = array[j];
			array[j] = array[j - 1];
			array[j - 1] = key;
			j--;
		}
	}
	cout << "hasil pengurutan: ";
	for (j = 0; j < length; j++)
	{
		cout <<" "<< array[j];
	}
	cout << endl;
}
