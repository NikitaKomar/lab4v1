#include <iostream>
#include "Polynomial.h"

using namespace std;

int main()
{
	try
	{
		cout << "Format: 4*x^2-2*x^1..\n";
		cout << "vazhno ne zabivat' o znake umnozheniya mezhdu koef. i X\n";
		Polynomial pol1;
		cout << "perviy polynom:\n";
		cin >> pol1;
		Polynomial pol2;
		cout << "vtory polynom:\n";
		cin >> pol2;
		cout << " x:\n";
		double x;
		cin >> x;
		cout << "Summa: " << pol1 + pol2;
		cout << "\nRaznica: " << pol1 - pol2;
		cout << "\nUmnozhenie: " << pol1 * pol2;
		cout << "\nFrst polynom(x) = " << pol1.calculate(x);
		cout << "\nScndpolynom(x) = " << pol2.calculate(x);
	}
	catch (...)
	{
		cout << "err";
	}
}