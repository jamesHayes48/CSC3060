/*
Name: James Hayes
Class: CSC 3060 - 002
Assignment: 11.14
Description: This program lets the user to select a bin of parts and whether 
to add or subtract a number of them. The program will not let the user enter a negative number 
or a number greater than the max number of parts. It will also prevent the user from entering a number that
makes the number of parts less than zero or greater than the max number of parts.
*/

#include <iostream>
#include <string>
using namespace std;

// Constants
// Number of bins
const int BINS = 10;

// Minimum
const int NON_NEGATIVE = 0;

// Sentinel value
const int SENTINEL = -1;

// Max number of parts
const int MAX_PARTS = 30;

// Struct
// Hold name and number of parts
// of each bin
struct inventoryBin {
	string name;
	int numParts;
};

// Function Prototypes
// Display bins name and number of parts
void displayBins(inventoryBin array[], int size);

// Prompt user for input and validate it
int inputValidation(int min, int max);

// Prompt user to add parts to bin selected
void addParts(inventoryBin* binSelected);

// Prompt user to remove parts from bin selected
void removeParts(inventoryBin* binSelected);

int main() {
	// Array to use
	inventoryBin binArray[BINS] = { {"Valve", 10}, {"Bearing", 5}, {"Bushing", 15}, {"Coupling", 21}, 
		{"Flange", 7}, {"Gear", 5}, {"Gear Housing", 5}, {"Vaccuum Gripper", 25}, {"Cable", 18}, {"Rod", 12}};
	
	// Store index of bin selected
	int binSelect;

	// Character for user to enter to choose operation
	char addOrRem;
	
	// Keep prompting until user enters sentinel value
	do {
		// Prompt user to select bin
		displayBins(binArray, BINS);
		cout << "Select bin to add or remove parts or enter -1 to quit: ";
		binSelect = inputValidation(1, 10);

		// If input is not sentinel value, prompt user for which operation to do
		if (binSelect != SENTINEL) {

			// Prompt user for operation to do
			cout << "Enter 'a' or 'r' to add or remove parts: ";
			cin >> addOrRem;

			// Add parts
			if (addOrRem == 'a') {
				addParts(&binArray[binSelect - 1]);
			}
			// Remove parts
			else if (addOrRem == 'r') {
				removeParts(&binArray[binSelect - 1]);
			}
			// Print error message
			else {
				cout << "Invalid operation entered";
			}
		}
	} while (binSelect != SENTINEL);

	// Exit program once sentinel value is entered
	return 0;
}

/*
Purpose: Display bins names and number of parts
Parameters: Array of bins and number of bins
Return: None, but print information of every bin on screen
*/
void displayBins(inventoryBin array[], int size) {
	cout << "--------------------------------------" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Bin " << i + 1 << " Name: " << array[i].name << "\n - Number of parts: " << 
			array[i].numParts << endl;;
	}
	cout << "--------------------------------------" << endl;
}

/*
Purpose: Validate user input
Parameters: Max and min
Return: An input that is within inclusively the min and max
*/
int inputValidation(int min, int max) {
	int input;
	bool valid = false;
	while (!valid) {
		cin >> input;
		if (input >= min && input <= max || input == SENTINEL) {
			valid = true;
		}
		// Print error message when flase input is entered
		else {
			cout << "\nInvalid number entered, please enter a number again: ";

			// Clear buffer
			cin.clear();
			cin.ignore();
		}
	}
	return input;
}

/*
Purpose: To prompt user with how many parts to add
Parameters: Pointer to bin selected on main
Return: None, but change value of parts on main if able to
*/
void addParts(inventoryBin* binSelected) {
	int partsAdded = 0;

	// Enter error value telling user they
	// cannot enter more than max number of parts
	if (binSelected->numParts == MAX_PARTS) {
		cout << "Cannot enter more than " << MAX_PARTS << endl;
	}
	// If the number of parts is below max number of parts
	// prompt user to enter number of parts
	else {
		cout << "Enter number of parts to add: ";
		partsAdded = inputValidation(NON_NEGATIVE, MAX_PARTS);

		// Check if number of parts entered does not end up in
		// more parts thant max number of parts
		if (binSelected->numParts + partsAdded > MAX_PARTS) {
			cout << "Error, can only hold up to" << MAX_PARTS << " parts" << endl;
		}
		// If it does not exceed limit, do operation
		else {
			binSelected->numParts = binSelected->numParts + partsAdded;
		}
	}
}

/*
Purpose: To prompt user to remove number of parts 
Parameters: Pointer to bin selected on main
Return: None, but change value of parts on main stack if able to
*/
void removeParts(inventoryBin* binSelected) {
	int partsRemoved = 0;

	// Print error message if number of parts is already zero
	if (binSelected->numParts == NON_NEGATIVE) {
		cout << "Cannot remove from 0 parts" << endl;
	}
	// If not, then prompt user to enter number of parts to remove
	else {
		cout << "Enter number of parts to remove: ";
		partsRemoved = inputValidation(NON_NEGATIVE, MAX_PARTS);

		// If number of parts is negative, then print error message
		if (binSelected->numParts - partsRemoved < NON_NEGATIVE) {
			cout << "Error, cannot have negative number of parts" << endl;
		}
		// If not, do operation
		else {
			binSelected->numParts =  binSelected->numParts - partsRemoved;
		}
	}
}