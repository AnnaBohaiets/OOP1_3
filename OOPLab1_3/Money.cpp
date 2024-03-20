#include "Money.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool Money::Init(long x, char y)
{

	if (x >= 0 && y <= '9' && y >= '0')
	{
		if (y <= '9' && y >= '0')
			second = static_cast<int>(y) - 48;
		first = x;
		return true;
	}
	else
		return false;
}

void Money::Read()
{
	long x; char y;

	do
	{
		cout << "Input information: " << endl;
		cout << "Money = "; cin >> x;
		cout << "Coin = "; cin >> y;

	} while (!Init(x, y));

}

void Money::Display()
{
	cout << endl;
	cout << "Money = " << first << "," << static_cast<int>(second) << endl;

}

string Money::toString() const
{
	stringstream sout;

	sout << "Money = " << first << "," << static_cast<int>(second) << endl;

	return sout.str();

}

Money Money::Plus(Money l, Money r)
{
	Money t;
		t.first = l.first + r.first;
		t.second = l.second + r.second;
		return t;
	

}

double Money::Divide(double number)
{
	int coin;
	coin = static_cast<int>(second);

	double result = first + (coin / 10.0);

	return result / number;
}

Money Money::Divide(Money l, Money r)
{
	Money t;
	t.first = l.first / r.first;
	t.second = l.second / r.second;
	return t;
}

//double Money::Divide(Money l, Money r) {
//	int lcoin = static_cast<int>(l.second);
//	double lresult = l.first + (lcoin / 10.0);
//	int rcoin = static_cast<int>(r.second);
//	double rresult = r.first + (rcoin / 10.0);
//	return lresult / rresult;
//}