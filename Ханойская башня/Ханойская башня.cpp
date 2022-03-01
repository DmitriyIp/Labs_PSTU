#include <iostream>
using namespace std;

void hanoitower(int n, int first, int second, int third)
{
    if (n > 0)
    {
        hanoitower(n - 1, first, third, second);
        cout << first << " => " << second << endl;
        hanoitower(n - 1, third, second, first);
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите количество дисков: ";
    cin >> n;
    hanoitower(n, 1, 3, 2);
    return 0;
}