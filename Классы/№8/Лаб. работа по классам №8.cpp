#include <iostream>
#include <windows.h>

using namespace std;

const int evNothing = 0;
const int evMessage = 100;
const int cmAdd = 1;
const int cmDel = 2;
const int cmGet = 3;
const int cmShow = 4;
const int cmMake = 6;
const int cmQuit = 101;

class Object
{
public:
	~Object(void) {};
public:
	Object(void){};
	virtual int AvgAge() = 0;
	virtual void Show() = 0;
	virtual void Input() = 0;
};

struct TEvent
{
	int what;
	union
	{
		int command;
		struct
		{
			int message;
			int a;
		};
	};
};


class Person :public Object
{
protected:
	string name;
	int age;
public:
	Person(void);
	Person(string, int);
	int AvgAge();
	Person(const Person&);
	~Person(void);

	void Show();
	void Input();

	string GetName() { return name; }
	int GetAge() { return age; }
	void SetName(string NewName) { name = NewName; }
	void SetAge(int NewAge) { age = NewAge; }
	Person& operator=(const Person&);
};

int Person::AvgAge()
{
	return age;
}

void Person::Show()
{
	cout << "Имя человека: " << name;
	cout << "\nВозраст человека: " << age;
	cout << "\n\n";
}

void Person::Input()
{
	cout << "Имя человека? "; cin >> name;
	cout << "\nВозраст человека? "; cin >> age;
	cout << '\n';
}

Person::Person(void)
{
	name = "-";
	age = 0;
}

Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}

Person::Person(const Person& p)
{
	this->name = p.name;
	this->age = p.age;
}

Person& Person::operator=(const Person& p)
{
	if (&p == this) return *this;
	name = p.name;
	age = p.age;
	return *this;
}

Person::~Person(void) = default;

class Abiturient :public Person
{
protected:
	int points;
	string prof;
public:
	Abiturient(void);
	Abiturient(string, int, int, string);
	Abiturient(const Abiturient&);
	~Abiturient(void);

	int AvgAge();
	string GetName() { return name; }
	int GetAge() { return age; }
	int GetPoints() { return points; }
	string GetProf() { return prof; }
	void Show();
	void Input();

	void SetName(string NewName) { name = NewName; }
	void SetAge(int NewAge) { age = NewAge; }
	void SetPoints(int NewPoints) { points = NewPoints; }
	void SetProf(string NewProf) { prof = NewProf; }
	Abiturient& operator=(const Abiturient&);
};

int Abiturient::AvgAge()
{
	return age;
}

void Abiturient::Show()
{
	cout << "Имя абитуриента: " << name;
	cout << "\nВозраст абитуриента: " << age;
	cout << "\nКол-во баллов: " << points;
	cout << "\nСпециальность: " << prof;
	cout << '\n';
}

void Abiturient::Input()
{
	cout << "Имя абитуриента? "; cin >> name;
	cout << "\nВозраст абитуриента? "; cin >> age;
	cout << "\nКол-во баллов? "; cin >> points;
	cout << "\nСпециальность? "; cin >> prof;
	cout << '\n';
}

Abiturient::Abiturient(void)
{
	this->name = "-";
	this->age = 0;
	this->points = 0;
	this->prof = "-";
}

Abiturient::Abiturient(string Name, int Age, int Points, string Prof)
{
	this->name = Name;
	this->age = Age;
	this->points = Points;
	this->prof = Prof;
}

Abiturient::Abiturient(const Abiturient& p)
{
	name = p.name;
	age = p.age;
	points = p.points;
	prof = p.prof;
}

Abiturient::~Abiturient(void) = default;

Abiturient& Abiturient::operator=(const Abiturient& p)
{
	if (&p == this) return *this;
	name = p.name;
	age = p.age;
	points = p.points;
	prof = p.prof;
	return *this;
}

class Vector
{
protected:
	Object** beg;
	int size;
	int cur;
public:
	Vector(int);
	Vector(void);
	~Vector(void);
	void AvgAge();
	void HandleEvent(const TEvent&);
	void Add();
	void Del();
	void Show();
	int operator() ();
};

void Vector::AvgAge()
{
	int a=0;
	if (cur == 0) cout << "Вектор пуст!";
	Object** p = beg;
	for (int i = 0; i < cur; i++)
	{
		a+=(*p)->AvgAge();
		p++;
	}
	cout << "Средний возраст людей в списке: " << a / cur << '\n';
}

