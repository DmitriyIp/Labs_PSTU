#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    string s, pat;
    cout << "Наш образ:" << endl;
    pat="данные";
    cout << pat << endl;
    cout << "Строка:" << endl;
    s="Персональные данные учтены.";
    cout << s << endl;
    int size = pat.length(); // Определяем шаг каждого элемента строки
    int* mas = new int[size + 1];
    int* mas2 = new int[size + 1];
    for (int i = 0; i < size; i++) mas[i] = size - i - 1;
    for (int i = size - 2; i >= 0; i--)
    {
        int cnt = 0;
        for (int j = 0; j < size - 1; j++)
        {
            if (pat[i] == pat[j])
            {
                cnt++;
                mas2[i] = mas[j];
            }
        }
        if (cnt == 1) mas2[i] = size - i - 1;
    }
    int temp = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (pat[size - 1] == pat[i])
        {
            temp += 1;
            mas2[size - 1] = mas[i];
        }
    }
    if (temp == 0) mas2[size - 1] = size;
    mas2[size] = size;
    for (int i = 0; i < size; i++)  cout << pat[i] << mas2[i] << " "; // Эта строка нужна просто для того чтобы выполнить проверку поиска (Здесь выводятся все шаги с символами образа)
    int cnt2 = 0, cnt3=1;
    bool flag = false , flag2=false;
    for (int i = size-1, j=i; j <=size;) // Ищем образ в строке
    {
        while (s[i] == pat[j] && ! flag) 
        {
            if (cnt2 == size-1) flag = true;
            else
            {
                cnt2++;
                i--;
                j--;
            }
        }
        if (!flag && cnt2 > 0) 
        {
            i += cnt2;
            j += cnt2;
            i += mas2[j];
            cnt3 += mas2[j];
        }
        cnt2 = 0;
        if (s[i]!=pat[j] && !flag)
        {
            for (int z = 0; z < size-1; z++)
            {
                if (s[i] == pat[z]) flag2 = true;
                else flag2 = false;
                if (flag2)
                {
                    cnt3 += mas2[z];
                    i += mas2[z];
                    break;
                }
            }
        }
        if (s[i]!= pat[j] && !flag && !flag2)
        {
            cnt3 += size;
            i += size;
        }
        if (flag || i > s.length()) break;
    }
    if (!flag) cout << "Образ не найден!" << endl;
    else 
    {
        cout << "\n\nОбраз начинается на: " << cnt3-1 << " элементе слева и заканчивается на: " << cnt3 + size - 2 << "\n\n";
        cout << "Строка после изменения:" << endl;
        for (int i = 0; i < s.length(); i++)
        {
            if (i == cnt3 + size - 2) cout << "";
            else cout << s[i];
        }
    }
    return 0;
}