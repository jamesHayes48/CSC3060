/*
Name: James Hayes
Class: CS 3060 - 002
Project Name: 7.3 Programming Challenges

Description: This program prompts the user to enter the total number of sales for each type of 
salsa. The program then prints out the total number of sales of each salsa type, and the total
sales. The program also finds and prints the name and sales of both the highest and lowest selling
salsas.
*/

#include <iostream>
#include <string>
using namespace std;

// Constants
const int NUMBER_OF_SALSAS = 5;
const int NON_NEGATIVE = 0;

// Function Prototypes
// Prompt user for number of salsas sold
void jarsSold(int salsaSold[], string salsaNames[], int size, int least);

// Display the sales for each type of salsa
void displaySales(string salsaNames[], int salsaSold[], int size);

// Calculate total number of sales
int totalSales(int salsaSold[], int size);

// Find and print best selling salsa
void findHighestSalsa(string salsaNames[], int salsaSold[], int size);

// Find and pritn lowest selling salsa
void findLowestSalsa(string salsaNames[], int salsaSold[], int size);

int main() {
	string salsaNames[NUMBER_OF_SALSAS] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int salsaSold[NUMBER_OF_SALSAS];

	// Prompt user for
	jarsSold(salsaSold, salsaNames, NUMBER_OF_SALSAS, NON_NEGATIVE);
	displaySales(salsaNames, salsaSold, NUMBER_OF_SALSAS);
	
	// Find and print best and lowest selling salsa
	findHighestSalsa(salsaNames, salsaSold, NUMBER_OF_SALSAS);
	findLowestSalsa(salsaNames, salsaSold, NUMBER_OF_SALSAS);

	return 0;
}

/*
Purpose: Prompt user for amount of jars of salsa sold
Parameters: array of numbers of salsa types sold, array of salsa names, 
number of salsa types, and lowest amount of salsa sold
Return: None, but change array salsaSold in main
*/
void jarsSold(int salsaSold[], string salsaNames[], int size, int least) {
	// Iterate through every salsa for input
	for (int i = 0; i < size; i++) {
		int input = 0;
		bool valid = false;

		// Keep prompting until valid input is entered
		while (valid == false) {
			cout << "Enter how many " << salsaNames[i] << " salsa jars were sold in the last month.\n";
			cin >> input;

			if (input >= least) {
				valid = true;
				salsaSold[i] = input;
			}
			else {
				cout << "Error, negative value was entered, please enter positive values\n";
			}
		}
	}
}

/*
Purpose: Print the types of salsa and their sales
Paramters: array of number of salsa types sold , names of salsa, number of types of salsa
Return: None, but prints salsa types and their total sales. Also prints total number of 
salsas sold
*/
void displaySales(string salsaNames[], int salsaSold[], int size) {
	cout << "-----------------\n";
	cout << "Type:\tSales:" << endl;
	for (int i = 0; i < size; i++) {
		cout << salsaNames[i] << "\t" << salsaSold[i] << endl;
	}
	cout << "-----------------\n";

	cout << "Total Sales: " << totalSales(salsaSold, size) << endl;
}

/*
Purpose: Find total sales of salsa
Paramters: array of number of salsa types sold and number of types of salsa
Return: total amount of salsas sold
*/
int totalSales(int salsaSold[], int size) {
	int totalSold = 0;

	for (int i = 0; i < size; i++) {
		totalSold += salsaSold[i];
	}

	return totalSold;
}

/*
Purpose: Find and print most sold salsa type
Parameters: Types of salsa, salsa sales, and number of salsas
Return: None, but prints out the most sold type of salsa
*/
void findHighestSalsa(string salsaNames[], int salsaSold[], int size) {
	int mostSales = salsaSold[0];
	string mostSoldSalsa = salsaNames[0];

	// Iterate through every salsa sold and decide if it sold more
	for (int i = 1; i < size; i++) {
		if (salsaSold[i] > mostSales) {
			mostSoldSalsa = salsaNames[i];
			mostSales = salsaSold[i];
		}
	}

	cout << mostSoldSalsa << " is the most sold salsa type with " << mostSales << 
		" sales last month" << endl;
}

/*
Purpose: Find and print least sold salsa type
Parameters: Types of salsa, salsa sales, and number of salsas
Return: None, but prints out the least sold type of salsa
*/
void findLowestSalsa(string salsaNames[], int salsaSold[], int size) {
	int leastSales = salsaSold[0];
	string leastSoldSalsa = salsaNames[0];

	// Iterate through every salsa to find out the least sold salsa
	for (int i = 1; i < size; i++) {
		if (salsaSold[i] < leastSales) {
			leastSoldSalsa = salsaNames[i];
			leastSales = salsaSold[i];
		}
	}

	cout << leastSoldSalsa << " is the least sold salsa type with " << leastSales <<
		" sales last month" << endl;
}