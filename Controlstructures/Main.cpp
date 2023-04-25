
//ControlStructures
#include<iostream>
using namespace std;

//#define TEMPERATURE
//#define ENTER_NUMBER
//#define TICKET
#define SHOOTER

void main()
{
	setlocale(LC_ALL, "");
#ifdef TEMPERATURE
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif

#ifdef ENTER_NUMBER
	int n;
	cout << "Введите число: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Вы попали" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}
#endif

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


}