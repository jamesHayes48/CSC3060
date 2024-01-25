#include <iostream>
#include <string>
using namespace std;

const int NUMBER_OF_SALSAS = 5;
const int NON_NEGATIVE = 0;

void jarsSold(int salsaSold[], string salsaNames[], int size, int least);
void displaySales(string salsaNames[], int salsaSold[], int size);
int totalSales(int salsaSold[], int size);

int main() {
	string salsaNames[NUMBER_OF_SALSAS] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int salsaSold[NUMBER_OF_SALSAS];

	jarsSold(salsaSold, salsaNames, NUMBER_OF_SALSAS, NON_NEGATIVE);
	
	
}

/*
Purpose: Prompt user for amount of jars of salsa sold
Parameters: array of numbers of salsa types sold, array of salsa names, 
number of salsa types, and lowest amount of salsa sold
Return: None, but change array salsaSold in main
*/
void jarsSold(int salsaSold[], string salsaNames[], int size, int least) {
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
Purpose: Find total sales of salsa
Paramters: array of number of salsa types sold and number of types of salsa
Return: total amount of salsas sold
*/
void displaySales(string salsaNames[], int salsaSold[], int size) {

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