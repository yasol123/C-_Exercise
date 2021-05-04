#include "Dealer.h"
#include "Die.h"
#include <string>
using namespace std;
//constructor
Dealer::Dealer() {
	//set the initial dice values to 0. we will not use these values.
	die1Value = 0;
	die2Value = 0;
}
void Dealer::rollDice() {
	//roll the die
	die1.roll();
	die2.roll();
	//save the dice values.
	die1Value = die1.getValue();
	die2Value = die2.getValue();
}
//get ChoOrHan member function returns the result of the dice roll, Cho - even, Han - odd
string Dealer::getChoOrHan() {
	string result;//to hold the result
	int sum = die1Value + die2Value;
	//determinne even or odd
	if (sum % 2 == 0)
		result = "Cho (even)";
	else
		result = "Han (odd)";
	//return the result
	return result;
}
//getDie1Value member function returns the value of Die#1
int Dealer::getDie1Value() {
	return die1Value;
}
int Dealer::getDie2Value() {
	return die2Value;
}