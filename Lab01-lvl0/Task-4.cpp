#include "pch.h"
#include<iostream>
#include <string>

using namespace std;

int main()
{
	char d;
	do{
		int a;			//a это числовой порядок от 1 до 4 (выполняющие под собой функции в программе [ +  -  *  / ])
		int  e, f;		//Первое и второе число
		cout << "Hello, my dear. What are the numbers?" << endl;
		cin >> e;		//Первое число
		cout << "  :1  " << e << endl;
		cin >> f;		//Второе число
		cout << "  :2  " << f << endl;
		cout << "What do you want to do? \n 1. +\n 2. -\n 3. *\n 4. /" << endl;
		cin >> a;
		if (a == 1)		//Сумма двух натуральных чисел
		{
			cout << "Result: " << e + f << endl;
		}
		if (a == 2)		//Разность двух натуральных чисел
		{
			cout << "Result: " << e - f << endl;
		}
		if (a == 3)		//Произведение
		{
			cout << "Result: " << e * f << endl;
		}
		if (a == 4)		//Разность
		{
			cout << "Result: " << e / f << "." << e % f << endl;
		}
		cout << "do you want y/n ?" << endl;		//Вопрос у пользователя продолжать или нет
			cin >> d;
	
	} while (d !='y');
			return 0;
}
