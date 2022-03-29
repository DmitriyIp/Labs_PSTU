#include <iostream>
using namespace std;

class entrant 
{
	private:
		string FIO;
		string profession;
		int scores;
	public:
		entrant(string FIO, string profession, int scores) //конструктор с параметрами
		{
			this->FIO = FIO;
			this->profession = profession;
			this->scores = scores;
		}

		entrant() // конструктор без параметров
		{
			this->FIO = "-";
			this->profession = "-";
			this->scores = 0;
		}

		entrant(const entrant& ent) //конструктор копирования
		{
			this->FIO = ent.FIO;
			this->profession = ent.profession;
			this->scores = ent.scores;
		}

		void SetFIO(string FIO)
		{
			this->FIO = FIO;
		}
		void SetProfession(string profession)
		{
			this->profession = profession;
		}
		void SetScores(int scores)
		{
			this->scores = scores;
		}

		void Print()
		{
			cout << "ФИО: " << FIO << endl;
			cout << "Профессия: " << profession << endl;
			cout << "Баллы ЕГЭ: " << scores << endl << endl;
		}

		~entrant()
		{
			cout << "Деструктор" << endl;
		}
};

int main()
{
	setlocale(LC_ALL, "rus");
	entrant student1;
	student1.Print();

	entrant student2("Ипатов Дмитрий Сергеевич", "Программист", 238);
	student2.Print();

	entrant student3 = student2;
	student3.Print();

	student3.SetFIO("Титов Никита Викторович");
	student3.SetProfession("Репер");
	student3.SetScores(203);
	student3.Print();

	return 0;
}