
#include <iostream>

using namespace std;

double Funcchiya()
{
	double d1;
	double f[5];
	for (int i = 0; i != 5; i++)
	{
		cin >> d1;
		f[i] = (d1*2-d1+d1*(d1/2))/d1/5;
	}
	return f[0] * f[2] - f[1] / f[3] + f[3] * (f[4] - f[0]) - f[1];
}

int main()
{
	cout << "������� 5 �����" << endl;
	double result = Funcchiya();
	cout << "��������� " << result << endl;

	setlocale(LC_ALL, "Russian");
	system("PAUSE");
	return 0;
}