#include <iostream>
using namespace std;

class Stack
{
protected:
	char data;
	Stack* next;
public:
	void add(Stack**, char);
	void print(Stack*);
	void addElem(Stack**, char, char);
};

void Stack::add(Stack** top, char d)
{
	Stack* q;
	q = new Stack();
	q->data = d;
	if (top == NULL)
	{
		*top = q;
	}
	else
	{
		q->next = *top;
		*top = q;
	}
}

void Stack::print(Stack* top)
{
	Stack* q = top;
	while (q)
	{
		cout << q->data << "\t";
		q = q->next;
	}
}

void Stack::addElem(Stack** top, char l, char nl)
{
	Stack* q = *top;
	while (q != NULL)
	{
		if (q->data == l)
		{
			Stack* newel = new Stack;
			newel->data = nl;
			newel->next = q->next;
			q->next = newel;
		}
		q = q->next;
	}
}

int main()
{
	int n;
	char k, l, nl;
	setlocale(LC_ALL, "Rus");
	Stack a;
	Stack* top = NULL;
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Введите элементы типа char: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		a.add(&top, k);
	}
	cout << endl;
	cout << "Текущий список: " << endl;
	a.print(top);
	cout << endl;
	cout << "Введите инф. поле элемента, после которого будет добавляться новый: ";
	cin >> l;
	cout << "Введите значение нового элемента: ";
	cin >> nl;
	a.addElem(&top, l, nl);
	cout << "Измененный список: " << endl;
	a.print(top);
	return 0;
}