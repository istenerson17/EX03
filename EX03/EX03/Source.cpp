#include <iostream>
#include <string>
#include "Fan.h"
#include "QuadraticEquation.h"
#include "EvenNumber.h"
#include "MyInteger.h"
using namespace std;

string sort(string& s);

int main()
{
	//9.2
	Fan f1, f2;

	f1.setSpeed(3);
	f1.setRadius(10);
	f1.setOn(true);

	f2.setSpeed(2);
	f2.setRadius(5);
	f2.setOn(false);

	cout << "Speed: " << f1.getSpeed() << endl;
	cout << "On: " << f1.getOn() << endl;
	cout << "Radius: " << f1.getRadius() << endl << endl;

	cout << "Speed: " << f2.getSpeed() << endl;
	cout << "On: " << f2.getOn() << endl;
	cout << "Radius: " << f2.getRadius() << endl << endl;

	//9.6
	int A, B, C;
	cout << "Enter values for A, B, and C: " << endl;
	cin >> A >> B >> C;
	QuadraticEquation EQ1(A, B, C);

	int dis = EQ1.getDiscriminant();
	if (dis == 0)
		cout << "The equation has one root: " << EQ1.getRoot1() << endl << endl;
	else if (dis > 0)
		cout << EQ1.getRoot1() << " & " << EQ1.getRoot2() << endl << endl;
	else
		cout << "The equation has no real roots" << endl << endl;

	//9.11
	EvenNumber EN1(16);
	cout << "Next value: " << EN1.getNext() << endl;
	cout << "Previous value: " << EN1.getPrevious() << endl << endl;

	//10.4
	string s;
	cout << "Enter a string of characters: ";
	cin >> s;
	s = sort(s);
	cout << "The sorted string is " << s << endl << endl;
	
	//10.10
	int i;
	string x;
	cout << "Enter an integer: ";
	cin >> i;
	MyInteger V1(i);
	cout << "Int Value: " << V1.getInt() << endl;
	cout << "Even: " << V1.isEven() << endl;
	cout << "Odd: " << V1.isOdd() << endl;
	cout << "Prime: " << V1.isPrime() << endl;
	cout << "Even: " << V1.isEven(i) << endl;
	cout << "Odd: " << V1.isOdd(i) << endl;
	cout << "Prime: " << V1.isPrime(i) << endl;
	cout << "Even: " << V1.isEven(V1) << endl;
	cout << "Odd: " << V1.isOdd(V1) << endl;
	cout << "Prime: " << V1.isPrime(V1) << endl;
	cout << "Equivalent: " << V1.equalsInt(i) << endl;
	cout << "Equivalent: " << V1.equalsOb(V1) << endl << endl;
	
	cout << "Enter a string of numbers: ";
	cin >> x;
	cout << "Your converted string now is the integer: " << V1.parseInt(x) << endl;
	return 0;
} 

string sort(string& s)
{
	int size = s.size();
	int i = 0;
	int j = i + 1;
	do
	{
		j = i + 1;
		do
		{
			char tmp;
			if (s[i] > s[j])
			{
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
			j++;
		} while (j < size - 1);
		i++;
	} while (i < size - 1);
	return s;
}