void Vector::HandleEvent(const TEvent& event)
{
	if (event.what == evMessage)
	{
		Object** p = beg;
		for (int i = 0; i < cur; i++)
		{
			(*p)->Show();
			++p;
		}
	}
}

Vector::Vector(void)
{
	beg = 0;
	size = 0;
	cur = 0;
}

Vector::Vector(int n)
{
	beg = new Object * [n];
	cur = 0;
	size = n;
}

Vector::~Vector(void)
{
	if (beg != 0) delete[] beg;
	beg = 0;
}

void Vector::Add()
{
	Object* p;
	cout << "1.Person\n";
	cout << "2.Abiturient\n";
	int y; cin >> y;
	if (y == 1)
	{
		Person* a = new (Person);
		a->Input();
		p = a;
		if (cur < size)
		{
			beg[cur] = p;
			cur++;
		}
	}
	else
	{
		if (y == 2)
		{
			Abiturient* b = new Abiturient;
			b->Input();
			p = b;
			if (cur < size)
			{
				beg[cur] = p;
				cur++;
			}
		}
		else return;
	}
}

void Vector::Show()
{
	if (cur == 0) cout << "Вектор пуст!";
	Object** p = beg;
	for (int i = 0; i < cur; i++)
	{
		(*p)->Show();
		p++;
	}
}

int Vector::operator()()
{
	return cur;
}

void Vector::Del()
{
	if (cur == 0) return;
	cur--;
}

class Dialog :public Vector
{
protected:
	int EndState;
public:
	Dialog();
	~Dialog();
	void ClearEvent(TEvent&);
	int Valid();
	void EndExec();
	void GetEvent(TEvent&);
	void HandleEvent(TEvent&);
	int Execute();
};

Dialog::Dialog() :Vector()
{
	EndState = 0;
}

Dialog::~Dialog() {}

void Dialog::ClearEvent(TEvent& event)
{
	event.what = evNothing;
}

int Dialog::Valid()
{
	if (EndState == 0) return 0;
	else return 1;
}

void Dialog::EndExec()
{
	cout << "Пока!";
	EndState = 1;
}

void Dialog::GetEvent(TEvent& event)
{
	string OptInt = "+-mszq";
	string s;
	string param;

	char code;
	cout << '>';
	cin >> s; code = s[0];
	if (OptInt.find(code) >= 0)
	{
		event.what = evMessage;
		switch (code)
		{
		case 'm': event.command = cmMake; break;
		case 's': event.command = cmShow; break;
		case 'z': event.command = cmGet; break;
		case '+': event.command = cmAdd; break;
		case '-': event.command = cmDel; break;
		case 'q': event.command = cmQuit; break;
		}
		if (s.length() > 1)
		{
			param = s.substr(1, s.length() - 1);
			int A = atoi(param.c_str());
			event.a = A;
		}
	}
	else event.what = evNothing;
}

void Dialog::HandleEvent(TEvent& event)
{
	if (event.what = evMessage)
	{
		switch (event.command)
		{
		case cmMake:
			size = event.a;
			beg = new Object * [size];
			cur = 0;
			ClearEvent(event);
			break;
		case cmAdd:
			Add();
			ClearEvent(event);
			break;
		case cmDel:
			Del();
			ClearEvent(event);
			break;
		case cmShow:
			Show();
			ClearEvent(event);
			break;
		case cmQuit:
			EndExec();
			ClearEvent(event);
			break;
		case cmGet:
			AvgAge();
			ClearEvent(event);
			break;
		default:
			HandleEvent(event);
		}
	}
}

int Dialog::Execute()
{
	TEvent event;
	do
	{
		EndState = 0;
		GetEvent(event);
		HandleEvent(event);
	} while (!Valid());
	return EndState;
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Добро пожаловать на сервер крутые сиськи!\n";
	cout << "МЕНЮШЕЧКА: " << endl << endl;
	cout << "-----------------------------------" << endl;
	cout << endl << "1. Создать вектор: (m6, где 6-размер)\n2. Добавить элемент: +\n3. Удалить элемент: -\n4. Вывод полей элементов: s\n5. Средний возраст: z\n6. Выход: q\n\n";
	cout << "-----------------------------------" << endl;
	cout << endl;
	Dialog D;
	D.Execute();
	return 0;
}