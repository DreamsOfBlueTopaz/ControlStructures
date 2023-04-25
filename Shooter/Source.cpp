#include<iostream>
#include<conio.h>
using namespace std;

	void main()
{
	setlocale(LC_ALL, "");

//#define TICKET
//#define SHOOTER

#ifdef TICKET
	int number;
	cout << "Введите номер билета: "; cin >> number;
	int left = number / 1000;
	int right = number - left * 1000;
	int left_sum = 0;
	int right_sum = 0;
	cout << "Левая часть: " << left << endl;
	cout << "Правая часть: " << right << endl;
	while (left > 0 && right > 0)
	{
		left_sum += left % 10;
		left /= 10;

		right_sum += right % 10;
		right /= 10;

	}

	cout << "Сумма левой части: " << left_sum << endl;
	cout << "Сумма правой части: " << right_sum << endl;
	if (left_sum == right_sum)
	{
		cout << "Счастливый билет!" << endl;
	}
	else
	{
		cout << "Обычный билет" << endl;
	}
#endif

#ifdef SHOOTER

	cout << "Начать игру" << endl;
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		if((int)key==119)
	{ 
		cout << "Вперед" << endl;
	}
		else if ((int)key == 115)
		{
			cout << "Назад" << endl;
		}
		else if ((int)key == 97)
		{
			cout << "Влево" << endl;
		}
		else if ((int)key == 100)
		{
			cout << "Вправо" << endl;
		}
		else if ((int)key == 32)
		{
			cout << "Прыжок" << endl;
		}
		else if ((int)key == 13)
		{
			cout << "Огонь!" << endl;
		}
		else if ((int)key == 27)
		{
			break;
		}
		else
		{
			cout << "Error" << endl;
		}



	} while (true);

	

#endif
}