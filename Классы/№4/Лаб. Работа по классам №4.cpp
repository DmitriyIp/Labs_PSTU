#include <iostream>
#include <string>
using namespace std;

class Person
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

	friend istream& operator>>(istream& in, Person&p);
	friend ostream& operator<<(ostream& out, const Person&p);
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
	double cntsalary() {return salary * 1.1;}
	friend istream& operator>>(istream& in, Employee&t);
	friend ostream& operator<<(ostream& out, const Employee&t);
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


int main()
{
	setlocale(LC_ALL, "rus");
	Person chel1("Леонардо Ди Каприо", 33);
	cout << chel1;

	Employee chel2("Актриса", 100000, "Анна Тэйлор Джой", 25);
	cout << chel2;
	cout << "ЗП с учетом премии: " << chel2.cntsalary() <<"\n\n";

	Employee chel3 = chel2;
	cout << chel3;
	Employee chel321;
	f1(chel321);
	chel1 = f2();
	cout << chel1;

	return 0;
}