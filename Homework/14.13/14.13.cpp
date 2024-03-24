/*
Name: James Hayes
Assignment: 14.13
Description: This program asks the user to input the length and width of a room (feet and inches) 
and the cost of the carpet per square feet. It displays the cost of the carpet at the end of the program. 
The program is seperated into 3 header files and 1 cpp file for the FeetInches object. It shows the 
abstraction and encapsulation that can be done through the use of classes. 
*/

#include <iostream>
#include <iomanip>
#include "FeetInches.h"
#include "RoomDimension.h"
#include "RoomCarpet.h"
using namespace std;

int main() {
	// User length
	int lengthFeet, lengthInches;

	// User width
	int widthFeet, widthInches;

	// Cost of carpet
	double costPerFoot;

	// Get room length
	cout << "Enter room length: " << endl;
	
	cout << "Feet: ";
	cin >> lengthFeet;

	cout << "Inches: ";
	cin >> lengthInches;

	// Create FeetInches object for the length
	FeetInches inchesLength(lengthFeet, lengthInches);

	// Get room width
	cout << "Enter room width: " << endl;

	cout << "Feet: ";
	cin >> widthFeet;

	cout << "Inches: ";
	cin >> widthInches;

	// Create FeetInches object for the width
	FeetInches inchesWidth(widthFeet, widthInches);

	// Create a dimension object
	RoomDimension userDimension(inchesLength, inchesWidth);

	// Get Carpet's cost per square foot
	cout << "Enter cost per square foot of carpet: ";
	cin >> costPerFoot;

	// Create RoomCarpet object
	RoomCarpet userCarpet(userDimension, costPerFoot);

	// Display cost
	cout << "Total cost: $" << fixed << setprecision(2) << userCarpet.getTotalCost();

	return 0;
}