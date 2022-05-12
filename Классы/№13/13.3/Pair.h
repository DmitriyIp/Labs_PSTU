#pragma once
#include <iostream>

using namespace std;

class Pair
{
public:
    int first;
    int second;
public:
    //конструкторы
    Pair(void);
    Pair(int, int);
    Pair(const Pair&);

    //деструктор
    ~Pair(void);

    //селекторы
    int get_first();
    int get_second();

    //модификаторы 
    void set_first(int);
    void set_second(int);

    //перегрузка операторов
    bool operator> (const Pair&);
    bool operator< (const Pair&);
    bool operator== (const Pair&);
    bool operator!= (const Pair&);

    Pair& operator+ (const Pair&);
    Pair& operator- (const Pair&);
    Pair& operator* (const Pair&);
    Pair& operator/ (int);
    Pair& operator=(const Pair&);

    //перегрузка операторов для работы с потоками
    friend ostream& operator<<(ostream&, const Pair&);
    friend istream& operator>>(istream&, Pair&);

};