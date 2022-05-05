#include <iostream>
#include <deque>
#include <functional>
#include <algorithm>

using namespace std;

class Pair
{
private:
	int first;
	double second;
public:
	Pair(double m, int n);
	Pair();
	Pair(const Pair& t);
	~Pair();

	int get_first() { return first; }
	double get_second() { return second; }
	void set_first(int n) { first = n; }
	void set_second(int m) { second = m; }

	friend istream& operator>>(istream& in, Pair& p);
	friend ostream& operator<<(ostream& out, const Pair& p);
	Pair& operator--();
	Pair operator --(int);
	bool operator>(Pair& t);
	bool operator<(Pair& t);
	Pair& operator=(const Pair& t);
	bool operator==(const Pair& t);
	Pair operator+(const Pair& t);
	Pair operator/(int k);
};

Pair Pair::operator/(int k)
{
	first = first / k;
	second = second / k;
	return *this;
}

Pair Pair::operator+(const Pair& t)
{
	first += t.first;
	second += t.second;
	return *this;
}

bool Pair::operator==(const Pair& t)
{
	if (first == t.first && second == t.second) return true;
	return false;
}

Pair::Pair(double m, int n)
{
	first = n;
	second = m;
}

Pair::Pair()
{
	first = 0;
	second = 0;
}

Pair::Pair(const Pair& t)
{
	first = t.first;
	second = t.second;
}

Pair::~Pair() = default;

istream& operator>>(istream& in, Pair& p)
{
	cout << "first:"; in >> p.first;
	cout << "second:"; in >> p.second;
	return in;
}

ostream& operator<<(ostream& out, const Pair& p)
{
	return (out << p.first << ":" << p.second << endl);
}

Pair Pair::operator --(int)
{
	first--;
	return *this;
}

Pair& Pair::operator--()
{
	second--;
	return *this;
}

Pair& Pair::operator=(const Pair& t)
{
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}

bool Pair::operator<(Pair& t)
{
	if (first < t.first && second < t.second) return true;
	else  return false;
}

bool Pair::operator>(Pair& t)
{
	if (first > t.first && second > t.second) return true;
	else  return false;
}

typedef deque<Pair> Tdeque;
Pair s;
Pair p;

Tdeque make_deque(int n)
{
	Pair a;
	Tdeque d;
	for (int i = 0; i < n; i++) 
	{
		cin >> a;
		d.push_back(a);
	}
	return d;
}

Tdeque make_empty_deque(int n)
{
	Pair a(0, 0);
	Tdeque k;
	for (int i = 0; i < n; i++)
	{
		k.push_back(a);
	}
	return k;
}

void print_deque(Tdeque d)
{
	if (!d.empty())
	{
		for (int i = 0; i < d.size(); i++)
			cout << d[i];
	}
	else
	{
		cout << "Очередь пуста!";
	}
	cout << '\n';
}

struct Equal_s
{
	bool operator() (Pair t)
	{
		return t == s;
	}
};

Pair srednee(Tdeque d)
{
	Pair s = d[0];
	int size = d.size();
	for (int i = 1; i < size; i++)
		s = s + d[i];
	return s / d.size();
}

void Foo(Pair& b)
{
	b = b + p;
}

int main()
{
	setlocale(LC_ALL, "rus");
	
	int n = 0;
	cout << "Введите размер очереди: ";
	cin >> n;
	Tdeque d = make_deque(n);
	cout << "\nВведенная очередь:\n";
	print_deque(d);
	
	Tdeque::iterator i;
	cout << "Ищем максимальный элемент и добавляем его в конец очереди:\n";
	i = max_element(d.begin(), d.end());
	Pair max = *i;
	d.push_back(max);
	print_deque(d);

	cout << "Создадим ключ поиска типа Pair:\n";
	cin >> s;

	cout << "Очередь после удаления элемента, совпадающего с ключом:\n";
	d.erase(remove_if(d.begin(), d.end(), Equal_s()), d.end());
	print_deque(d);

	cout << "\nСреднее значение очереди: " << srednee(d) << '\n';
	p = srednee(d);

	for_each(d.begin(), d.end(), Foo);
	print_deque(d);
	return 0;
}