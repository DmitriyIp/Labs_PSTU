#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class creature
{
public:
	creature(void);
	~creature(void);
	virtual void Show() = 0;
};

class Person :public creature
{
protected:
	string name;
	int age;
public:
	Person();
	Person(string, int);
	Person(const Person&);
	~Person() {}
	string GetName() { return name; }
	int GetAge() { return age; }
	void SetName(string name) { this->name = name; }
	void SetAge(int age) { this->age = age; }
	virtual Person& operator= (const Person&);
	void Show();

	friend istream& operator>>(istream& in, Person& p);
	friend ostream& operator<<(ostream& out, const Person& p);
};

Person::Person()
{
	this->name = "-";
	this->age = 0;
}

Person::Person(string newName, int newAge)
{
	this->name = newName;
	this->age = newAge;
}

Person::Person(const Person& t)
{
	this->name = t.name;
	this->age = t.age;
}

Person& Person::operator=(const Person& t)
{
	if (&t == this) return *this;
	name = t.name;
	age = t.age;
	return *this;
}

istream& operator>>(istream& in, Person& p)
{
	cout << "Имя: "; in >> p.name;
	cout << "Возраст: "; in >> p.age;
	return in;
}

ostream& operator<<(ostream& out, const Person& p) { return (out << "Имя: " << p.name << "\nВозраст: " << p.age << "\n\n"); }

void Person::Show()
{
	cout << "Имя: " << name << "\nВозраст: " << age << "\n\n";
}

class Employee : public Person
{
protected:
	string post;
	double salary;
public:
	Employee(void);
	Employee(string, double, string, int);
	Employee(const Employee&);
	~Employee();
	void SetSalary(double salary) { this->salary = salary; }
	void SetPost(string post) { this->post = post; }
	double GetSalary() { return salary; }
	string GetPost() { return post; }
	virtual Employee& operator=(const Employee&);
	void Show();
	double cntsalary() { return salary * 1.1; }
	friend istream& operator>>(istream& in, Employee& t);
	friend ostream& operator<<(ostream& out, const Employee& t);
};

Employee::Employee()
{
	this->name = "-";
	this->age = 0;
	this->post = "-";
	this->salary = 0;
}

Employee::Employee(string post, double salary, string name, int age)
{
	this->post = post;
	this->salary = salary;
	this->name = name;
	this->age = age;
}

Employee::Employee(const Employee& t)
{
	this->post = t.post;
	this->salary = t.salary;
	this->name = t.name;
	this->age = t.age;
}

Employee::~Employee() {}

istream& operator>>(istream& in, Employee& t)
{
	cout << "Пост: "; in >> t.post;
	cout << "Оклад: "; in >> t.salary;
	return in;
}
ostream& operator<<(ostream& out, const Employee& t) { return (out << "Имя: " << t.name << "\nВозраст: " << t.age << "\nПост: " << t.post << "\nОклад: " << t.salary << "\n\n"); }

void Employee::Show()
{
	cout << "Имя: " << name << "\nВозраст: " << age << "\nПост: " << post << "\nОклад: " << salary << "\n\n";
}

Employee& Employee::operator=(const Employee& t)
{
	if (&t == this) return *this;
	post = t.post;
	salary = t.salary;
	return *this;
}

void f1(Person& c)
{
	c.SetName("Джон");
	cout << c << '\n';
}

Person f2()
{
	Employee l("Слесарь", 25000, "Жора Букер", 34);
	return l;
}

class Vector
{
private:
	creature** beg;
	int size;
	int cur;
public:
	Vector(void);
	Vector(int);
	~Vector();
	void Add(creature*);
	friend ostream& operator<<(ostream& out, const Vector&);
};

Vector::Vector(void)
{
	beg = 0;
	size = 0;
	cur = 0;
}

Vector::Vector(int n)
{
	beg = new creature * [n];
	cur = 0;
	size = n;
}

void Vector::Add(creature* p)
{
	if (cur < size)
	{
		beg[cur] = p;
		cur++;
	}
}

ostream& operator<<(ostream& out, const Vector& v)
{
	if (v.size == 0) out << "Empty" << endl;
	creature** p = v.beg;
	for (int i = 0; i < v.cur; i++)
	{
		(*p)->Show();
		p++;
	}
	return out;
}

Vector::~Vector(void)
{
	if (beg != 0) delete[] beg;
	beg = 0;
}


int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Vector v(5);
	Person chel1;
	cin >> chel1;

	Employee chel2("Актриса", 100000, "Анна Тэйлор Джой", 25);
	creature* p = &chel1;
	v.Add(p);
	p = &chel2;
	v.Add(p);
	cout << v;
	return 0;
}