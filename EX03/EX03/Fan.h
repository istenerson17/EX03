#ifndef FAN_H_
#define FAN_H_
using namespace std;

class Fan
{
private:
	int speed;
	const int s1 = 1, s2 = 2, s3 = 3;
	bool on;
	double radius;
public:
	int getSpeed();
	bool getOn();
	double getRadius();
	int setSpeed(int newSpeed);
	bool setOn(bool newSet);
	double setRadius(double newRadius);

	Fan();
};
#endif
