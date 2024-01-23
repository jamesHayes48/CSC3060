/*
Name: James Hayes
Class: CS 3060 - 002
Project Name: 6.18 Programming Challenges 

Description: This program allows the user to enter the number of rooms that need to be painted,
the price of the paint per gallon, and the wall space in square feet in each room. There are also
set limits in what the user can enter for each of the prompts.
The program then calculates and displays the gallons of paint needed, hours of labor 
required, the cost of the paint, the labor charges and the total cost of the job. 
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Prompt for number of rooms
int numberOfRooms(int leastNum);

// Prompt for price of paint
double priceOfPaint(double leastCost);

// Prompt for total wall space for each room
double wallSpace(double leastWallSpace, int numberOfRooms);

// Calculate the total gallons of paint
double calculateGallons(double multiplier);

// Calculate the number of hours of labor
double calculateLaborHour(double laborHour, double multiplier);

// Calculate the toal labor cost with hours required
double calculateLaborCost(double laborCostHour, double laborHours);

// Calculate the paint cost
double calculatePaintCost(double paintPrice, double multiplier);

// Display gallons of paint, hours of labor, cost of paint, labor charges, and total cost
void displayData(double gallons, double laborHours, double paintCost, double laborCharges, double totalCost);

int main() {
	// Limits for every function
	int leastNumRoom = 1;
	double leastPrice = 10.00;
	double leastWallSpace = 0.0;

	// Requirements
	int hourPerFeetLabor = 8;
	double costPerHourLabor = 25.00;
	int sqFeetPerGallon = 110;
	double gallonPerFt = 1.0;

	// User input
	int userRooms = 0;
	double userPaintPrice = 0.0;
	double userWallSpace = 0.0;

	// User output
	double gallonsOfPaint = 0.0;
	double laborHours = 0.0;
	double laborCost = 0.0;
	double paintCost = 0.0;
	double totalCost = 0.0;

	// Prompt user for rooms, price of the paint, and wallspace
	userRooms = numberOfRooms(leastNumRoom);
	userPaintPrice = priceOfPaint(leastPrice);
	userWallSpace = wallSpace(leastWallSpace, userRooms);

	// Find multiplier for calculations
	double userMultiplier = userWallSpace / sqFeetPerGallon;
	
	// Calculate gallons, labor hours and cost, and paint cost
	gallonsOfPaint = calculateGallons(userMultiplier);
	laborHours = calculateLaborHour(hourPerFeetLabor, userMultiplier);
	laborCost = calculateLaborCost(costPerHourLabor, laborHours);
	paintCost = calculatePaintCost(userPaintPrice, userMultiplier);

	// Find total cost
	totalCost = laborCost + paintCost;

	// Display all data
	displayData(gallonsOfPaint, laborHours, paintCost, laborCost, totalCost);

	return 0;
}

/*
Purpose: Ask user for number of rooms
Parameters: Least number of rooms
Return: Integer number of rooms
*/
int numberOfRooms(int leastNum) {
	bool validInput = false;
	int inputRoom = 0;

	// Keep prompting user until valid number of rooms is entered
	do {
		cout << "Enter number of rooms at least greater than one:\n";
		cin >> inputRoom;

		if (inputRoom >= leastNum) {
			validInput = true;
		}
	} while (validInput == false);

	cout << endl;

	return inputRoom;
}


/*
Purpose: Ask user for the price of paint
Parameters: Least cost of paint
Return: Price of user selected paint
*/
double priceOfPaint(double leastCost) {
	bool validInput = false;
	double inputPrice = 0.0;

	// Keep prompting user until valid price of paint is entered
	do {
		cout << "Enter price of paint no less than $10.00:\n";
		cin >> inputPrice;

		if (inputPrice >= leastCost) {
			validInput = true;
		}
	} while (validInput == false);

	cout << endl;

	return inputPrice;
}

/*
Purpose: Ask user for amount of wall space to be painted
Parameters: Least wall space and number of rooms
Return: Wall space in square feet
*/
double wallSpace(double leastWallSpace, int numberOfRooms) {
	bool validInput = false;
	int inputWallSpace = 0;
	int totalWallSpace = 0;
	int count = 1;

	// Keep prompting user for wall space in each room until valid number is entered
	// or all rooms have a wall space entered
	do {
		cout << "Enter wallspace to paint in square feet for room " << count << ":\n";
		cin >> inputWallSpace;

		if (inputWallSpace >= leastWallSpace) {
			validInput = true;
			totalWallSpace += inputWallSpace;
			count++;
		}
		else {
			cout << "Invalid input! Please enter a non-negative number.\n";
		}
	} while (validInput == false || count <= numberOfRooms);

	cout << endl;

	return totalWallSpace;
}

/*
Purpose: Calculate gallons of paint to be used
Parameters: Multiplier for every certain number of wallspace (110)
Return: Number of gallons required for painting
*/
double calculateGallons(double multiplier) {
	double gallonPerHour = 1 * multiplier;
	return gallonPerHour;
}

/*
Purpose: Calculate number of hours required for labor
Parameters: Number of hours of labor for a set number of wallspace and multiplier
Return: Number of hours of labor required
*/
double calculateLaborHour(double laborHour, double multiplier) {
	double totalHours = laborHour * multiplier;
	return totalHours;
}

/*
Purpose: Calculate the labor charges 
Parameters: The cost of labor per hour and the hours of labor required
Return: Total cost of labor
*/
double calculateLaborCost(double laborCostHour, double laborHours) {
	double laborCost = laborCostHour * laborHours;
	return laborCost;
}

/*
Purpose: Calculate the cost of the paint with price set by user
Parameters: Price of paint set by user and multiplier from wallspace
Return: Total cost of paint
*/
double calculatePaintCost(double paintPrice, double multiplier) {
	double paintCost = paintPrice * multiplier;
	return paintCost;
}

/*
Purpose: Display the gallons of paint, hours of labor, cost of paint, 
cost of labor, and the total cost
Parameters: Gallons of paint, hours of labor, price of paint, labor charges, 
and total cost
Return: None, but prints out data calculated with user input with two decimal points
*/
void displayData(double gallons, double laborHours, double paintCost, double laborCharges, double totalCost) {
	cout << fixed << showpoint << setprecision(2);
	cout << "Number of gallons required: " << gallons << "\n";
	cout << "Hours of labor required: " << laborHours << "\n";
	cout << "Cost of paint: $" << paintCost << "\n";
	cout << "Labor charges: $" << laborCharges << "\n";
	cout << "Total Cost: $" << totalCost << "\n";
}
