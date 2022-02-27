#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <Windows.h>

using namespace std;

struct team
{
    string name;
    string city;
    int players;
    int points;
};

int main()
{
    srand(time(NULL));
    ofstream sportteam;
    sportteam.open("cybersport.txt"); 
    setlocale(LC_ALL, "rus");
    int k;
    cout << "Введите количество очков, которое нужно набрать, чтобы остаться в игре (1-100): ";
    cin >> k;
    while (k > 100 || k<1)
    {
        cout << "Вы ввели недопустимое число! Введите правильно: ";
        cin >> k;
    }
    team OG = { "OG", "Нью Йорк", 5, rand() % 100 };
    team Spirit ={"Team Spirit", "Москва", 5 , rand() % 100 };
    team VP = { "VirtusPro", "Санкт-Петербург", 5, rand() % 100 };
    team PSG = { "PSG.LGD", "Шанхай", 5, rand() % 100 };
    team Secret = { "Team Secret", "Детроит", 5, rand() % 100 };
    team TSM = { "TeamSoloMid", "Лондон", 5, rand() % 100 };
    team EG = { "EvilGenius", "Хьстон", 5 , rand() % 100 };
    int n = 7;
    team* teams = new team[7];
    teams[0] = OG;
    teams[1] = Spirit;
    teams[2] = VP;
    teams[3] = PSG;
    teams[4] = Secret;
    teams[5] = TSM;
    teams[6] = EG;
    team dop;
    team dop2;
    team* dopteam = new team[2];
    dopteam[0] = dop;
    dopteam[1] = dop2;
    if (!sportteam.is_open())
    {
        cout << "Ошибка открытия файла!";
    }
    else
    {
       for (int i = 0; i < n; i++)
       {
         sportteam << "Название: " << teams[i].name << endl << "Город: " << teams[i].city << endl << "Кол-во игроков: " << teams[i].players << endl << "Очки: " << teams[i].points << "\n\n";
       }
       sportteam << "\n";
       sportteam << "Нужное количество очков: " << k << "\n\n";
       SetConsoleCP(1251);
       cout << "Добавьте еще две команды" << endl;
       for (int i = 0; i < 2; i++)
       {
         cin.ignore(32767, '\n');
         cout << "Введите название " << i+1 << " команды: ";
         getline(cin,dopteam[i].name);
         cout << "Введите город, из которого ваша команда: ";
         getline(cin,dopteam[i].city);
         cout << "Введите количество очков, набранных командой: ";
         cin >> dopteam[i].points;
         dopteam[i].players = 5;
         sportteam << "Название: " << dopteam[i].name << endl << "Город: " << dopteam[i].city << endl << "Кол-во игроков: " << dopteam[i].players << endl << "Очки: " << dopteam[i].points << "\n\n";
       }
       for (int i = 0; i < n; i++)
       {
         if (teams[i].points >= 45)
         {
             sportteam << "Название: " << teams[i].name << endl << "Город: " << teams[i].city << endl << "Кол-во игроков: " << teams[i].players << endl << "Очки: " << teams[i].points << "\n\n";
         }
       }
    }
 sportteam.close();
}
