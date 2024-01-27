/*
Name: James Hayes
Class : CS 3060 - 002
Project Name : 7.5 Programming Challenges

Description : This program prompts the user to enter the total number of sales for each type of
salsa.The program then prints out the total number of sales of each salsa type, and the total
sales.The program also finds and prints the name and sales of both the highest and lowest selling
salsas.
*/

#include <iostream>
using namespace std;

// Constants
const int NUMBER_OF_MONKEYS = 3;
const int DAYS_OF_WEEK = 5;
const int NON_NEGATIVE = 0;

// Function Prototypes
// Input for pounds of food eaten
void poundsEaten(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days, int least);

void findAverage(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days);

void findLeastAmount(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days);

void findMostAmount(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days);

int main() {
	double monkeysFed[NUMBER_OF_MONKEYS][DAYS_OF_WEEK] = { 0 };

	poundsEaten(monkeysFed, NUMBER_OF_MONKEYS, DAYS_OF_WEEK, NON_NEGATIVE);

	return 0;
}

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

void findAverage(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days) {
	double totalPounds = 0.0;
	double average = 0.0;

	for (int row = 0; row < monkeys; row++) {
		for (int column = 0; column < days; column++) {
			totalPounds += foodEaten[row][column];
		}
	}

	average = totalPounds / days;

	cout << "An average of " << average << "lb was eaten by the monkeys per day" << endl;
}

void findLeastAmount(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days) {
	double leastAmount = foodEaten[0][0];
	
	for (int row = 0; row < monkeys; row++) {
		for (int column = 0; column < days; column++) {
			if (foodEaten[row][column] < leastAmount) {
				leastAmount = foodEaten[row][column];
			}
		}
	}

	cout << "The least amount of food eaten on a day was " << leastAmount << "lb" << endl;
}

void findMostAmount(double foodEaten[][DAYS_OF_WEEK], int monkeys, int days) {
	double mostAmount = foodEaten[0][0];

	for (int row = 0; row < monkeys; row++) {
		for (int column = 0; column < days; column++) {
			if (foodEaten[row][column] < mostAmount) {
				mostAmount = foodEaten[row][column];
			}
		}
	}

	cout << "The most amount of food eaten on a day was " << mostAmount << "lb" << endl;
}