#include <iostream>
using namespace std;

const int SIZE = 20;

int linearSearchBench(int[], int, int);
int binarySearchBench(int[], int, int);

int main() {
	int comparisons;

	int tests[SIZE] = { 101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 546, 600};

	cout << "Searching for value 521\n";
	
	comparisons = linearSearchBench(tests, SIZE, 521);

	cout << "Comparisons made in linear search: " << comparisons << endl;

	comparisons = binarySearchBench(tests, SIZE, 521);

	cout << "Comparisons made in binary search: " << comparisons << endl;

	return 0;
}

int linearSearchBench(int values[], int size, int value) {
	bool found = false;
	int index = 0;
	int comparisons = 0;

	while (!found && index < size) {
		comparisons++;
		if (values[index++] == value) {
			found = true;
		}
	}

	return comparisons;
}

int binarySearchBench(int values[], int size, int value) {
	bool found = false;

	int first = 0;
	int middle;
	int last = size - 1;
	int comparisons = 0;

	while (!found && first <= last) {
		middle = (first + last) / 2;

		comparisons++;

		if (values[middle] == value) {
			found = true;
		}
		else if (values[middle] > value) {
			last = middle - 1;
		}
		else {
			first = middle + 1;
		}
	}
	return comparisons;
}