/*
Name: James Hayes
Project Name: 9.9 Programming Challenges
Description: The program first allocated the memory and inputs user for array (assuming sorted in
ascending or descending order). The program then finds the median of array, 
either even or odd number of elements and returns it back to main to print value found.
*/

#include <iostream>
using namespace std;

// Constants
// Size of array
const int SIZE = 10;

// Function Prototypes
// Finds and returns median of a sorted array
double findMedian(int* arrayPtr, int size);

int main() {
	// Array
	int numArray[SIZE] = { 0 };
	int input = 0;

	// Allow user input to enter any number
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter " << SIZE << "numbers in either ascending or descending order : ";
		cin >> input;
		numArray[i] = input;
	}

	double median = findMedian(numArray, SIZE);

	cout << "The median of the array is " << median << endl;

	// End program
	return 0;
}

/*
Purpose: Find median of array
Parameters: Sorted array, size of sorted array
Return: Double median value
*/
double findMedian(int* arrayPtr, int size) {
	double median = 0;
	int middleIndex = (size / 2) - 1;

	// If number of elements in array is odd,
	// find median by finding midde value
	if (size % 2 != 0) {
		middleIndex = size / 2;
		median = arrayPtr[middleIndex];
	}
	// If number of elements is even, find value
	// to the right of the middle index and add them
	// together and divide.
	else{
		median = (arrayPtr[middleIndex] + arrayPtr[middleIndex+1]) / 2.0;
	}

	// Return found median
	return median;
}