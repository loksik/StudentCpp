#include "pch.h"
#include<iostream>
#include <string>

using namespace std;

int main()
{
	int a;			//a ��� �������� ������� �� 1 �� 4 (����������� ��� ����� ������� � ��������� [ +  -  *  / ])
	int  e, f;		//������ � ������ �����
	cout << "Hello, my dear. What are the numbers?" << endl;
	cin >> e;		//������ �����
	cout << "  :1  " << e << endl;
	cin >> f;		//������ �����
	cout << "  :2  " << f << endl;
	cout << "What do you want to do? \n 1. +\n 2. -\n 3. *\n 4. /" << endl;
	cin >> a;
	if (a == 1)		//����� ���� ����������� �����
	{
		cout << "Result: " << e + f << endl;
	}
	if (a == 2)		//�������� ���� ����������� �����
	{
		cout << "Result: " << e - f << endl;
	}
	if (a == 3)		//������������ ���� ����������� �����
	{
		cout << "Result: " << e * f << endl;
	}
	if (a == 4)		//�������� ���� �����
	{
		cout << "Result: " << e / f << "." << e % f << endl;
	}
	return 0;
}