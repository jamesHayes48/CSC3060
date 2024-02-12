#include <iostream>
using namespace std;

const int SIZE = 20;

int linearSearchBench(int[], int, int);
int binarySearchBench(int[], int, int);

int main() {
	// Hold number of comparisons
	int comparisons;

	// Intialize array to hold 20 values
	int test[SIZE] = { 101, 142, 147, 189, 199, 207, 222,
	234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600 };
	
	// Display purpose of code
	cout << "Searching for value 521 located near end of array" << endl;

	// Perform linear search
	comparisons = linearSearchBench(test, SIZE, 521);
	
	// Display comparions made in linear search
	cout << "Comparions made by linear search: " << comparisons << endl;

	// Perform binary search
	comparisons = binarySearchBench(test, SIZE, 521);
	
	// Display comparisons made in binary search
	cout << "Comparions made by binary search: " << comparisons << endl;

	return 0;
}

int linearSearchBench(int array[], int size, int value) {
	// Variables
	// Check if value has been found
	bool found = false;

	// Hold number of comparisons
	int comparisons = 0;
	int index = 0;

	// Search while value has not been found
	// and index in bounds
	while(!found && index < size){
		comparisons++;
		if (array[index++] == value) {
			found = true;
		}
	}

	return comparisons;
}

int binarySearchBench(int array[], int size, int value) {
	// Variables
	// Check if value has been found
	bool found = false;

	// Hold number of comparisons
	int comparisons = 0;

	// Index managing
	int first = 0;
	int middle;
	int last = size - 1;

	while (!found && first <= last) {
		middle = (first + last) / 2;
		comparisons++;

		// Determine if the value was found
		if (array[middle] == value) {
			found = true;
		}
		// Determine if value is in lower half
		else if (array[middle] > value) {
			last = middle - 1;
		}
		// Determine if value is in upper half
		else {
			first = middle + 1;
		}
	}

	return comparisons;
}