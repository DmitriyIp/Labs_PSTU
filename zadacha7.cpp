﻿#include<iostream> //Подключение библиотеки iostream 

using namespace std; ; // выделение пространства имени (в нем будут храниться функции и переменные)

int main()
{
	setlocale(LC_ALL, "Rus"); // Включаем поддержку русского языка
	char a, b, c, d, e; // Объявляем переменные a,b,c,d,e (char)
	cout << "Введите пять символов: ";
	cin >> a >> b >> c >> d >> e; // Присваиваем каждой переменной символ введённый пользователем
	cout << e << d << c << b << a; // Выводим введённые символы в обратном порядке

}