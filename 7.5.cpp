/*
Name: James Hayes
Class : CS 3060 - 002
Project Name : 7.5 Programming Challenges

Description : This program prompts the user to enter the amount of food eaten for each monkey for 
5 days. It then finds and prints the average of food eaten, the least amount of food eaten by one
monkey, and the most amount of food eaten by one monkey.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Constants
const int NUMBER_OF_MONKEYS = 3;
const int DAYS_OF_WEEK = 5;
const int NON_NEGATIVE = 0;

// Function Prototypes
// Input for pounds of food eaten
void poundsEaten(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days, int least);

// Find and print average of food eaten
void findAverage(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days);

// Find and print least amount of food eaten
void findLeastAmount(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days);

// Find and print most amount of food eaten
void findMostAmount(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days);

int main() {
	// Array for storing pounds of food eaten
	double monkeysFed[NUMBER_OF_MONKEYS][DAYS_OF_WEEK] = { 0 };

	// Input user for pounds of food eaten
	poundsEaten(monkeysFed, NUMBER_OF_MONKEYS, DAYS_OF_WEEK, NON_NEGATIVE);

	// Find and print average 
	findAverage(monkeysFed, NUMBER_OF_MONKEYS, DAYS_OF_WEEK);

	// Find and print least amount of food eaten
	findLeastAmount(monkeysFed, NUMBER_OF_MONKEYS, DAYS_OF_WEEK);

	// Find and print most amount of food eaten
	findMostAmount(monkeysFed, NUMBER_OF_MONKEYS, DAYS_OF_WEEK);
	return 0;
}

/*
Purpose: Input user for pounds of food eaten
Parameters: Array of pounds of food eaten, number of monkeys, number of days, and 
least amount of that can be eaten
Return: None, but modify array of pounds of food eaten
*/
void poundsEaten(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days, int least) {
	// Iterate through rows and columns for each monkey
	for (int row = 0; row < monkeys; row++) {
		for (int column = 0; column < days; column++) {
			int pounds = 0;
			bool valid = false;

			// Keep prompting for valid input
			while (valid == false) {
				cout << "Enter pounds for monkey " << row + 1 << " on day " << column + 1 << endl;
				cin >> pounds;

				if (pounds >= least) {
					foodEaten[row][column] = pounds;
					valid = true;
				}
				else {
					cout << "Error, invalid input found, please enter a positive number\n";
				}
			}
		}
	}
}

/*
Purpose: Find and print average of food eaten
Parameters: Array of pounds of food eaten, number of monkeys, number of days
Return: None, but find and print average of food eaten
*/
void findAverage(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days) {
	double totalPounds = 0.0;
	double average = 0.0;

	for (int row = 0; row < monkeys; row++) {
		for (int column = 0; column < days; column++) {
			totalPounds += foodEaten[row][column];
		}
	}

	average = totalPounds / (days * monkeys);

	cout << fixed << setprecision(2) << 
		"An average of " << average << " pounds was eaten by the monkeys per day" << endl;
}

/*
Purpose: Find and print least amount of food eaten
Parameters: Array of pounds of food eaten, number of monkeys, number of days
Return: None, but find and print least amount of food eaten
*/
void findLeastAmount(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days) {
	double leastAmount = foodEaten[0][0];
	
	for (int row = 0; row < monkeys; row++) {
		for (int column = 0; column < days; column++) {
			if (foodEaten[row][column] < leastAmount) {
				leastAmount = foodEaten[row][column];
			}
		}
	}

	cout << fixed << setprecision(2) << 
		"The least amount of food eaten on a day was " << leastAmount << " pounds" << endl;
}

/*
Purpose: Find and print most amount of food eaten
Parameters: Array of pounds of food eaten, number of monkeys, number of days
Return: None, but find and print most amount of food eaten
*/
void findMostAmount(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days) {
	double mostAmount = foodEaten[0][0];

	for (int row = 0; row < monkeys; row++) {
		for (int column = 0; column < days; column++) {
			if (foodEaten[row][column] > mostAmount) {
				mostAmount = foodEaten[row][column];
			}
		}
	}

	cout << fixed << setprecision(2) << 
		"The most amount of food eaten on a day was " << mostAmount << " pounds" << endl;
}