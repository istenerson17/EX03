#include <iostream>
#include <string>
#include "EvenNumber.h"
using namespace std;

EvenNumber::EvenNumber()
{
	value = 0;
}

EvenNumber::EvenNumber(int v)
{
	if (v % 2 == 0)
	{
		value = v;
	}
	else
	{
		v++; // IT MUST BE EVEN
		value = v;
	}
}

int EvenNumber::getValue()
{
	return value;
}

int EvenNumber::getNext()
{
	return value + 2;
}

int EvenNumber::getPrevious()
{
	return value - 2;
}