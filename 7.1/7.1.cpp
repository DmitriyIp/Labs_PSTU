#include <iostream>
#include <sstream>

using namespace std;


string fraction(float a)
{
	ostringstream ost;
	ost << a;
	int digits = ost.str().size() - 2;
	float s = a * pow(10, digits);
	cout << s << "/" << pow(10, digits);
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
	cout << fraction(0.25) << endl;

	return 0;
}