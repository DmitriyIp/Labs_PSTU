#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

void HoarSort(int* a, int n)
{
	int i = 0;
	int j = n - 1;
	int mid = a[n / 2];
	do
	{
		while (a[i] < mid)
		{
			i++;
		}
		while (a[j] > mid)
		{
			j--;
		}
		if (i <= j)
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > 0)
	{
		HoarSort(a, j + 1);
	}
	if (i < n)
	{
		HoarSort(&a[i], n - i);
	}
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n = 0;
	cout << "Введите количество элементов в массиве: ";
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
	}
	cout << "Наш массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "Выполнятся сортировка..." << endl;
	HoarSort(mas, n);
	cout << "Отсортированный массив";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	return 0;
}

