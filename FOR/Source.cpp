#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");//�������� ��������
	setlocale(LC_ALL, "C");//�������� ��������� �� ���������


	//#define PRIMER
#ifdef PRIMER
	int n;
	cout << "������� ���������� ��������"; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}

	cout << endl;
#endif

	//#define FACTORIAL
#ifdef FACTORIAL
	int number;
	int factorial = 1;
	int i = 1;
	cout << "������� �����: "; cin >> number;

	for (int i = 1; i <= number; i++)



	{

		cout << i << "!=";
		factorial *= i;
		cout << factorial << "\t";

	}
	cout << endl;

#endif
	//#define STEPEN
#ifdef STEPEN
	double a;                                  //�����
	int n;                                  //�������
	double N = 1;                              //���� ������������ ��������� ��������� ����� �� ����

	cout << "������� �����: "; cin >> a;
	cout << "������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif
	//#define ASCII
#ifdef ASCII

	for (int i = 0; i < 256; i++)

	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}


#endif
	//#define TABLICA_UMN
#ifdef TABLICA_UMN
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";

			if (i * j < 100) cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;

	}

#endif
	//#define PIFAGOR
#ifdef PIFAGOR

	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout.width(5);
			cout << i * j << "\t";
		}
		cout << endl;
	}

#endif
	//#define FIBONACHI
#ifdef FIBONACHI

	int number;          //����� ����� �������� (���������� ��������)
	int a = 0;           //������ �����
	int b = 1;           //������ �����

	cout << "������� �����: "; cin >> number;

	for (int i = 1; i <= number; i++)

	{
		int c = a + b;   //���������� ��������� �+b � ���������� c
		a = b;           //�� ����� a ������������ ���������� b
		b = c;           //������ �� ����� b ������������ �
		cout << b << "\t";
	}
	cout << endl;
#endif
	//#define FIBONACHI_PREDEL
#ifdef FIBONACHI_PREDEL
	int number;
	int a = 0;
	int b = 1;

	cout << "������� �����: "; cin >> number;

	for (int i = 1; i <= number; i++)

	{

		int c = a + b;
		a = b;
		b = c;
		if (b <= number && b > 0) cout << b << "\t";
	}
	cout << endl;

#endif
	//#define SIMPLE_NUMBERS
#ifdef SIMPLE_NUMBERS

	int n;
	cout << "������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}

		}
		if (simple)cout << i << "\t";
	}
#endif

	//#define PRYMOUGOL 
#ifdef PRYMOUGOL
	int a;
	int b;
	cout << "������� ������ ��������������: "; cin >> a;
	cout << "������� ����� ��������������: "; cin >> b;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cout << '*';
		cout << endl;

	}
#endif

	//#define TREUG_1
#ifdef TREUG_1
	int a;
	cout << "������� ������ ������: "; cin >> a;
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j < i; j++)
			cout << '*';
		cout << endl;
	}

#endif

	//#define TREUG_2
#ifdef TREUG_2
	int a;
	cout << "������� ������ ������: "; cin >> a; cout << endl;
	for (int i = 0; i <= a; i++)
	{
		for (int j = a; j > i; j--)
			cout << '*';
		cout << endl;
	}
#endif

	//#define TREUG_3
#ifdef TREUG_3
	int a;
	cout << "������� ������ ������: "; cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (j >= i)
			{
				cout << '*';
			}

			else
			{
				cout << '.';
			}


		}

		cout << endl;
	}
#endif

	//#define TREUG_4
#ifdef TREUG_4
	int a;
	cout << "������� ������ ������: "; cin >> a;
	for (int i = a; i > 0; i--)
	{
		for (int j = 0; j <= a; j++)
		{
			if (j >= i)
			{
				cout << '*';
			}

			else
			{
				cout << '.';
			}


		}

		cout << endl;
	}
#endif

	//#define ROMB
