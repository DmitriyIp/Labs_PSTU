#include <iostream>
using namespace std;

struct Node
{
	double data;
	Node* next;
};


Node* add(int n)
{
	double k;
	Node* first;
	Node* p, * r;
	first = new(Node);
	cout << "Введите элементы типа double:" << endl;
	cout << ">>";
	cin >> k;
	first->data = k;
	first->next = 0;
	p = first;
	for (int i = 0; i < n - 1; i++)
	{
		r = new(Node);
		cout << ">>";
		cin >> k;
		r->data = k;
		r->next = 0;
		p->next = r;
		p = r;

	}
	return first;
}

void print(Node* first)
{
	Node* p = first;
	while (p != 0)
	{
		if (p->data > 0)
		{
			cout << p->data << "\t";
			p = p->next;
		}
		else
		{
			p=p->next;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите количество элементов в очереди: ";
	cin >> n;
	Node* first = add(n);
	print(first);
	return 0;
}