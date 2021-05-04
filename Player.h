#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player {
private:
	string name;
	string guess;
	int points;
public:
	Player(string); //constructor
	void makeGuess();//causes player to make a guess
	void addPoints(int); // Adds points to the player.
	string getName(); //returns the player's name
	string getGuess(); // returns the player's guess
	int getPoints();//returns the player's points
};
#endif