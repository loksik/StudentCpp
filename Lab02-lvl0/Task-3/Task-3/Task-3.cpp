#include <iostream>

using namespace std;

bool isExceeded(int numToCalculateFactorial, int& stepNumber)
{
	int Sravni, num = 1;
	bool  TrOrFa = false;													//���������� ����������� True Or False/
	cout << "����� �������� �������� ���������� � :";
	cin >> Sravni;															//���� �� ������� ����� ��� ���������
	for (int i = 1; i <= numToCalculateFactorial; i++)						//���������� ����������
	{
		num = num * i;														//���������� ���� ����������
		if (num >= Sravni)
		{
			TrOrFa = true;
			stepNumber = i - 1;
			break;															//��������������� ��������� ����� (���� ������� ���� ���������)
		}
	}
	return TrOrFa;															//����������� ����������� ��������
}

int main()
{
	int numToCalculateFactorial, stepNumber;
	cout << "������� ����� ��� ������� ����������: ";
	cin >> numToCalculateFactorial;
	bool TrOrFa = isExceeded(numToCalculateFactorial, stepNumber);			//������ �������
	if (TrOrFa != false)
	{
		cout << "��������� �������� ��������? ��.\n����� ����: " << stepNumber << endl;
	}
	else
	{
		if (TrOrFa != true)
		{
			cout << "��������� �������� ��������? ���." << endl;
		}
		else
		{
			cout << "��������� �������� ��������? ���\n��������� ����� �� ������������ ������!" << endl;
		}
	}
	setlocale(LC_ALL, "ru");
	system("PAUSE");
	return 0;
}