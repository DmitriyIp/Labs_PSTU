#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	double k;
	setlocale(LC_ALL, "Rus");
	queue <double> q;
	cout << "Введите количество элементов в очереди: ";
	cin >> n;
	cout << "Введите элементы:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << ">>";
		cin >> k;
		if (k > 0)
		{
			q.push(k);
		}
	}
	cout << "Результат:" << endl;
	if (q.empty()) cout << "Очередь пуста!";
	while (!q.empty())
	{
		cout << q.front() << "\t";
		q.pop();
	}
	return 0;
}