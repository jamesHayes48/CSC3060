#include <iostream>
using namespace std;

double median(int*, int);
void displayArray(int*, int);

int main() {
	// Array with odd number of elements
	int odd[] = { 1, 2, 3, 4, 5, 6, 7 };


	// Array with even number of elements
	int even[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	cout << "The odd numbered set of values is: ";
	displayArray(odd, 7);

	cout << "The even numbered set of values is: ";
	displayArray(even, 7);

	cout << "The median is: " << median();
}

double median(int* arr, int num) {
	double med;

	if (num % 2 == 0) {
		int mid1 = num / 2, mid2 = (num / 2) - 1;
		med = ((*(arr + mid1) + *(arr + mid2))) / 2.0;
	}
	else {
		med = *(arr + (num / 2));
	}
	
	return med;
}