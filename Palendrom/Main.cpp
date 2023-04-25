#include<iostream>
using namespace std;
void main()




{
setlocale(LC_ALL, "Russian");
//#define PAL
#ifdef PAL
	
	int number; //число введенное с клавиатуры
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	int reverse=0;
	while (buffer > 0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;

	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
#endif

#define TICKET
#ifdef TICKET
	int number; 
	cout << "Введите число: "; cin >> number; 
	int left = number / 1000; 
	int right = number - left * 1000; 
	int left_sum = 0; 
	int right_sum = 0; 
	cout << "Левая часть: " << left << endl;
	cout << "Правая часть: " << right << endl;
	while (left > 0 && right >0)
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
