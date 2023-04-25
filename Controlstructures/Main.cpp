
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
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif

#ifdef ENTER_NUMBER
	int n;
	cout << "������� �����: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "�� ������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}
#endif

#ifdef TICKET
	int number;
	cout << "������� ����� ������: "; cin >> number;
	int left = number / 1000;
	int right = number - left * 1000;
	int left_sum = 0;
	int right_sum = 0;
	cout << "����� �����: " << left << endl;
	cout << "������ �����: " << right << endl;
	while (left > 0 && right > 0)
	{
		left_sum += left % 10;
		left /= 10;

		right_sum += right % 10;
		right /= 10;

	}

	cout << "����� ����� �����: " << left_sum << endl;
	cout << "����� ������ �����: " << right_sum << endl;
	if (left_sum == right_sum)
	{
		cout << "���������� �����!" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}
#endif


}