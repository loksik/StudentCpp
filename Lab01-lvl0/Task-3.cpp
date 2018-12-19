#include "pch.h"
#include<iostream>
#include <string>

using namespace std;

int main()
{

	int a = 20, b, con=0;
	cout << "Enter a number from 1 to 100" << endl;
	cin >> b;
	if (a == b)
	{
		con++;
		cout << con <<": "<< b << " Yes try it's " << endl;
	}
	else
	{
		while (a != b)
		{
			con++;
			if (a > b)
			{
				cout << con << ": " << b << " No it's not Bolishe" << endl;
			}
			else
			{
				cout << con << ": " << b << " No it's not Menishe" << endl;
			}
			cout << "Enter a number prefix" << endl;
			cin >> b;
			if (a == b)
			{
				con++;
				cout << con << ": " << b << "Yes try it's " << endl;
			}
		}
	}
	return 0;
}
