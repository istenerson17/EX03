#ifndef EVENNUMBER_H_
#define EVENNUMBER_H_
using namespace std;

class EvenNumber
{
private:
	int value;
public:
	EvenNumber();
	EvenNumber(int);
	int getValue();
	int getNext();
	int getPrevious();
};
#endif