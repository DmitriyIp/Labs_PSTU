#include <iostream>
#include <ctime>
using namespace std;

int search(int* mas, int key, int n)
{
	int left = 0;
	int right = n;
	int mid = 0;
	bool found = false;
	while ((left<=right) && found!=true)
	{
		mid = left + ((key - mas[left]) * (right - left)) / (mas[right] - mas[left]);
		if (mas[mid] < key) left = mid + 1;
		else if (mas[mid] > key) right = mid + 1;
		else found = true;
	}
	if (mas[left] == key) return left;
	else if (mas[right] == key) return right;
	else return -1;
}

void printMas(int* mas, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}

void sort(int* mas, int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mas[j] > mas[i])
			{
				temp = mas[j];
				mas[j] = mas[i];
				mas[i] = temp;
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int key, n;
	cout << "Введите количество элементов в массиве: ";
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 10;
	}
	cout << "Наш массив:" << endl;
	printMas(mas, n);
	sort(mas, n);
	cout << "Наш отсортированный массив:" << endl;
	printMas(mas, n);
	cout << "Введите ключ замены: \n >> ";
	cin >> key;
	if (search(mas, key, n) == -1)
	{
		cout << "Элемента для замены не существует!";
	}
	else
	{
		cout << "\nНомер элемента: " << search(mas, key, n) + 1 << endl;
		cout << "Массив после замены:" << endl;
		mas[search(mas, key, n)] = key * 2;
		printMas(mas, n);
	}
	delete[] mas;
	return 0;
}
