#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL)); //"точка" от которой будет браться рандомное число (привязано к времени)
	int const size = 10; // Количество элементов в массиве
	int counter = 0; //счетчик, который будет считать количество минимальных элементов в массиве
	int* mas = new int[size];
	int min = 10000;
	for (int i = 0; i < size; i++) // Ввод рандомных элементов в массив
	{
		mas[i] = rand() % 10;
		if (mas[i] < min)
		{
			min = mas[i];
		}
	}
	for (int i = 0; i < size; i++) // вывод массива
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) // Считаем количество элементов, совпадающих с минимальным
	{
		if (mas[i] == min)
		{
			counter++;
		}
	}
	cout << "min:" << min << "count:" << counter << endl;
	int new_size = size - counter; // Задаем размер нового массива
	int* mas1 = new int[new_size]; // Создаем новый массив без элементов, равных минимальному
	for (int i = 0, j = 0; i < size; ++i) // Заполняем новый массив
	{
		if (mas[i] != min)
		{
			mas1[j++] = mas[i];
		}
	}
	delete[] mas; // Чистим память (удаление массива)
	for (int i = 0; i < new_size; i++) // Вывод нового массива
	{
		cout << mas1[i] << " ";
	}
	cout << endl;
	int avg = 0; // Начинаем искать среднее арифметическое в массиве
	int sum = 0;
	for (int i = 0; i < new_size; i++) // Суммируем все элементы массива
	{
		sum += mas1[i];
	}
	avg = sum / new_size; // Среднее арифметическое 
	sum += avg;
	int avg2 = sum / new_size + 1;
	sum += avg2;
	int avg3 = sum / new_size + 1;
	int* temp = new int[new_size + 3];
	for (int i = 0; i < new_size; i++)
	{
		temp[i + 3] = mas1[i];
	}
	cout << endl << avg << avg2 << avg3 << endl;
	temp[0] = avg;
	temp[1] = avg2;
	temp[2] = avg3;
	delete[] mas1;
	for (int i = 0; i < new_size + 3; i++) // Вывод нового массива
	{
		cout << temp[i] << " ";
	}
	cout << endl;
	delete[]temp; // Снова чистим память
	return 0;
}