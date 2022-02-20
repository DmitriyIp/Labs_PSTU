#include <iostream>
#include <ctime>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int a[7][7] = {}; // создаем двумерный массив
	for (int i = 0; i < 7; i++) // заполняем его случайными элементами
	{
		for (int j = 0; j < 7; j++)
		{
			a[i][j] = rand()%1000;
		}
	}
	for (int i = 0; i < 7; i++) // выводим массив
	{
		for (int j = 0; j < 7; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	 //Эта часть кода нужна для точной проверки работы алгоритма
	//int a[7][7] = { {500, 5, 5, 5, 5, 5 ,5},{500, 5, 5, 5, 5, 5 ,5}, {500, 5, 5, 5, 5, 5 ,5}, {500, 5, 5, 5, 5, 5 ,5}, {500, 5, 5, 5, 5, 5 ,5}, {500, 5, 5, 5, 5, 5 ,5}, {500, 5, 5, 5, 5, 5 ,5}};
	//
	//for (int i = 0; i < 7; i++) // выводим массив
	//{
	//	for (int j = 0; j < 7; j++)
	//	{
	//		cout << a[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	int sum1 = 0;
	int mas[7] = {};
	for (int j = 0; j < 7; j++) // ищем сумму элементов каждого столбца по отдельности и записываем её в новый массив 
	{
		sum1 = 0;
		for (int i = 0; i < 7; i++)
		{
			sum1 += a[i][j];

		}
		mas[j] = sum1;
	}

	cout << endl;

	for (int j = 0; j < 7; j++) // вывод суммы элементов каждого столбца
	{
		cout << mas[j] << " ";
	}
	cout << endl;

	int n = 1;
	sum1 = 0;
	int sum2 = 0;
	int counter = 2;
	bool flag = false;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum1 += mas[j];
		}
		for (int k = n + 1; k < 7; k++)
		{
			sum2 += mas[k];
		}
		if (sum1 > sum2)
		{
			flag = true;
			break;
		}
		sum1 = 0;
		sum2 = 0;
		counter++;
		n++;
	}
	if (flag == true)
	{
		cout << "Сумма левого массива стала больше суммы правого на разделяющем столбце под номером: " << counter;
	}
	else
	{
		cout << "ОШИБКА!";
	}

	return 0;
}