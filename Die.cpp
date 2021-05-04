#include <cstdlib>//for rand and srand
#include <ctime>//for the time function
#include "Die.h"
using namespace std;
Die::Die(int numSides) {
	//get the system time.
	unsigned seed = time(0);
	//seed the random number generator.
	srand(seed);
	//set the number of sides.
	sides = numSides;
	//perform an initial roll.
	roll();
}
//the roll member function simulates the rolling of the die
void Die::roll() {
	//constant for the minimum die value
	const int MIN_VALUE = 1; //minimum die value
	//get a random value for the die
	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}
//the getSides mbmer function returns the number of for this die.
int Die::getSides() {
	return sides;
}
//the getValue member function returns the die value.
int Die::getValue() {
	return value;
}