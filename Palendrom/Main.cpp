#include<iostream>
using namespace std;
void main()




{
setlocale(LC_ALL, "Russian");
//#define PAL
#ifdef PAL
	
	int number; //����� ��������� � ����������
	cout << "������� �����: "; cin >> number;
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
	cout << "������� �����: "; cin >> number; 
	int left = number / 1000; 
	int right = number - left * 1000; 
	int left_sum = 0; 
	int right_sum = 0; 
	cout << "����� �����: " << left << endl;
	cout << "������ �����: " << right << endl;
	while (left > 0 && right >0)
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
