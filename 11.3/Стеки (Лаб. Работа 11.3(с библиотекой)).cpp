#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	char k, l, m;
	setlocale(LC_ALL, "Rus");
	stack <char> st;
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Элемент после которого добавить: ";
	cin >> l;
	cout << "Значение нового элемента: ";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k == l)
		{
			st.push(m);
			st.push(k);
		}
		else
		{
			st.push(k);
		}
	}
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	return 0;
}
