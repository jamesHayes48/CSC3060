/*
Name: James Hayes
Assignment: Number 26 on Midterm
Description: This program allows the user to enter number of wins for each team in the world rugby championship. The input can only be 0 or 1 and not negative negative numbers
This program then prints out stats for each of the teams in the championship.
*/

// Header files
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

// Struct to hold rugby games for each team
struct RugbyGame {
	string name;
	int game1;
	int game2;
	int game3;
	int divisionWins;
};

// Function Prototypes
void setWins(RugbyGame &team);
void printWins(RugbyGame games[SIZE]);

int main() {
	struct RugbyGame championship[SIZE] = { {"America's", 0, 0, 0, 0}, 
		{"European Union", 0, 0, 0, 0}, 
		{"Australia", 0, 0, 0, 0}, 
		{"Africa", 0, 0, 0, 0}, 
		{"South Africa", 0, 0, 0, 0} };

	// Enter wins for each team
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter Wins for " << championship[i].name << endl;

		setWins(championship[i]);
	}

	// Print stats for each team
	printWins(championship);

	// Exit program
	return 0;

}

/*
Purpose: To allow user to enter wins for each team
Parameters: Address of struct on main
*/
void setWins(RugbyGame &team) {
	bool notZero = false;
	cout << "Enter win (1) or loss (0) for game 1: ";
	while (notZero == false) {
		cin >> team.game1;

		if (team.game1 >= 0 && team.game1 < 2)
			notZero = true;
		else
			cout << "Not a valid number!" << endl;
	}

	notZero = false;
	
	cout << "Enter win (1) or loss (0) for game 2: ";
	while (notZero == false) {
		cin >> team.game2;

		if (team.game2 >= 0 && team.game2 < 2)
			notZero = true;
		else
			cout << "Not a valid number!" << endl;
	}

	notZero = false;

	cout << "Enter win (1) or loss (0) for game 3: ";
	while (notZero == false) {
		cin >> team.game3;

		if (team.game3 >= 0 && team.game3 < 2)
			notZero = true;
		else
			cout << "Not a valid number!" << endl;
	}

	team.divisionWins = team.game1 + team.game2 + team.game3;

}

/*
Purpose: Print stats of each team
Parameters: Array of structs on main
*/
void printWins(RugbyGame games[SIZE]) {
	cout << "\nStats for each team" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "\n----------------------------------------------\n";
		cout << "Name: " << games[i].name << endl;
		cout << "Game 1: " << games[i].game1 << endl;
		cout << "Game 2: " << games[i].game2 << endl;
		cout << "Game 3: " << games[i].game3 << endl;
		cout << "Total wins: " << games[i].divisionWins << endl;
		cout << "\n----------------------------------------------\n";
	}
}