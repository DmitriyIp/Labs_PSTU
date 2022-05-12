#include <iostream>
#include <set>
#include <algorithm>
#include "Pair.h"

using namespace std;
typedef set<Pair> Tset;
typedef Tset::iterator it;

Pair s;

Tset make_set(int n)//ф-и€ дл€ создани€ мн-ва
{
	Tset a;
	Pair p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		a.insert(p);
	}

	return a;
}

void print_set(Tset& a)//вывод мн-ва
{
	it i = a.begin();
	while (i != a.end())
	{
		cout << *i << "\n";
		i++;
	}
}

void add_max_elem(Tset& a)//добавить макс элемент
{
	const Pair b = *max_element(a.begin(), a.end());
	a.insert(b);
}

void del_elem(Tset& a, int n1, int n2)//удалить элементы из промежутка [n1; n2]
{
	if (n1 > a.size() || n2 > a.size() || n1 > n2) { cout << "Error!\n"; return; }

	it i = a.begin();
	int k = 1;

	while (k != n1)//найдЄм итератор в левой гнранице
	{
		i++;
		k++;
	}
	it beg = i;
	while (k != n2 + 1)//найдЄм итератор в правой границе
	{
		i++;
		k++;
	}
	it end = i;
	
	a.erase(beg, end);//remove использовать не получитс€, т.к. значение хранитс€ как константа, а при удалении она мен€етс€ и возникает ошибка
}

Pair avereage(Tset& a)//поиск среднего
{
	it i = a.begin();
	Pair sum;

	while (i != a.end())
	{
		sum = sum + *i;
		i++;
	}

	return sum / a.size();
}

void add_elem(Tset& a, Pair& p)//добавить к каждому элементу новый элемент
{
	Tset b;
	it i = a.begin();

	while (i != a.end())
	{
		Pair buf = *i;
		b.insert(buf + p);
		i++;
	}

	a = b;
}

bool operator< (const Pair& a, const Pair& b)//перегрузка оператора <, необходимо дл€ праильной коомпил€ции программы
{
	return (a.first < b.first) || (a.second < b.second);
}

int main()
{
	int n;
	cout << "Enter n >> "; cin >> n;

	Tset a = make_set(n);
	cout << "\nYour set:\n";
	print_set(a);

	add_max_elem(a);//т.к у нас множество без дубликатов, то ничего не добавитс€
	cout << "\nAdd max elem:\n";
	print_set(a);

	int n1, n2;
	cout << "\nEnter n1, n2 >> "; cin >> n1 >> n2;
	del_elem(a, n1, n2);
	print_set(a);

	s = avereage(a);
	add_elem(a, s);//т.к. значени€ хран€тс€ как const, то операции с ними невозможны, т.е for_each использовать невозможно
	cout << "\nAvereage: " << s << "\nAdd avereage : \n";
	print_set(a);

	return 0;
}