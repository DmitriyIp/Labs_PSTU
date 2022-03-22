#include <iostream>
#include <string>
using namespace std;

int KnutSearch(string& str, string& pat)
{
	int strsize, patsize;
	strsize = str.size();
	patsize = pat.size();
	if (strsize == 0) cout << "Строка пустая! ОШИБКА!" << endl;
	else if (patsize == 0) cout << "Образ пуст! ОШИБКА!" << endl;
	else
	{
		int i = 0, j = -1;
		int* d = new int[100];
		d[0] = -1;
		while (i < patsize - 1)
		{
			while (j >= 0 && pat[i] != pat[j]) j = d[j];
			i++;
			j++;
			if (pat[i] == pat[j]) d[i] = d[j];
			else d[i] = d[j];
		}
		i = 0, j = 0;
		while ((j < patsize) && (i < strsize))
		{
			while (j >= 0 && str[i] != pat[j]) j = d[j];
			i++;
			j++;
		}
		delete[] d;
		if (j == patsize) return i - j;
		else return -1;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	string str, pat;
	cout << "Введите строку:" << endl;
	getline(cin, str);
	cout << "Введите образ поиска:" << endl;
	cin >> pat;
	int index;
	index = KnutSearch(str, pat);
	if (KnutSearch(str, pat) != -1) cout << "Индекс первого символа в подстроки в строке: " << index << endl;
	else cout << "Образ не найден!";
	return 0;
}