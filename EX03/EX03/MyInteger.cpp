#include <iostream>
#include <string>
#include "MyInteger.h"
using namespace std;

MyInteger::MyInteger(int v)
{
	value = v;
}

int MyInteger::getInt() const
{
	return value;
}

bool MyInteger::isEven() const
{
	return isEven(value);
}

bool MyInteger::isOdd() const
{
	return isOdd(value);
}

bool MyInteger::isPrime() const
{
	return isPrime(value);
}

bool MyInteger::isEven(int v)
{
	if ((v % 2) == 0)
	{
		return true;
	}
	else
		return false;
}

bool MyInteger::isOdd(int v)
{
	if ((v % 2) != 0)
	{
		return true;
	}
	else
		return false;
}

bool MyInteger::isPrime(int v)
{
	for (int i = 2; i < v; i++)
	{
		if ((v % i) == 0)
			return false;
	}
	return true; //“Once you eliminate the impossible, whatever remains, no matter how improbable, must be the truth.”-Sherlock Holmes
}

bool MyInteger::isEven(const MyInteger& i)
{
	return isEven(i.getInt());
}

bool MyInteger::isOdd(const MyInteger& i)
{
	return isOdd(i.getInt());
}

bool MyInteger::isPrime(const MyInteger& i)
{
	return isPrime(i.getInt());
}

bool MyInteger::equalsInt(int v) const
{
	if (v == value)
		return true;
	else
		return false;
}

bool MyInteger::equalsOb(const MyInteger& i)
{
	if (i.getInt() == value)
		return true;
	else
		return false;
}

int MyInteger::parseInt(const string& x)
{
	return atoi(x.c_str());
}