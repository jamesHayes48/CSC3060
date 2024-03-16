/*
Name: James Hayes
Assignment: 14.13
Description: This program asks the user to input the length and width of a room and the cost of the carpet
per square feet. It displays the cost of the carpet at the end of the program. 
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
	int lengthFeet;

	// User width
	int widthFeet;

	// Cost of carpet
	double costPerFoot;

	// Get room length
	cout << "Enter room length in feet: ";
	cin >> lengthFeet;

	// Create FeetInches object for the length
	FeetInches inchesLength(lengthFeet);

	// Get room width
	cout << "Enter room width in feet: ";
	cin >> widthFeet;

	// Create FeetInches object for the length
	FeetInches inchesWidth(widthFeet);

	// Create a dimension object
	RoomDimension userDimension(inchesLength, inchesWidth);

	// Get Carpet's cost per square foot
	cout << "Enter cost per square foot of carpet: ";
	cin >> costPerFoot;

	// Create RoomCarpet object
	RoomCarpet userCarpet(userDimension, costPerFoot);

	// Display cost
	cout << "Total cost: $" <<  userCarpet.getTotalCost();

	return 0;
}