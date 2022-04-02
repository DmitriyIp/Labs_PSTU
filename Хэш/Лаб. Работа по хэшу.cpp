#include <iostream>
#include <string>
#include <math.h>
#include <ctime>

using namespace std;
string name[30] = { "Иван", "Андрей", "Антон", "Амин", "Роберт", "Георгий", "Борис", "Владислав", "Дмитрий", "Никита", "Данила", "Артем", "Парвиз", "Сергей", "Илья", "Григорий", "Артур", "Денис", "Алексей", "Александр", "Валерий", "Дамир", "Михаил", "Константин", "Николай", "Герман", "Иннокентий", "Богдан", "Станислав", "Сурман" };
string patronymic[30] = { "Иванович", "Андреевич", "Антонович", "Аминович", "Робертович", "Георгиевич", "Борисович", "Владиславович", "Дмитриевич", "Никитович","Данилович", "Артемович", "Парвизович", "Сергеевич", "Ильич", "Григорьевич", "Артурович", "Денисович", "Алексеевич", "Александрович", "Валерьевич", "Дамирович", "Михайлович", "Константинович", "Николаевич", "Германович", "Иннокентьевич", "Богданович", "Станиславович", "Сурманович" };
string surname[30] = { "Карпов", "Афанасьев", "Власов","Маслов","Исаков","Тихонов","Аксёнов","Гаврилов","Родионов","Котов","Горбунов","Кудряшов","Быков","Зуев","Третьяков","Савельев","Панов","Рыбаков","Суворов","Абрамов","Воронов","Мухин","Архипов","Трофимов","Мартынов","Емельянов","Горшков","Чернов","Овчинников","Селезнёв" };
string adress[15] = { "Пушкина 17", "Фрунзе 10", "Екатерининская 168", "Льва Толстого 8", "Чкалова 9", "Ленина 103", "Профессора Дедюкина 18", "Братиславская 30", "Первомайская 35", "Октябрьская 5", "Корнилова 10", "Пермская 3", "Лужников 4", "Петропавловская 107", "Краснова 4" };
string day[31] = {"01","02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"};
string month[12] = {"01","02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12"};
string year[7] = {"1997","1998", "1999", "2000", "2001", "2002", "2003"};

struct person
{
    string FIO;
    string birthday;
    string adress;
};

struct hashed_person
{
    person current;
    hashed_person* next;
};

int calc_hash(string key, int size)
{
    double f;
    return int(size * modf(stoi(key) * 0.4312556, &f));
}

pair<hashed_person**, int> create_table(person* items, int n, int size)
{
    hashed_person** table = new hashed_person * [size];
    for (int i = 0; i < size; i++)
    {
        table[i] = nullptr;
    }
    int collision_counter = 0;

    for (int i = 0; i < n; i++)
    {
        int hash = calc_hash(items[i].birthday, size);
        if (table[hash] == nullptr)
        {
            hashed_person* p = new hashed_person;
            p->current = items[i];
            p->next = nullptr;
            table[hash] = p;
        }
        else
        {
            collision_counter++;
            hashed_person* cur_hashed = table[hash];
            while (cur_hashed->next != nullptr)
            {
                cur_hashed = cur_hashed->next;
            }
            hashed_person* p = new hashed_person;
            p->current = items[i];
            p->next = nullptr;
            cur_hashed->next = p;
        }
    }

    return std::make_pair(table, collision_counter);
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите количество людей для генерации ";
    cin >> n;
    person* people = new person[n];

    for (int i = 0; i < n; i++)
    {
        person p;
        string full_name="";
        full_name += surname[rand() % 30] + ' ';
        full_name += name[rand() % 30] + ' ';
        full_name += patronymic[rand() % 30];

        p.FIO = full_name;

        string birthday="";
        birthday+=day[rand()%30]+'.';
        birthday += month[rand() % 12] + '.';
        birthday += year[rand() % 7];
       
        p.birthday = birthday;

      
        p.adress = adress[rand()%14];

        people[i] = p;
    }

    cout << "Введите размер хэш-таблицы: ";
    int size;
    cin >> size;

    auto table = create_table(people, n, size);
    cout << "Кол-во коллизий: " << table.second << endl;

    int command_code = -1;

    while (command_code != 0)
    {
        cout << "0 — выход, 1 — вывод списка людей, 2 — поиск, 3 — регенерация таблицы" << endl;
        cin >> command_code;
        switch (command_code)
        {
        case 1: {
            for (int i = 0; i < n; i++)
            {
                cout << people[i].FIO << ' ' << people[i].adress << ' ' << people[i].birthday << endl;
            }
            break;
        }
        case 2: {
            string search_key;
            cin.ignore();
            getline(cin, search_key);
            int hash = calc_hash(search_key, size);
            hashed_person* cur = table.first[hash];

            if (cur != nullptr)
            {
                while (cur->current.birthday != search_key && cur->next != nullptr)
                {
                    cur = cur->next;
                }
                if (cur->current.birthday == search_key)
                {
                    cout << "ФИО: " << cur->current.FIO << endl;
                    cout << "Адрес: " << cur->current.adress << endl;
                }
                else
                {
                    cout << "Ничего не найдено!" << endl;
                }
            }
            else
            {
                cout << "Ничего не найдено!" << endl;
            }

            break;
        }
        case 3: {
            cout << "Введите новый размер: ";
            cin >> size;
            auto table = create_table(people, n, size);
            cout << "Кол-во коллизий: " << table.second << endl;
        }
        }
    }
    return 0;
}