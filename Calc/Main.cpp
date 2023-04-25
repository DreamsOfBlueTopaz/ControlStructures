main();

#if defined CALC_IF
	double a, b; //числа, вводимые с клавиатуры
	char s;     //Sign - знак операции
	cout << "¬ведите простое арифметическое выражение   ";
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
	double c, d; //числа, вводимые с клавиатуры
	char z;     //Sign - знак операции
	cout << "¬ведите простое арифметическое выражение   ";
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
