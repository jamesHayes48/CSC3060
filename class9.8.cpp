#include <iostream>
using namespace std;

int findMode(int[], int);
int* makeArray(int);

int main() {
	// Constant array size
	const int SIZE = 11;

	// Array of values
	int array[SIZE] = {1, 1, 1, 3, 5, 6, 7, 1, 2 , 5, 7};

	// Hold mode 
	int mode;

	// Get mode of test values
	mode = findMode(array, SIZE);

	if (mode == -1) {
		cout << "No mode :(";
	}
	else {
		cout << "Yay, mode: " << mode;
	}

	return 0;
}

int getMode(int* array, int size) {
	int* frequencies = nullptr;

	int mode = -1;
	int highest = 0;
	int element = 0;
	int count = 0;

	// Dynamically allocate array to hold
	// frequencies of each element in 
	// the array. When this function ends, 
	// frequencies[0]
	frequencies = makeArray(size);

	for (count = 0; count < size; count++) {
		frequencies[count] = 0;
	}
}

int* makeArray(int size) {
	// Declare a pointer to intger variable
	int* ptr = new int[size];

	return ptr;
}