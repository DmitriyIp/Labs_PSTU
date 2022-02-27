#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	ofstream Finp;
	Finp.open("F1.txt");
	Finp << "Afsad\n" << "Comedy\n" << "Hello,friend!\n" << "Asteriks and Obelix\n" << "And?\n" << "How are you?\n" << "End\n" << "Apple\n" << "ABOBAB";
	Finp.close();
	int k = 0;
	int n = 1;
	while (n > k)
	{
		cout << "Введите нижнюю границу: ";
		cin >> n;
		cout << "Введите верхнюю границу: ";
		cin >> k;
		if (n > k)
		{
			cout << "Нижняя граница больше верхней! ОШИБКА!";
		}
	}
	ifstream F1;
	ofstream F2;
	F1.open("F1.txt");
	F2.open("F2.txt");
	string line="";
	char letter = 'a';
	int cnt = 1;
	char sog[] = "BbCcDdFfGgHhJjKkLlMmNnPpQqRrSsTtVvWwXxYyZz";
	while (getline(F1, line))
	{
		bool f = line[0] == letter || line[0] == toupper(letter) || line[0] == tolower(letter);
		if (f && (cnt > n && cnt < k))
		{
			F2 << line << '\n';
		}
		cnt++;
	}
	F1.close();
	F1.open("F1.txt");
	int max = 0;
	int cntsogl = 0;
	cnt = 1;
	int cnt2 = 1;
	int maxstr = 0;
	while (getline(F1, line))
	{
		bool f = line[0] == letter || line[0] == toupper(letter) || line[0] == tolower(letter);
		if (f && (cnt > n && cnt < k))
		{

			for (int i = 0; i < line.size(); i++)
			{
				for (int j = 0; j < strlen(sog); j++)
				{
					if (line[i] == sog[j])
					{
						cntsogl++;
					}
				}
			}
			if (max < cntsogl)
			{
				max = cntsogl;
				maxstr = cnt2;
			}
			cntsogl = 0;
			cnt2++;
		}
		cnt++;
	}
	F2 << "Максимальное число согласных: " << max << " " << "Строка: " << maxstr;
	F2.close();
}