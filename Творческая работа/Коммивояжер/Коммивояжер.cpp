#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

//Структура под граф с оценкой нулей
struct zerorate
{
	int num;
	int rate;
};
//Структура под пути (от города к городу)
struct way
{
	int first;
	int second;
};

//Структура под упорядоченный путь (города по порядку)
int ways2[8];
int result = 0;

//Функция для печати графа
void print_graph(int ROW, int COL, zerorate (&a)[7][7])
{
	cout << "Наш исходный граф:\n";
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (a[i][j].num == -1)
			{
				cout << "M\t";
			}
			else
			{
				cout << a[i][j].num << "\t";
			}
		}
		cout << endl;
	}
	cout << "\n";
}
//Функция которая выполняет действия для нахождения пути и расстояния методом ветвей и границ
void reduction(int ROW, int COL, zerorate(&a)[7][7], int (&b)[7][7])
{
	
		int min = 1000;
		int rowmin[7][1]={};
		cout << "Ищем минимум по строкам:\n";
		//Проходим весь граф циклами
		for (int i = 0; i < ROW; i++)
		{
			min = 1000;
			for (int j = 0; j < COL; j++)
			{
				//Там где нет путей, то есть стоит "-1" выводим как букву "М"
				if (a[i][j].num == -1)
				{
					cout << "M\t";
				}
				//Если же путь есть, то выводим его
				else
				{
					cout << a[i][j].num << "\t";
				}
				//Ищем минимальное значение в строке
				if (a[i][j].num < min && a[i][j].num != -1 && a[i][j].num != 0)
				{
					min = a[i][j].num;
				}

			}
			//В массив с минимальными числами записываем минимальное в строке
			rowmin[i][0] = min;
			//Выводим минимальные значение справа от графа через черточку
			cout << "|" << min;
			cout << endl;
		}
		cout << "\n";
		cout << "Редуцируем по строкам:\n";
		//Проходим весь граф циклами
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				//Если путь есть и он не равен нулю, то вычитаем мз него минимальное значение в соответствии со строкой
				if (a[i][j].num != -1 && a[i][j].num != 0)
				{
					a[i][j].num = a[i][j].num - rowmin[i][0];
				}
				//Там где нет путей, то есть стоит "-1" выводим как букву "М"
				if (a[i][j].num == -1)
				{
					cout << "M\t";
				}
				//Если же путь есть, то выводим его
				else
				{
					cout << a[i][j].num << "\t";
				}
			}
			cout << endl;
		}
		cout << '\n';
		cout << "Ищем минимум по столбцам:\n";
		min = 1000;
		int colmin[1][7] = {};
		//Проходим весь граф циклами
		for (int j = 0; j < COL; j++)
		{
			min = 1000;
			for (int i = 0; i < ROW; i++)
			{
				//Там где нет путей, то есть стоит "-1" выводим как букву "М"
				if (a[i][j].num == -1)
				{
					cout << "M\t";
				}
				//Если же путь есть, то выводим его
				else
				{
					cout << a[j][i].num << "\t";
				}
				//Ищем минимальное значение по столбцам
				if (a[i][j].num < min && a[i][j].num != -1 && i != j)
				{
					min = a[i][j].num;
				}
			}
			//Записываем минимальное число в массив с минимальными числами из столбцов
			colmin[0][j] = min;
			cout << endl;
		}
		//Выводим черточки, отделяющие минимальные значения по столбцам от графа
		for (int i = 0; i < 7; i++)
		{
			cout << "_\t";
		}
		cout << '\n';
		//Выводим минимальные значения из столбцов
		for (int i = 0; i < 7; i++)
		{
			cout << colmin[0][i] << "\t";
		}

		cout << "\n\nРедуцируем по столбцам:\n";
		//Проходим граф циклами for
		for (int j = 0; j < COL; j++)
		{
			for (int i = 0; i < ROW; i++)
			{
				//Вычитаем минимальное значение по столбцам из каждого соответсвующего элемента
				if (a[i][j].num != -1 && a[i][j].num != 0)
				{
					a[i][j].num = a[i][j].num - colmin[0][j];
				}
			}
		}
		//Проходим граф циклами for
		for (int j = 0; j < COL; j++)
		{
			for (int i = 0; i < ROW; i++)
			{
				//Там где нет путей, то есть стоит "-1" выводим как букву "М"
				if (a[i][j].num == -1)
				{
					cout << "M\t";
				}
				//Если же путь есть, то выводим его
				else
				{
					cout << a[j][i].num << '\t';
				}
			}
			cout << endl;
		}
		cout << "\nОцениваем нули:\n";
		//Проходим граф циклами for
		for (int i = 0; i < 7; i++)
		{
			int min = 1000;
			for (int j = 0; j < 7; j++)
			{
				//Если элемент равен нулю и не находится на главной диагонали
				if (a[i][j].num == 0 && i != j)
				{
					int sum = 0;
					//Складываем оценку нуля по столбцам (ищем минимальный элемент в столбце, где находится ноль)
					for (int z = 0; z < 7; z++)
					{
						if (a[i][z].num < min && i != z && a[i][z].num != -1 && z != j)
						{
							min = a[i][z].num;
						}
					}
					sum += min;
					min = 1000;
					//Складываем оценку нуля по строкам (ищем минимальный элемент в строке, где находится ноль)
					for (int o = 0; o < 7; o++)
					{
						if (a[o][j].num < min && a[o][j].num != -1 && o != j && o != i)
						{
							min = a[o][j].num;
						}
					}
					//Складываем оценку из минимального элемента по строке и столбцу
					sum += min;
					//Записываем оценку в соответсвующий нулю элемент
					a[i][j].rate = sum;
					//Обнуляем сумму
					sum = 0;
				}
				//Там где нет путей, то есть стоит "-1" выводим как букву "М"
				if (a[i][j].num == -1)
				{
					cout << "M\t";
				}
				//Там где стоит ноль и он не находится на главной диагонали, то выводим его и рядом оценку в скобках
				else if (a[i][j].num == 0 && i != j)
				{
					cout << a[i][j].num << '(' << a[i][j].rate << ')' << "\t";
				}
				//Если же есть путь и это не ноль, то выводим его
				else
				{
					cout << a[i][j].num << "\t";
				}
			}
			cout << endl;
		}
		//Создаем массив ways с типом данных way(структура с полями first, second, в которые будут записываться город, из которого идем, и город, в который идем
		way ways[7];
		cout << "Ищем пути:\n";
		for (int k = 0; k < 4; k++)
		{
			int max = -1000;
			//Объявляем переменные в которые будут записываться номер строки и столбца в которых находится ноль с наибольшей оценкой
			int maxcolidx = 0;
			int maxrowidx = 0;
			//Проходим по графу циклами for
			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					if (a[i][j].rate > max && j != i)
					{
						max = a[i][j].rate;
						maxrowidx = i;
						maxcolidx = j;
					}
				}
			}
			//Заменяем соответсвующий нулю с наибольшей оценкой столбец на буквы "М"
			for (int z = 0, g = 0; z < 7; z++)
			{
				a[maxrowidx][g].num = -1;
				a[maxrowidx][g].rate = 0;
				g++;
			}
			//Заменяем соответсвующую нулю с наибольшей оценкой строку на буквы "М"
			for (int o = 0, n = 0; o < 7; o++)
			{
				a[n][maxcolidx].num = -1;
				a[n][maxcolidx].rate = 0;
				n++;
			}
			//Меняем те же города местами и заменяем путь на букву М, то есть ставим там -1
			a[maxcolidx][maxrowidx].num = -1;
			a[maxcolidx][maxrowidx].rate = 0;
			//Записываем в массив с путями города
			ways[k].first = maxrowidx + 1;
			ways[k].second = maxcolidx + 1;
			result += b[maxrowidx][maxcolidx];
		}
		//Объявляем переменные под индексы строк и столбцов, чтобы записать оставшиеся после удаления путей пути
		int colidx = 0;
		int rowidx = 0;
		int idx = 4;
		//Проходим граф циклами for
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				if (a[i][j].num > 1)
				{
					rowidx = i;
					colidx = j;
					ways[idx].first = rowidx + 1;
					ways[idx].second = colidx + 1;
					idx++;
					result += b[rowidx][colidx];
				}
			}

		}
		cout << "Вывод получившегося графа после операций:\n";
		//Проходим граф циклами for
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				//Там где нет путей, то есть стоит "-1" выводим как букву "М"
				if (a[i][j].num == -1)
				{
					cout << "M\t";
				}
				//Если же есть путь, то выводим его
				else
				{
					cout << a[i][j].num << "\t";
				}
			}
			cout << endl;
		}
		cout << "Вывод пути:\n";
		int ch = 1;
		//Расставляем путь в массиве по порядку
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (ways[j].first == ch)
				{
					ch = ways[j].second;
					ways2[i] = ways[j].first;
					break;
				}
			}
		}
		//Выводим путь
		for (int i = 0; i < 8; i++)
		{
			if (i != 7)
			{
				cout << ways2[i] << "->";
			}
			else
			{
				cout << ways2[i];
			}
		}
		cout << '\n' << result;
 }

