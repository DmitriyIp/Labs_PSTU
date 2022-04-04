#include <iostream>
using namespace std;

class Pair
{
	private:
		int first;
		double second;
	public:
		Pair() { first = 0; second = 0; }
		Pair(double m, int n) { first = n; second = m; }
		Pair(const Pair& t) { first = t.first; second = t.second; }
		~Pair() {}

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
};

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


int main()
{
	setlocale(LC_ALL, "rus");
	bool d;
	Pair a, b, c;
	cin >> a >> b;
	c = a--;
	--b;
	cout << c << b;
	d=a>b;
	cout << d << '\n';
	d = c < a;
	cout << d;

	return 0;
}