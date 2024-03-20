#pragma once
#include <string>

class Money
{
	long first;
	char second;
public:
	long GetFirst() const { return first; }
	int GetSecond() const { return (int)second; }
	void SetFirst(long value) { first = value; }
	void SetSecond(int value) { second = (int)value; }

	bool Init(long, char);
	void Read();
	void Display();
	std::string toString() const;


	static Money Plus(Money l, Money r);
	double Divide(double number);
	static Money Divide(Money l, Money r);
	//double Divide(Money l, Money r);
};
