#include <iostream>
#include <string>
#include "Fan.h"
using namespace std;

Fan::Fan()
{
	speed = s1;
	on = false;
	radius = 5;
}

int Fan::getSpeed()
{
	return speed;
}

bool Fan::getOn()
{
	return on;
}

double Fan::getRadius()
{
	return radius;
}

int Fan::setSpeed(int newSpeed)
{
	speed = (newSpeed >= 1 || newSpeed <= 3) ? newSpeed : 1;
	return speed;
}

bool Fan::setOn(bool newOn)
{
	on = newOn;
	return on;
}

double Fan::setRadius(double newRadius)
{
	radius = newRadius;
	return radius;
}