#include <iostream>
using namespace std;

struct Node
{
	double data;
	Node* next;
	Node* pred;
};

Node* createList(int n)
{
	Node* first = new Node;
	Node* prevElem, *curElem, *predElem;
	cout << "\n>>";
	cin >> first->data;
	first->next = 0;
	first->pred = 0;
	prevElem = first;
	predElem = first;
	for (int i = 0; i < n-1; i++)
	{
		curElem = new Node;
		cout << "\n>>";
		cin >> curElem->data;
		curElem->next = 0;
		prevElem->next = curElem;
		prevElem = curElem;
		prevElem->pred = predElem;
		predElem = curElem;
	}
	return first;
}

void printList(Node* first, int cnt)
{
	Node* nextElem = first;
	if (nextElem->data < 0 && cnt == 1)
	{
		nextElem = nextElem->next;
	}
	while (nextElem != 0)
	{
		cout << nextElem->data<< "    " << nextElem->next << "   " << nextElem->pred << endl;
		nextElem = nextElem->next;
	}
	cout << endl;
}

void removeElem(Node* first, int n)
{
	Node* curElem = first;
	
	if (curElem->data<0)
	{
		curElem = curElem->next;
		curElem->pred = 0;
		curElem->next = curElem->next->next;
	}
	else
	{
		curElem = curElem->next;
	}
	for (int i = 0; i < n - 1 && curElem->next != 0; i++)
	{
		if (curElem->data < 0)
		{
				curElem->pred->next = curElem->next;
				curElem->next->pred = curElem->pred;
				curElem = curElem->next;
		}
		else
		{ 
			curElem = curElem->next;
		}
	}
	if (curElem->next == 0 && curElem->data<0)
	{
		curElem->pred->next = 0;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n, cnt=0;
	cout << "Введите размер списка: ";
	cin >> n;
	Node* List = createList(n);
	printList(List, cnt);
	cnt++;
	cout << endl;
	removeElem(List, n);
	printList(List, cnt);
	return 0;
}
