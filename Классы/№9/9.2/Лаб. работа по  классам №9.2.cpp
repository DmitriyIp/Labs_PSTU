#include <iostream>
using namespace std;
const int max_size = 7;

class Exception
{
	string str;
public:
	Exception(string s) { str = s; }
	void what() { cout << str << endl; }
};

class List
{
protected:
	int size;
	int* data;
public:
	List(void);
	List(int s, int k);
	List(const List&);
	~List();
	List& operator=(const List&);
	int& operator[](int index);
	List operator+(int k);
	List operator+(const List&);

	friend istream& operator>>(istream& in, List& p);
	friend ostream& operator<<(ostream& out, const List& p);
};

List::List(int s, int k)
{
	if (s > max_size) throw Exception("Введённый размер списка превышает максимальный (max:7)!");
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
}

List::List()
{
	size = 0;
	data = 0;
}

List::List(const List& t)
{
	size = t.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = t.data[i];
	}
}

List::~List()
{
	delete[] data;
	data = 0;
}

List& List::operator=(const List& t)
{
	if (this == &t) return *this;
	size = t.size;
	if (data != 0) delete[]data;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = t.data[i];
	}
	return *this;
}

int& List::operator[](int index)
{
	if (index < 0) throw Exception("Индекс меньше нуля!!!");
	if (index >= size) throw Exception("Индекс превышает максимальный размер списка!");
	return data[index];
}

List List::operator+(int k)
{
	if (size + 1 == max_size) throw Exception("При добавлении нового элемента список превысил максимальный размер");
	int newsize = size + 1;
	List temp(newsize, 0);
	temp.data[0] = k;
	for (int i = 0; i < size; i++)
	{
		temp.data[i + 1] = data[i];
	}
	return temp;
}

List List::operator+(const List& t)
{
	int l;
	if (size < t.size) l = t.size;
	else l = size;
	List temp1(l, 0);
	for (int i = 0; i < size; i++)
	{
		temp1.data[i] = temp1.data[i] + data[i];
	}
	for (int i = 0; i < t.size; i++)
	{
		temp1.data[i] = temp1.data[i] + t.data[i];
	}
	return temp1;
}

ostream& operator<<(ostream& out, const List& p)
{
	if (p.size == 0) out << "Список пуст!\n";
	for (int i = 0; i < p.size; i++)
		out << p.data[i] << " ";
	return out;
}

istream& operator>>(istream& in, List& p)
{
	for (int i = 0; i < p.size; i++)
		in >> p.data[i];
	return in;
}



int main()
{
	setlocale(LC_ALL, "rus");
	try
	{
		List a(5, 1);
		cout << a << '\n';
		List b(6, 2);
		cout << b + a << '\n';
		cout << a[3] << '\n';
		cout << a[-1] << '\n'; // Индекс меньше нуля
		/*cout << b + 2;*/ // Размер вектора превысит максимальный, так что компилятор кинет исключение в обработчик
	}
	catch (Exception e)
	{
		cout << "ОШИБКА!!!";
		e.what();

	}
	return 0;
}
