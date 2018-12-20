#include <iostream>

using namespace std;

int numb;
void PositiveEvenRemainderMore(bool& a, bool& b, bool& c, bool& d)		//‘ункци€ провер€юща€
{
	a = numb > 0;
	b = numb % 2;
	c = numb % 5;
	d = numb > 10;
}


int main()
{
	bool a, b, c, d;
	cout << "Enter the number: ";
	cin >> numb;
	PositiveEvenRemainderMore(a, b, c, d);
	if (a)
	{
		cout << "Is the number positive? Yes" << endl;
	}
	else
	{
		cout << "Is the number positive? No" << endl;
	}
	if (b) 
	{
		cout << "Is the number even? No" << endl;
	}
	else
	{
		cout << "Is the number even? Yes" << endl;
	}
	if (c)
	{
		cout << "The remainder of the division by 5 = " << c << endl;
		
	}
	else
	{
		cout << "Is the remainder of the division by 5 ? No" << endl;
	}
	if (d)
	{
		cout << "Is the number greater than 10? Yes" << endl;
	}
	else
	{
		cout << "Is the number greater than 10? No" << endl;
	}
	system("pause");
	return 0;
}