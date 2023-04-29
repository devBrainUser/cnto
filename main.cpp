#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int ccount1, ccount2,res = 0;

	cout << "Напишите количество вариантов в одном слоте:";
	cin >> ccount1;
	cout << endl;

	cout << "Напишите количество слотов:";
	cin >> ccount2;
	cout << endl;

	res = 1;

	for (int i = 0; i != ccount2; i++)
	{
		res = res * ccount1;
	}

	cout << res << " Вариантов";
}