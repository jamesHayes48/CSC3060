#include<iostream>
#include <string>
#include<iomanip>
using namespace std;

int getTotal(int[], int);
int posOfLargest(int[], int);
int posOfSmallest(int[], int);

int main() {
	const int NUM_TYPES = 5;

	string types[NUM_TYPES] = { "mild", "medium", "sweet", "hot", "zesty" };

	int sales[NUM_TYPES];

	// Total Number of jars sold
	int totalJarsSold;
	// Salsa that sold the most
	int highSalesProduct;

	// Get number of jars sold of each type
	int lowSalesProduct;
	
	for (int type = 0; type < NUM_TYPES; type++) {
		// Get Input
		cout << "Enter number of sales for " << types[type] << ":";
		cin >> sales[type];

		// Validate
		while (sales[type] < 0) {
			cout << "Jars sold must be 0 or more, please reenter" << endl;
			cin >> sales[type];
		}

	}

	totalJarsSold = getTotal(sales, NUM_TYPES);
	highSalesProduct = posOfLargest(sales, NUM_TYPES);
	lowSalesProduct = posOfSmallest(sales, NUM_TYPES);

	cout << endl << endl;
	cout << "SALSA SALES REPORT";
	cout << "Name        Jars Sold";

	for (int salsaType = 0; salsaType < NUM_TYPES; salsaType++) {
		cout << types[salsaType] << setw(21) << sales[salsaType] << endl;
	}

	cout << "\n Total Sales" << setw(15) << totalJarsSold << endl;
	cout << "Best Sales" << setw(15) << types[highSalesProduct] << endl;
	cout << "Low Sales" << setw(15) << types[lowSalesProduct] << endl;
}

int getTotal(int values[], int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += values[i];
	}
	return total;
}

// Return index of largest
int posOfLargest(int values[], int size) {
	int indexOfLargest = 0;
	for (int i = 0; i < size; i++) {
		if (values[i] >  values[indexOfLargest]) {
			indexOfLargest = i;
		}
	}
	return indexOfLargest;
}

// Reuturn index of smallest sales
int posOfSmallest(int values[], int size) {
	int indexOfSmallest = 0;
	for (int i = 0; i < size; i++) {
		if (values[i] < values[indexOfSmallest]) {
			indexOfSmallest = i;
		}
	}
	return indexOfSmallest;
}

