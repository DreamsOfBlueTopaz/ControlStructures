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

#ifdef SHOOTER

	cout << "������ ����" << endl;
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		if((int)key==119)
	{ 
		cout << "������" << endl;
	}
		else if ((int)key == 115)
		{
			cout << "�����" << endl;
		}
		else if ((int)key == 97)
		{
			cout << "�����" << endl;
		}
		else if ((int)key == 100)
		{
			cout << "������" << endl;
		}
		else if ((int)key == 32)
		{
			cout << "������" << endl;
		}
		else if ((int)key == 13)
		{
			cout << "�����!" << endl;
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