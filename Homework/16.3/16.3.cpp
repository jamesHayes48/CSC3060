/*
Name: James Hayes
Assignment: 16.3
Header file: MaxandMin.h
Description: This program tests out templates of two functions in the MaxandMin.h file and tests them 
out with integer, double, and string datatypes.
*/
#include <iostream>
#include "MaxandMin.h"
using namespace std;

int main() {
	// Test variables
	int int1 = 2;
	int int2 = 3;

	double doubleNum1 = 2.5;
	double doubleNum2 = 2.4;

	string string1 = "Hi";
	string string2 = "Hello";

	// Use maximum and minimum functions with integer datatype
	cout << "Maximum function with integers: " << int1 << " and " << int2 << endl;
	cout << "Int maximum function: " << maximum(int1, int2) << endl;
	cout << "Int minimum function: " << minimum(int1, int2) << endl;

	cout << "------------------------------------------------------------" << endl;

	// Use maximum and minimum functions with double datatypes
	cout << "Maximum function with double: " << doubleNum1 << " and " << doubleNum2 << endl;
	cout << "Double maximum function: " << maximum(doubleNum1, doubleNum2) << endl;
	cout << "Double minimum function: " << minimum(doubleNum1, doubleNum2) << endl;

	cout << "------------------------------------------------------------" << endl;

	// Use maximum and minimum functions with strings datatypes
	cout << "Maximum function with strings: " << string1 << " and " << string2 << endl;
	cout << "String maximum function: " << maximum(string1, string2) << endl;
	cout << "String minimum function: " << minimum(string1, string2) << endl;

	return 0;
}