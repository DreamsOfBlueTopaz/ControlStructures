main();

#if defined CALC_IF
	double a, b; //�����, �������� � ����������
	char s;     //Sign - ���� ��������
	cout << "������� ������� �������������� ���������   ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	
	else
	{
		cout << "Error: No operation" << endl;
	}

#endif

#define CALC_SWITCH
#if defined CALC_SWITCH
	double c, d; //�����, �������� � ����������
	char z;     //Sign - ���� ��������
	cout << "������� ������� �������������� ���������   ";
	cin >> c >> z >> d;
	switch (z)
	{
		case '+':cout << c << "+" << d << "=" << c + d << endl;break;
		case '-':cout << c << "-" << d << "=" << c - d << endl;break;
		case '*':cout << c << "*" << d << "=" << c * d << endl;break;
		case '/':cout << c << "/" << d << "=" << c / d << endl;break;
		default: cout << "Error: No operation" << endl;
	}

#endif


}
