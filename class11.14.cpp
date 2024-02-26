#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

// Constant for array size
const int NUM_BINS = 10;

// Bin strutures
struct inventoryBin {
	// Name of parts in bin
	string name;

	// Number of parts in bin
	int numParts;
};

// Function prototypes
void selectBin(inventoryBin[], int);
void addParts(inventoryBin&, int);
void removeParts(inventoryBin&, int);

int main() {
	// Choice from user
	int choice = 0;
	
	// Array of bins declared
	inventoryBin arrayBins[NUM_BINS] = { 
		{"Valve", 10}, 
		{"Bearing", 5}, 
		{"Bushing", 15}, 
		{"Coupling", 21},
		{"Flange", 7}, 
		{"Gear", 5}, 
		{"Gear Housing", 5}, 
		{"Vaccuum Gripper", 25}, 
		{"Cable", 18}, 
		{"Rod", 12} 
	};


	do {
		// Print out array
		for (int count = 0; count < 10; count++) {
			cout << "Bin #" << setw(3) << (count + 1);
			cout << ", Part: " << arrayBins[count].name << setw(3);
			cout << ", Number of parts: " << arrayBins[count].numParts << endl;
		}

		cout << "\nEnter 0 to quit or choose a bin number: ";
		cin >> choice;

		while (choice < 0 || choice > NUM_BINS) {
			cout << "\Enter 0 to quit or choose a bin bumber: ";
			cin >> choice;
		}

		if (choice != 0)
			selectBin(arrayBins, choice - 1);

	} while (choice != 0);

	return 0;
}

void selectBin(inventoryBin bins[], int choice) {
	int numParts;
	char aorr;

	// Get input
	cout << "Add or Remove parts: ";
	cin >> aorr;

	while (toupper(aorr) != 'A' && toupper(aorr) != 'R') {
		cout << "Enter A or R: ";
		cin >> aorr;
	}

	if (toupper(aorr) == 'A') {
		// Get number of parts to add
		cout << "How many parts to add: ";
		cin >> numParts;

		addParts(bins[choice], numParts);
	}
	else {
		// Get number of parts to remove
		cout << "How many parts to remove: ";
		cin >> numParts;

		removeParts(bins[choice], numParts);
	}
}

void addParts(inventoryBin& bin, int numAdd) {
	// Validate if number and or operation is valid
	// Cannot hold more than 30 values
	if (numAdd < 0) {
		cout << "\nError: use positive values. \n";
	}
	else if (numAdd + bin.numParts > 30){
		cout << "\nError: bin can only hold 30 parts\n";
	}
	else {
		bin.numParts += numAdd;
	}
}

void removeParts(inventoryBin& bin, int numRemove) {
	// Validate if number and or operation is valid
	// Cannot hold negative values
	if (numRemove < 0) {
		cout << "\nError: use positive values. \n";
	}
	else if (bin.numParts - numRemove < 0) {
		cout << "\nError: bin cannot hold negative amount of parts\n";
	}
	else {
		bin.numParts -= numRemove;
	}
}