// Lab3.2.cpp 
// < Постолюк Максим > 
// Лабораторна робота № 3.2 
//  Розгалуження, задане формулою: функція з параметрами
// Варіант 22

#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double a;
	double b;
	double c;
	double x;//a,b,c,x, - вхідні параметри
	double F;//F - результат обчислення
	//Спосіб 1, розгалуження в короткій формі
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	if (x + 5 < 0 && c == 0)
		F = (1 / a * x) - b;
	if (x + 5 > 0 && c != 0)
		F = (x - 5) / x;
	if (!(x + 5 < 0 && c == 0) && !(x + 5 > 0 && c != 0))
		F = (10 * x) / c - 4;
	cout << "1) F = " << F << endl;
	//Спосіб 2, розгалуження в повній формі
	if (x + 5 < 0 && c == 0)
		F = (1 / a * x) - b;
	else if (x + 5 > 0 && c != 0)
			F = (x - 5) / x;
		else 
			F = (10 * x) / c - 4;
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}