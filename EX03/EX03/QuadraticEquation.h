#ifndef QUADRATICEQUATION_H_
#define QUADRATICEQUATION_H_
using namespace std;

class QuadraticEquation
{
private:
	int a, b, c;
public:
	QuadraticEquation(int A, int B, int C);

	int getA();
	int getB();
	int getC();
	int getDiscriminant();
	double getRoot1();
	double getRoot2();
};
#endif