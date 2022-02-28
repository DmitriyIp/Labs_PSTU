// Сортировка Шелла
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int n=0;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int* mas = new int[n];
    for (int i = 0; i < n; i++) // Задаем массив
    {
        mas[i] = rand() % 100;
    }

    for (int i = 0; i < n; i++) // Выводим массив
    {
        cout << mas[i] << " ";
    }
    cout << endl;

    int tmp = 0;
    int d = n / 2;
    while (d > 0) // Сортировка
    {
        for (int i = 0; i < n - d; i++)
        {
            int j = i;
            while (j >= 0 && mas[j] > mas[j + d])
            {
                tmp = mas[j];
                mas[j] = mas[j + d];
                mas[j + d] = tmp;
                j--;
            }
        }
        d = d / 2;
    }
    for (int i = 0; i < n; i++) // Выводи отсортированный массив
    {
        cout << mas[i] << " ";
    }
    return 0;
}
