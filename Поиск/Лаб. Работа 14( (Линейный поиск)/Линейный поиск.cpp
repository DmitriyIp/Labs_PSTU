#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int key, size, cnt=0, newel;
	cout << "Введите размер массива:";
	cin >> size;
	int* mas1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		mas1[i] = rand() % 10;
	}
	cout << "Сгенерированный массив:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << mas1[i] << "\t";
	}
	cout << endl;
	cout << "Введите ключ поиска (1-10) и новый элемент:" << endl;
	cout << ">>";
	cin >> key;
	cout << ">>";
	cin >> newel;
	for (int i = 0; i < size; i++)
	{
		if (mas1[i]==key)
			cnt++;
	}
	int newsize = size + cnt;
	int* mas2 = new int[newsize];
	for (int i = 0, j = 0; i < newsize; ++i)
	{
		if (mas1[i] == key)
		{
			mas2[j] = newel;
			j++;
			mas2[j] = mas1[i];
			j++;
		}
		else
		{
			mas2[j] = mas1[i];
			j++;
		}
	}
	cout << "Новый массив:" << endl;
	for (int i = 0; i < size+cnt; i++)
	{
		cout << mas2[i] << "\t";
	}
	delete[]mas1;
	delete[]mas2;

	return 0;
}