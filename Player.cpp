#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
//constructor
Player::Player(string playerName) {
	//seed the random number generator
	srand(time(0));
	name = playerName;
	guess = "";
	points = 0;
}
//makeGuess member function causes the player to make a guess, either "cho - even" or "han - odd"
void Player::makeGuess() {
	const int MIN_VALUE = 0;
	const int MAX_VALUE = 1;
	int guessNumber; //for the user's guess
	//get a random number, either 0 or 1
	guessNumber = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	//convert the random number to Cho or Han
	if (guessNumber == 0)
		guess = "Cho (even)";
	else
		guess = "Han (odd)";
}
//addPoints member function adds a specified number of points to the player's current balance
void Player::addPoints(int newPoints) {
	points += newPoints;
}
//getName member function returns a player name.
string Player::getName() {
	return name;
}
//the getGuess member function returns a player's guess.
string Player::getGuess() {
	return guess;
}
//getPoints member function returns a player's points
int Player::getPoints() {
	return points;
}