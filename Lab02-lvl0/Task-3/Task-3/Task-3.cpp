#include <iostream>

using namespace std;

bool isExceeded(int numToCalculateFactorial, int& stepNumber)
{
	int Sravni, num = 1;
	bool  TrOrFa = false;													//Логическое распреление True Or False/
	cout << "Нужно сравнить значение факториала с :";
	cin >> Sravni;															//Ввод на консоль число для сравнения
	for (int i = 1; i <= numToCalculateFactorial; i++)						//Вычисление факториала
	{
		num = num * i;														//Вычисление шага увиличения
		if (num >= Sravni)
		{
			TrOrFa = true;
			stepNumber = i - 1;
			break;															//Предварительное окончание цикла (если услувие было выполнено)
		}
	}
	return TrOrFa;															//Возвращение логического значения
}

int main()
{
	int numToCalculateFactorial, stepNumber;
	cout << "Введите число для расчета факториала: ";
	cin >> numToCalculateFactorial;
	bool TrOrFa = isExceeded(numToCalculateFactorial, stepNumber);			//Запуск функции
	if (TrOrFa != false)
	{
		cout << "Факториал превысил значение? ДА.\nНомер шага: " << stepNumber << endl;
	}
	else
	{
		if (TrOrFa != true)
		{
			cout << "Факториал превысил значение? НЕТ." << endl;
		}
		else
		{
			cout << "Факториал превысил значение? НЕТ\nФакториал рарен со сравнивнимым числом!" << endl;
		}
	}
	setlocale(LC_ALL, "ru");
	system("PAUSE");
	return 0;
}