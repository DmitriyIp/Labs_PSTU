#include <iostream>
#include <sstream>

using namespace std;


string fraction(float a)
{
	ostringstream ost;
	ost << a;
	int digits = ost.str().size() - 2;
	int s = a * pow(10, digits);
	int j = pow(10, digits);

	while (s != 0 && j != 0) // поиск общего делителя
	{
		if (s > j) { s = s % j; }
		else { j = j % s; }
	}

	int del = j + s;
	s = (a* pow(10, digits)) / del; // сокращаем числитель
	j = pow(10, digits) / del; // сокращаем знаменатель
	cout << s << "/" << j;
	return "-result";
}

float fraction(string a)
{
	float digit = stoi(a.substr(0, a.find("/")));
	float digit2 = stoi(a.substr(a.find("/")+1));
	digit = digit / digit2;
	return digit;
}





int main()
{
	cout << fraction("6/64") << endl;
	cout << fraction(1.75) << endl;

	return 0;
}