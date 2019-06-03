#include <iostream>

using namespace std;

int numb;
void PositiveEvenRemainderMore(bool& positive, bool& even, bool& division5, bool& greater10)		//Функция проверки
{
	positive = numb > 0;
	even = numb % 2;
	division5 = numb % 5;
	greater10 = numb > 10;
}

int main()
{
	bool positive, even, division5, greater10;
	cout << "Enter the number: ";
	cin >> numb;
	PositiveEvenRemainderMore(positive, even, division5, greater10);
	positive ? cout << "Is the number positive? Yes" << endl : cout << "Is the number positive? No" << endl;
	even ? cout << "Is the number even? No" << endl : cout << "Is the number even? Yes" << endl;
	division5 ? cout << "The remainder of the division by 5 = " << division5 << endl : cout << "Is the remainder of the division by 5 ? No" << endl;
	greater10 ? cout << "Is the number greater than 10? Yes" << endl : cout << "Is the number greater than 10? No" << endl;
	system("pause");
	return 0;
}