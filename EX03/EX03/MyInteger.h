#ifndef MYINTEGER_H_
#define MYINTEGER_H_
#include <string>
using namespace std;

class MyInteger
{
private:
	int value;
public:
	MyInteger(int v);
	int getInt() const;
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;
	static bool isEven(int);
	static bool isOdd(int);
	static bool isPrime(int);
	static bool isEven(const MyInteger& );
	static bool isOdd(const MyInteger& );
	static bool isPrime(const MyInteger& );
	bool equalsInt(int) const;
	bool equalsOb(const MyInteger&);
	//I could not make them both be named equals() so I changed the names to differentiate integer from object.
	static int parseInt(const string&);
};
#endif
