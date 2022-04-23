#include <iostream>
using namespace std;

class Iterator
{
	friend class List;
protected:
	int* elem;
public:
	Iterator() { elem = 0; }
	Iterator(const Iterator& it) { elem = it.elem; }
	bool operator== (const Iterator& it) { return elem = it.elem; }
	bool operator!=(const Iterator& it) { return elem != it.elem; }
	void operator++() { ++elem; }
	void operator--() { --elem; }
	int& operator* () const { return*elem; }
};

class List
{
protected:
	int size;
	int* data;
	Iterator beg;
	Iterator end;
public:
	List(int s, int k = 0);
	List(const List& p);
	~List();
	int& operator[](int index);
	List operator+(const int k);
	List operator+(const List&p);
	List& operator=(const List& p);
	int& operator()();
	friend ostream& operator<<(ostream& out, const List& p);
	friend istream& operator>>(istream& in, List& p);

	Iterator first() { return beg; }
	Iterator last() { return end; }
};

List::List(int s, int k)
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
	beg.elem = &data[0];
	end.elem = &data[size];
}

List::List(const List& p)
{
	size = p.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = p.data[i];
	beg = p.beg;
	end = p.end;
}

List::~List()
{
	delete[]data;
	data = 0;
}

List List::operator+(const List& p)
{
	int l;
	if (size < p.size) l = p.size;
	else l = size;
	List temp1(l);
	for (int i = 0; i < size; i++)
		temp1.data[i] += data[i];
	for (int i = 0; i < p.size; i++)
		temp1.data[i] += p.data[i];
	return temp1;
}

List& List::operator=(const List& p)
{
	if (this == &p) return *this;
	size = p.size;
	if (data != 0) delete[]data;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = p.data[i];
	beg = p.beg;
	end = p.end;
	return *this;
}

int& List::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "ОШИБКА ДОСТУПА! (index>size)";
}

List List::operator+(const int k)
{
	List temp(size);
	for (int i = 0; i < size; i++)
		temp.data[i] = data[i] + k;
	return temp;
}

int& List::operator()()
{
	return size;
}

ostream& operator<<(ostream& out, const List& p)
{
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
	List a(5);
	cout << a << '\n';
	cin >> a;
	cout << a;
	a[0] = 20;
	cout << '\n';
	cout << a << '\n';
	cout << *(a.first()) << endl;
	Iterator i = a.first();
	++i;
	cout << *i << endl;
	for (i = a.first(); i != a.last(); ++i) cout << *i << " ";
	List b(10);
	b = a + 1;
	cout << '\n' << b << '\n';
	List c(10);
	c = c + 1;
	cout << b+c;
	/*List p(4);
	p[10] = 15;*/
	return 0;
}