#include "pch.h"
#include<iostream>
#include <string>

using namespace std;

int main()
{
	string name, age;
	cout << "what is your name? " << endl;
	cin >> name;
	cout << "what year, month and day were you born?" << endl;
	cin >> age;
	cout << "Hello , " << name << " You're " << age << " year month day." << endl;
	system("PAUSE");
	return 0;
}