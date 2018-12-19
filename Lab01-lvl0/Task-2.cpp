#include<iostream>

using namespace std;

int main()
{
	char name[255];
	int  age, year, month, day;
	cout << "what is your name? " << endl;
	cin >> name;
	cout << "what year, month and day were you born?" << endl;
	cin >> year, month, day;
	if ((day > 20) and (month = 12) and (year >= 2000))
	{
		age=(2017-year);
	}
	else
	{
		age=(2018-year);
	}
	cout << "Hello , " << name << " You're " << age << " ." << endl;
	system("PAUSE");
	return 0;
}
