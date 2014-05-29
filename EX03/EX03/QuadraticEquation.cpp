#include <iostream>
#include <string>
#include "QuadraticEquation.h"
using namespace std;

QuadraticEquation::QuadraticEquation(int A, int B, int C)
{
	a = A;
	b = B;
	c = C;
}

int QuadraticEquation::getA()
{
	return a;
}

int QuadraticEquation::getB()
{
	return b;
}

int QuadraticEquation::getC()
{
	return c;
}

int QuadraticEquation::getDiscriminant()
{
	int dis = (b * b) - (4 * a * c);
	return dis; //or return dat
}

double QuadraticEquation::getRoot1()
{
	int dis = getDiscriminant();
	if (dis >= 0)
	{
		return (-b + sqrt(dis) / (2 * a));
	}
	else
		return 0;
}

double QuadraticEquation::getRoot2()
{
	int dis = getDiscriminant();
	if (dis >= 0)
	{
		return (-b - sqrt(dis) / (2 * a));
	}
	else
		return 0;
}