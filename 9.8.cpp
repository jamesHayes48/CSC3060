/*
Name: James Hayes
Project: Programming Challenges 9.8
Description: This program calculates and finds the mode of an array of 8 elements. 
The program first prompts the user to enter an array, then the function finds and
returns the mode. If all of the numbers occur more than once, then -1 is returned.
The program then displays the mode, if there is one.
*/

#include <iostream>
using namespace std;
// Constants
// Size of array
const int SIZE = 8;

// Function Prototype
// Find and returns mode of array
int findMode(int* arrayPtr, int size);

int main() {
	int array[SIZE] = { 0 };
	int noMode = -1;
	int input = 0;

	// Prompt user for numbers to enter in array
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter a number for array: ";
		cin >> input;
		array[i] = input;
		cout << endl;
	}

	int mode = findMode(array, SIZE);

	// Print mode of array if there is one
	if (mode != noMode) {
		cout << "The mode is: " << mode;
	}
	// If not, print message
	else {
		cout << "There is no mode";
	}

	// Exit program
	return 0;
}

/*
Purpose: Find and return mode
Paramters: Address of array, size of array
Return: Index of most frequent work
*/
int findMode(int* arrayPtr, int size) {
	// Intialize and declare array for counting frequency
	// to zero
	int countArray[SIZE] = {0};

	// Count frequency of each number and store in order in count arry
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arrayPtr[i] == arrayPtr[j]) {
				countArray[i]++;
			}
		}
	}

	// Set max index to first element
	int maxIndex = 0;

	// Compare frequencies of each element of array to each other
	for (int countElement = 1; countElement < size; countElement++) {
		if (countArray[countElement] > countArray[maxIndex]) {
			maxIndex = countElement;
		}
	}
	
	// Check if each number in array is entered once 
	// Returns -1 if:
	// if it is a different index in count array and 
	// if another element has the same value and 
	// if they are not the same value in original array
	for (int index = 0; index < size; index++) {
		if (index != maxIndex && countArray[index] == countArray[maxIndex] && arrayPtr[maxIndex] != arrayPtr[index]) {
			return -1;
		}
	}

	return arrayPtr[maxIndex];

}