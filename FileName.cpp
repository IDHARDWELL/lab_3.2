// Lab3.2.cpp 
// < �������� ������ > 
// ����������� ������ � 3.2 
//  ������������, ������ ��������: ������� � �����������
// ������ 22

#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double a;
	double b;
	double c;
	double x;//a,b,c,x, - ����� ���������
	double F;//F - ��������� ����������
	//����� 1, ������������ � ������� ����
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
	//����� 2, ������������ � ����� ����
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