#ifdef ROMB

	/*int a = 0;                           //������� ������� ���� + ��������� � ���������
										   //��������� ������������ �� ��������
		for (int i = 8; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				cout << ' ';
			}

				for (int u = 0; u <= a * 2; u++)       //��� ���� ��������� ����, �������
													   //���������� ���� ����� � ������� ������
				{
					if (u == a) cout << '/';

				}

				cout << endl;
				a++;
	}*/
	int n;
	cout << "������� ������ ������� ������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > 0; j--)
		{
			if (j == i + 1)
			{
				cout << '/';
			}
			else
			{
				cout << '.';
			}
		}
		for (int u = 0; u < n; u++)
		{
			if (u == i)
			{
				cout << '\\';
			}
			else
			{
				cout << '.';
			}
		}

		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				cout << '\\';
			}
			else
			{
				cout << '.';
			}
		}
		for (int u = n; u > 0; u--)
		{
			if (u == i + 1)
			{
				cout << '/';
			}
			else
			{
				cout << '.';
			}
		}
		cout << endl;
	}
	//��� ������ ��������� ������ ���� � ������� � ���������
	// � ��������� � �������������� +1


#endif

//#define PLUS_MINUS
#ifdef PLUS_MINUS
	int a;
	int b;
	cout << "������� ������ ������: "; cin >> a;
	cout << "������� ����� ������: "; cin >> b;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			if (i % 2 == 0 && j % 2 == 0 || (i + j) % 2 == 0)
			{
				cout << '+';
				cout << " ";
			}
			else
			{
				cout << '-';
				cout << " ";
			}
		cout << endl;

	}


#endif

	//��������� ��//////////////////////////////////////////////////////////

	//#define SHAH_MAT
#ifdef SHAH_MAT
		//�������������� ����� ��������� ������� ���������, ����� ���� �� ���������
	int a;
	cout << "Enter size: "; cin >> a;
	cout << endl;
	for (int i = 0; i < a; i++);                   //���� � �������������� ������
	{
		cout << "  ";
		for (int j = 0; j <= a * 2 + 1; j++)
			cout << char(196); cout << endl;
	}

	for (int i = 0; i < a; i++)                    //���� ��������+����������� ������� �����
	{
		cout << " "; cout << char(124); cout << ' ';
		for (int j = 0; j < a; j++)

			if (i % 2 == 0 && j % 2 == 0 || (i + j) % 2 == 0)
			{
				cout << char(219); cout << char(219);
			}
			else
			{
				cout << char(176); cout << char(176);
			}
		cout << ' '; cout << char(124); cout << endl;


	}
	for (int i = 0; i < a; i++);                   //���� � �������������� ������
	{
		cout << "  ";
		for (int j = 0; j <= a * 2 + 1; j++)
			cout << char(196); cout << endl;
	}
#endif

	//#define PLUS_MIN_1
#ifdef PLUS_MIN_1
		//��� ���������� ������ ������ �������� �������������, � ������ ������� ������������� 5*5
		//��� ����� ������� �����, ��� �������� � ����� ������� �� �������� �������� �������
	int a;
	cout << "������� ������ ������: "; cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			for (int j = 0; j < a; j++)
				if (i % 2 == 0 && j % 2 == 0 || (i + j) % 2 == 0)
				{
					cout << "* * * * *";
				}
				else
				{
					cout << "         ";
				}
			cout << endl;
		}





	}


#endif

	//#define PLUS_MIN_2
#ifdef PLUS_MIN_2 
		//��� ��������� � ����� ������ ������, � ������ ������� ����������� ��������. 
		//�� ��������� ������ �������� ������.
		//�� ��� ������ ������� ������� �������, ��� �������� (������ ����������� ��������� � �������)
	int a;
	cout << "������� ������ ������: "; cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < a; k++)
		{
			for (int j = 0; j < a; j++)
				if (i % 2 == 0 && j % 2 == 0 || (i + j) % 2 == 0)
				{
					for (int j = 0; j < a; j++)
						cout << "* ";
				}
				else
				{
					for (int j = 0; j < a; j++)
						cout << "  ";
				}
			cout << endl;
		}
	}


#endif

#define PASCAL
#ifdef PASCAL
	int h;
	cout << "������� ������ ������������: "; cin >> h;
	int nf = 1; //��������� n
	for (int n = 1; n <= h; n++)
	{
		cout << 1<< " ";
		nf *= n;
		int mf = 1;        //��������� m
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int nmf = 1; //��������� nm
			for (int nm = 1; nm <= n - m; nm++)
			{
				nmf *= nm;
			}
			cout << nf / (mf * nmf) << "\t";
		}
		cout << endl;

	}

		

#endif // PASCAL

}