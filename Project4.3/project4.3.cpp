// Lab_04_3.cpp
// < Пастух Оксани >
// Лабораторна робота № 4.
// Табуляція функції , заданої фориулою: функція з параметрами .
// Варіант 14

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x, a, b, c, F, xp, xk, dx;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------------------------" << endl;
	cout << "|" << setw(4) << "x" << "    |"
		<< setw(4) << "a" << "    |"
		<< setw(4) << "b" << "    |"
		<< setw(4) << "c" << "    |"
		<< setw(4) << "F" << "   |" << endl;
	cout << "---------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x + c < 0 && a != 0)
			F = -a * (x * x) - b;
		else
			if (x + c > 0 && a == 0)
				F = (x - a) / (x - c);
			else
				F = (x / c) + (c / x);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(7) << setprecision(2) << a
			<< " |" << setw(7) << setprecision(2) << b
			<< " |" << setw(7) << setprecision(2) << c
			<< " |" << setw(7) << setprecision(3) << F
			<< "|" << endl;
		x += dx;
	}
	cout << "---------------------------------------------" << endl;

	return 0;
}