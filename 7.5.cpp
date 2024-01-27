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

// Function Prototypes
// Input for pounds of food eaten
void poundsEaten(int foodEaten[][DAYS_OF_WEEK], int monkeys, int days);

int main() {
	int monkeysFed[NUMBER_OF_MONKEYS][DAYS_OF_WEEK] = { 0 };


	return 0;
}

void poundsEaten(int foodEaten[][DAYS_OF_WEEK], int monkeys, int days) {
	int pounds = 0;
	
	for (int row = 0; row < monkeys; row++) {
		for (int column = 0; column < days; column++) {
			cout << "Enter pounds for monkey " << row + 1 << " on day " << column + 1 << endl;
			if () {
				foodEaten[row][column] = pounds;
			}
		}
	}
}