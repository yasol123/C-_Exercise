#ifndef DEALER_H
#define DEALER_H
#include <string>
#include "Die.h"
using namespace std;

class Dealer {
private:
	Die die1;//object for die 1
	Die die2;//obj for die 2
	int die1Value; //value of die#1
	int die2Value;//value of die#2
public:
	Dealer();
	void rollDice();
	string getChoOrHan();//to get the result (Cho or Han)
	int getDie1Value();//get die #1 value
	int getDie2Value();//get die#2 value
};
#endif