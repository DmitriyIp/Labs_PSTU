#include <iostream>
#include <string>

using namespace std;

void sort(string s)
{
	for (int i = 0; i < s.length() - 1; i++)
	{
		for (int j = i+1; j < s.length(); j++)
		{
			if (s[i] > s[j])
			{
				char t = s[i];
				s[i] = s[j];
				s[j] = t;
			}
		}
	}
	cout << s << " ";
}

int main()
{
	string s = "";
	getline(cin, s);
	string word = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			sort(word);
			word = "";
		}
		else
		{
			word += s[i];
		}
		if (i == s.length() - 1)
		{
			sort(word);
		}

	}
	
	return 0;
}