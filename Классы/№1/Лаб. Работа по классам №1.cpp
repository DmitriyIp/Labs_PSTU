#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

class nums
{
	private: 
		double first;
		double second;
		double k;
	public:
		void read()
		{
			cout << "Введите целое число: " << endl;
			cin >> first;
			cout << "Введите дробное число:" << endl;
			cin >> second;
			cout << "Введите вещественное число (Пример: 324.32):" << endl;
			cin >> k;

			init();
		}
		void init()
		{
			if ((first != round(first) or first < 0) or (second == round(second) or second < 0) or (k==round(k)))
			{
				cout << "ОШИБКА!!! Числа введены неправильно!";
				abort();
			}
			else
			{
				cout << "Числа введены правильно. Выполняем умножение" << endl;
				multiply(k);
			}

		}
		void show()
		{
			cout << "Результат умножения целого на вещественное: " << first << " Результат умножения дробного на вещественное: " << second << endl;
		}
		void multiply(double k)
		{
			first *= k;
			second *= k;
		}
};

nums makeNums(const nums& b)
{
	double first, second, k;
	cout << "Введите целое число: " << endl;
	cin >> first;
	cout << "Введите дробное число:" << endl;
	cin >> second;
	cout << "Введите вещественное число (Пример: 324.32):" << endl;
	cin >> k;
	if ((first != round(first) or first < 0) or (second == round(second) or second < 0) or (k == round(k)))
	{
		cout << "ОШИБКА!!! Числа введены неправильно!";
		abort();
	}
	else
	{
		cout << "Числа введены правильно. Выполняем умножение" << endl;
		first *= k;
		second *= k;
		cout << "Результат умножения целого на вещественное: " << first << " Результат умножения дробного на вещественное: " << second;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	nums a;
	a.read();
	a.show();
	nums b;
	makeNums(b);
}
