#include <iostream>
using namespace std;

struct steck
{
	char data;
	steck* next;
};

void add(steck** top, char d)
{
	steck* q;
	q = new steck(); 
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

void print(steck* top) 
{ 
	steck* q = top; 
	while (q) 
	{ 
		cout << q->data << "\t";
		q = q->next;
	}
}

void addElement(steck** top, char l, char nl)
{
	steck* q = *top; 
	while (q != NULL) 
	{
		if (q->data == l) 
		{
			steck* newel = new steck;
			newel->data=nl;
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
	steck* top = NULL;
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Введите элементы типа char: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		add(&top, k);
	}
	cout << endl;
	cout << "Текущий список: " << endl;
	print(top);
	cout << endl;
	cout << "Введите инф. поле элемента, после которого будет добавляться новый: ";
	cin >> l;
	cout << "Введите значение нового элемента: ";
	cin >> nl;
	addElement(&top, l, nl);
	cout << "Измененный список: " << endl;
	print(top);
	return 0;
}