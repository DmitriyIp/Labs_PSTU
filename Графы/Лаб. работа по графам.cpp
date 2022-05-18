#include <iostream>
int SIZE = 7;
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a[7][7] = { 
					  {0, 42,  19,  -1, -1, -1, 12},
					  {42, 0, -1, 23, 19, -1, -1},
					  {19, -1, 0, -1, 34, 30, -1},
					  {-1, 23, -1, 0, -1,  9, -1},
					  {-1, 19, 34,-1, 0, -1, 47},
					  {-1, -1, 30, 9, -1, 0, 26 },
					  {12,-1, -1, -1, 47, 26, 0} }; // матрица связей
	int min_d[7]; // минимальное расстояние
	int visit[7]; // посещенные вершины
	int temp, minindex, min;
	int begin_index = 5;
	cout << "Матрица связей: " << endl;
	// Вывод матрицы связей
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << " " << a[i][j] << " ";
		}
		cout << endl;
	}

	//Инициализация вершин и расстояний
	for (int i = 0; i < SIZE; i++)
	{
		min_d[i] = 10000;
		visit[i] = 1;
	}
	min_d[begin_index] = 0;
	// Шаг алгоритма
	do {
		minindex = 10000;
		min = 10000;
		for (int i = 0; i < SIZE; i++)
		{ // Если вершину ещё не обошли и вес меньше min
			if ((visit[i] == 1) && (min_d[i] < min))
			{ // Переприсваиваем значения
				min = min_d[i];
				minindex = i;
			}
		}
		// Добавляем найденный минимальный вес
		// к текущему весу вершины
		// и сравниваем с текущим минимальным весом вершины
		if (minindex != 10000)
		{
			for (int i = 0; i < SIZE; i++)
			{
				if (a[minindex][i] > 0)
				{
					temp = min + a[minindex][i];
					if (temp < min_d[i])
					{
						min_d[i] = temp;
					}
				}
			}
			visit[minindex] = 0;
		}
	} while (minindex < 10000);
	// Вывод кратчайших расстояний до вершин
	cout << endl << "Кратчайшие расстояния до вершин: " << endl;
	for (int i = 0; i < SIZE; i++)
		cout << " " << min_d[i] << " ";

	return 0;
}