int main()
{
	setlocale(LC_ALL, "Rus");
	const int ROW = 7;
	const int COL = 7;
	zerorate mas[ROW][COL] = { {0, 0, 42, 0, 19, 0, -1, 0, -1 , 0, -1, 0, 12, 0},
					  {42, 0, 0, 0, -1, 0, 23, 0, 19, 0, -1, 0, -1, 0 },
					  {19, 0, -1, 0, 0, 0, -1, 0, 34, 0, 30, 0, -1, 0},
					  {-1, 0, 23, 0, -1, 0, 0, 0, -1, 0, 9, 0, -1, 0},
					  {-1, 0, 19, 0, 34, 0, -1, 0, 0, 0, -1, 0, 47, 0},
					  {-1, 0, -1, 0, 30, 0, 9, 0, -1, 0, 0, 0, 26, 0},
					  {12, 0, -1, 0, -1, 0, -1, 0, 47, 0, 26, 0, 0, 0} };
	int mas2[ROW][COL] = { {0, 42,  19,  -1, -1, -1, 12},
					  {42, 0, -1, 23, 19, -1, -1},
					  {19, -1, 0, -1, 34, 30, -1},
					  {-1, 23, -1, 0, -1,  9, -1},
					  {-1, 19, 34,-1, 0, -1, 47},
					  {-1, -1, 30, 9, -1, 0, 26 },
					  {12,-1, -1, -1, 47, 26, 0} };
	print_graph(ROW, COL, mas);
	reduction(ROW, COL, mas, mas2);
	

	//Отрисовка
	//Задаем размеры окна и способ отображения, название окна
	RenderWindow window(VideoMode(670, 400), "Graph");
	//Создаем окружность с радиусом 30, Отрисовкой в 1000 точек
	CircleShape shape(30.f, 1000);
	//Задаем обводку окружности в 3 пикселя и ставим ей черный цвет
	shape.setOutlineThickness(3);
	shape.setOutlineColor(Color::Black);
	Text text;
	Font font;
	text.setFont(font);
	text.setFillColor(Color::Black);
	text.setCharacterSize(24);
	if (!font.loadFromFile("timesnewroman.ttf"))
	{
	}
	shape.setFillColor(Color::White);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		
		window.clear(Color(255, 234, 207));
		//Задаем позицию окружностей(городов) и отрисовываем их
		shape.setPosition(100, 50);
		window.draw(shape);

		shape.setPosition(70, 170);
		window.draw(shape);

		shape.setPosition(270, 50);
		window.draw(shape);

		shape.setPosition(150, 250);
		window.draw(shape);

		shape.setPosition(340, 300);
		window.draw(shape);

		shape.setPosition(490, 230);
		window.draw(shape);

		shape.setPosition(500, 20);
		window.draw(shape);

		//Вводим номера городов, задаем их позицию и отрисовываем их
		text.setString("7");
		text.setPosition(124, 65);
		window.draw(text);

		text.setString("6");
		text.setPosition(94, 185);
		window.draw(text);

		text.setString("1");
		text.setPosition(294, 65);
		window.draw(text);

		text.setString("4");
		text.setPosition(174, 265);
		window.draw(text);

		text.setString("2");
		text.setPosition(364, 315);
		window.draw(text);

		text.setString("5");
		text.setPosition(514, 245);
		window.draw(text);

		text.setString("3");
		text.setPosition(524, 35);
		window.draw(text);

		//Задаем позиции линий и также отрисовываем их
		sf::VertexArray lines_7_6(sf::Lines, 16);
		lines_7_6[0].position = sf::Vector2f(122, 110);
		lines_7_6[1].position = sf::Vector2f(104, 168);
		lines_7_6[0].color = sf::Color::Black;
		lines_7_6[1].color = sf::Color::Black;
		window.draw(lines_7_6);

		sf::VertexArray lines_6_4(sf::Lines, 16);
		lines_6_4[0].position = sf::Vector2f(118, 226);
		lines_6_4[1].position = sf::Vector2f(157, 258);
		lines_6_4[0].color = sf::Color::Black;
		lines_6_4[1].color = sf::Color::Black;
		window.draw(lines_6_4);

		sf::VertexArray lines_4_2(sf::Lines, 16);
		lines_4_2[0].position = sf::Vector2f(209, 293);
		lines_4_2[1].position = sf::Vector2f(340, 320);
		lines_4_2[0].color = sf::Color::Black;
		lines_4_2[1].color = sf::Color::Black;
		window.draw(lines_4_2);

		sf::VertexArray lines_2_5(sf::Lines, 16 );
		lines_2_5[0].position = sf::Vector2f(400, 316);
		lines_2_5[1].position = sf::Vector2f(499, 283);
		lines_2_5[0].color = sf::Color::Black;
		lines_2_5[1].color = sf::Color::Black;
		window.draw(lines_2_5);

		sf::VertexArray lines_5_3(sf::Lines, 16);
		lines_5_3[0].position = sf::Vector2f(524, 228);
		lines_5_3[1].position = sf::Vector2f(531, 81);
		lines_5_3[0].color = sf::Color::Black;
		lines_5_3[1].color = sf::Color::Black;
		window.draw(lines_5_3);

		sf::VertexArray lines_3_1(sf::Lines, 16);
		lines_3_1[0].position = sf::Vector2f(500, 59);
		lines_3_1[1].position = sf::Vector2f(332, 77);
		lines_3_1[0].color = sf::Color::Black;
		lines_3_1[1].color = sf::Color::Black;
		window.draw(lines_3_1);

		sf::VertexArray lines_1_7(sf::Lines, 16);
		lines_1_7[0].position = sf::Vector2f(268, 83);
		lines_1_7[1].position = sf::Vector2f(161, 85);
		lines_1_7[0].color = sf::Color::Black;
		lines_1_7[1].color = sf::Color::Black;
		window.draw(lines_1_7);

		sf::VertexArray lines_6_3(sf::Lines, 16);
		lines_6_3[0].position = sf::Vector2f(132, 198);
		lines_6_3[1].position = sf::Vector2f(509, 73);
		lines_6_3[0].color = sf::Color::Black;
		lines_6_3[1].color = sf::Color::Black;
		window.draw(lines_6_3);

		sf::VertexArray lines_7_5(sf::Lines, 16);
		lines_7_5[0].position = sf::Vector2f(153, 102);
		lines_7_5[1].position = sf::Vector2f(490, 249);
		lines_7_5[0].color = sf::Color::Black;
		lines_7_5[1].color = sf::Color::Black;
		window.draw(lines_7_5);

		sf::VertexArray lines_1_2(sf::Lines, 16);
		lines_1_2[0].position = sf::Vector2f(305, 111);
		lines_1_2[1].position = sf::Vector2f(360, 300);
		lines_1_2[0].color = sf::Color::Black;
		lines_1_2[1].color = sf::Color::Black;
		window.draw(lines_1_2);

		//Подписываем длины дорог и выполняем отрисовку
		//a7_1, где 7 и 1 - номера городов также и для остальных
		string a7_1 = to_string(mas2[6][0]);
		text.setString(a7_1);
		text.setPosition(217, 53);
		window.draw(text);

		string a1_3 = to_string(mas2[0][2]);
		text.setString(a1_3);
		text.setPosition(414, 38);
		window.draw(text);

		string a3_5 = to_string(mas2[2][4]);
		text.setString(a3_5);
		text.setPosition(546, 147);
		window.draw(text);

		string a2_5 = to_string(mas2[1][4]);
		text.setString(a2_5);
		text.setPosition(458, 312);
		window.draw(text);

		string a4_2 = to_string(mas2[3][1]);
		text.setString(a4_2);
		text.setPosition(263, 324);
		window.draw(text);

		string a6_4 = to_string(mas2[5][3]);
		text.setString(a6_4);
		text.setPosition(124, 245);
		window.draw(text);

		string a7_6 = to_string(mas2[6][5]);
		text.setString(a7_6);
		text.setPosition(82, 126);
		window.draw(text);

		string a7_5 = to_string(mas2[6][4]);
		text.setString(a7_5);
		text.setPosition(232, 114);
		window.draw(text);

		string a6_3 = to_string(mas2[5][2]);
		text.setString(a6_3);
		text.setPosition(173, 150);
		window.draw(text);

		string a1_2 = to_string(mas2[0][1]);
		text.setString(a1_2);
		text.setPosition(370, 253);
		window.draw(text);

		//Выводим путь
		text.setString("Way:");
		text.setPosition(34, 340);
		window.draw(text);

		text.setString("Distance:");
		text.setPosition(550, 340);
		window.draw(text);

		string distance = to_string(result);
		text.setString(distance);
		text.setPosition(550, 369);
		window.draw(text);

		string b1 = to_string(ways2[0]);
		text.setString(b1);
		text.setPosition(34, 369);
		window.draw(text);

		text.setString("->");
		text.setPosition(50, 369);
		window.draw(text);

		string b2 = to_string(ways2[1]);
		text.setString(b2);
		text.setPosition(76, 369);
		window.draw(text);

		text.setString("->");
		text.setPosition(92, 369);
		window.draw(text);

		string b3 = to_string(ways2[2]);
		text.setString(b3);
		text.setPosition(118, 369);
		window.draw(text);

		text.setString("->");
		text.setPosition(134, 369);
		window.draw(text);

		string b4 = to_string(ways2[3]);
		text.setString(b4);
		text.setPosition(160, 369);
		window.draw(text);

		text.setString("->");
		text.setPosition(176, 369);
		window.draw(text);

		string b5 = to_string(ways2[4]);
		text.setString(b5);
		text.setPosition(202, 369);
		window.draw(text);

		text.setString("->");
		text.setPosition(218, 369);
		window.draw(text);

		string b6 = to_string(ways2[5]);
		text.setString(b6);
		text.setPosition(244, 369);
		window.draw(text);

		text.setString("->");
		text.setPosition(260, 369);
		window.draw(text);

		string b7 = to_string(ways2[6]);
		text.setString(b7);
		text.setPosition(286, 369);
		window.draw(text);

		text.setString("->");
		text.setPosition(302, 369);
		window.draw(text);

		string b8 = to_string(ways2[7]);
		text.setString(b8);
		text.setPosition(328, 369);
		window.draw(text);

		window.display();
	}
	return 0;
}