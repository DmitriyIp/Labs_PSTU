#include <iostream>
using namespace std;
int key_count = 0;
int tabs = 0;
int kol_vo = 0;

struct Branch
{
	char Data; //Поле данных
	Branch* LeftBranch; //УКАЗАТЕЛИ на соседние веточки
	Branch* RightBranch;
};

void Add(char aData, Branch*& aBranch)
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else
	{
		if (aBranch->Data > aData)
		{
			Add(aData, aBranch->LeftBranch);
		}
		else
		{
			Add(aData, aBranch->RightBranch);
		};
	}
}

void print(Branch* aBranch)
{
	if (!aBranch) return;
	tabs += 5;
	print(aBranch->LeftBranch);
	for (int i = 0; i < tabs; i++) cout << " ";
	cout << aBranch->Data << endl;
	print(aBranch->RightBranch);
	tabs -= 5;
	return;
}

void pr_obh(Branch*& aBranch)
{
	if (NULL == aBranch) return;
	pr_obh(aBranch->LeftBranch);
	cout << aBranch->Data << endl;
	pr_obh(aBranch->RightBranch);
}


int key_counter(Branch*& aBranch, char key)

{
	if (NULL == aBranch) return 0;
	if (aBranch->Data == key)
	{
		key_count++;
	}
	key_counter(aBranch->LeftBranch, key);
	key_counter(aBranch->RightBranch, key);
	return key_count;
}

void add_elem(char aData, Branch*& aBranch)
{

	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else
	{
		if (aData < aBranch->Data) {
			add_elem(aData, aBranch->LeftBranch);
		}
		else if (aData > aBranch->Data) {
			add_elem(aData, aBranch->RightBranch);
		}
	}
}

void is_Empty(Branch*& aBranch)
{
	if (!aBranch)
	{
		cout << "Дерево пустое...";
	}
	else
	{
		cout << "Дерево не пустое...";
	}
}

void FreeTree(Branch* aBranch)
{
	if (!aBranch) return;
	FreeTree(aBranch->LeftBranch);
	FreeTree(aBranch->RightBranch);
	delete aBranch;
	return;
}

Branch* del_elem(Branch*& aBranch, char aData)
{
	if (aBranch == NULL)
		return aBranch;
	if (aData == aBranch->Data)
	{
		Branch* tmp;
		if (aBranch->RightBranch == NULL)
			tmp = aBranch->LeftBranch;
		else
		{
			Branch* ptr = aBranch->RightBranch;
			if (ptr->LeftBranch == NULL)
			{
				ptr->LeftBranch = aBranch->LeftBranch;
				tmp = ptr;
			}
			else
			{
				Branch* pmin = ptr->LeftBranch;
				while (pmin->LeftBranch != NULL) {
					ptr = pmin;
					pmin = ptr->LeftBranch;
				}
				ptr->LeftBranch = pmin->RightBranch;
				pmin->LeftBranch = aBranch->LeftBranch;
				pmin->RightBranch = aBranch->RightBranch;
				tmp = pmin;
			}
		}
		delete aBranch;
		return tmp;
	}
	else if (aData < aBranch->Data)
		aBranch->LeftBranch = del_elem(aBranch->LeftBranch, aData);
	else
		aBranch->RightBranch = del_elem(aBranch->RightBranch, aData);
	return aBranch;
}

int main()
{
	setlocale(LC_ALL, "rus");
	char key;
	Branch* Root = 0;
	int vel;
	char element;
	char elem;
	cout << "Введите кол-во элементов дерева: ";
	cin >> vel;
	cout << endl;
	for (int i = 0; i < vel; i++)
	{
		cin >> elem;
		Add(elem, Root);
	}
	cout << "Проверка дерева на пустоту после заполнения:\n";
	is_Empty(Root);
	cout << "\nВывод бинарного дерева:\n";
	print(Root);
	cout << "\nПрямой обход бинарного дерева:\n";
	pr_obh(Root);
	cout << "\nДобавим новый элемент в бинарное дерево:\n";
	cout << "Введите новый элемент: ";
	cin >> element;
	add_elem(element, Root);
	cout << "Вывод бинарного дерева:\n";
	print(Root);
	cout << "Удалим элемент из бинарного дерева:\n";
	cout << "Введите элемент: ";
	cin >> element;
	del_elem(Root, element);
	cout << "Вывод бинарного дерева:\n";
	print(Root);
	cout << "\nВведите ключ:\n";
	cin >> key;
	key_counter(Root, key);
	cout << "Посчитаем кол-во подходящих: " << key_count << '\n';
	FreeTree(Root);
	cout << "Вся динамическая память очищена...\n";
	return 0;
}