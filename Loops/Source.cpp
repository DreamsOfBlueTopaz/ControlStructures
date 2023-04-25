#include<iostream>
#include<conio.h>
using namespace std;

void main()

{
//#define PRIMER

#ifdef PRIMER
setlocale(LC_ALL, "");
	int i = 0; //счетчик цикла
	int n; //количество итераций
	cout << "¬ведите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << "Loops" << endl;
		i++;
	}
#endif PRIMER




		char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;

	} while (true);

}