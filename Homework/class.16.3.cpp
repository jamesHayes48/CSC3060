#include <iostream>
#include <string>
using namespace std;

template <class T>
T maximum(T num1, T num2) {
	return (num1 > num2) ? num1 : num2;
}

template <typename T>
T minimum(T num1, T num2) {
	return (num1 < num2) ? num1 : num2;
}

template <typename T>
void swap(T& t1, T& t2) {
	T temp = t1;
	t1 = t2;
	t2 = temp;
	return;
}

int main() {
	// Test with integers
	int num1 = 5;
	int num2 = 3;

	cout << "Minimum of 5,3 is: ";
	cout << minimum(num1, num2) << endl;

	cout << "Maximum of 5,3 is : ";
	cout << maximum(num1, num2) << endl;

	// Test with doubles
	double num3 = 5.5;
	double num4 = 3.5;

	cout << "Minimum of 5.5,3.5 is: ";
	cout << minimum(num3, num4) << endl;

	cout << "Maximum of 5.5,3.5 is : ";
	cout << maximum(num3, num4) << endl;

	string string1 = "BEAAAANNNNNSSS";
	string string2 = "JINGLE JANGLE";

	cout << "Minimum of string1 and string2 is: ";
	cout << minimum(string1, string2) << endl;

	cout << "Maximum of string1 and string is : ";
	cout << maximum(string1, string2) << endl;

	return 0;
}