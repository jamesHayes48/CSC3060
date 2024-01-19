#include <iostream>
#include <cmath>

using namespace std;

// Prompt for number of rooms
int numberOfRooms(int leastNum);

// Prompt for price of paint
double priceOfPaint(double leastCost);

// Prompt for total wall space for each room
int wallSpace(int leastWallSpace, int numberOfRooms);

// Calculate the total gallons of paint
int calculateGallons(int multiplier);

// Calculate the number of hours of labor
int calculateLaborHour(int laborHour, int multiplier);

// Calculate the toal labor cost with hours required
double calculateLaborCost(double laborCostHour, int laborHours);

// Calculate the paint cost
double calculatePaintCost(double paintPrice, int multiplier);

// Display gallons of paint, hours of labor, cost of paint, labor charges, and total cost
void displayData(int gallons, int laborHours, double paintCost, double laborCharges, double totalCost);

int main() {
	int leastNumRoom = 1;
	double leastPrice = 10.00;
	int leastWallSpace = 0;
	int oneHourLabor = 8;
	double oneHourCost = 25.00;

	int userRooms = 0;
	double userPaintPrice = 0.0;
	int userWallSpace = 0;

	int gallonsOfPaint = 0;
	int laborHours = 0;
	double laborCost = 0.0;
	double paintCost = 0.0;
	double totalCost = 0.0;

	userRooms = numberOfRooms(leastNumRoom);
	userPaintPrice = priceOfPaint(leastPrice);
	userWallSpace = wallSpace(leastWallSpace, userRooms);

	int userMultiplier = (int) userWallSpace / 110;
	
	gallonsOfPaint = calculateGallons(userMultiplier);
	laborHours = calculateLaborHour(oneHourLabor, userMultiplier);
	laborCost = calculateLaborCost(oneHourCost, laborHours);
	paintCost = calculatePaintCost(userMultiplier, userPaintPrice);

	totalCost = laborCost + paintCost;

	displayData(gallonsOfPaint, laborHours, paintCost, laborCost, totalCost);

	return 0;
}

int numberOfRooms(int leastNum) {
	bool validInput = false;
	int inputRoom = 0;

	do {
		cout << "Enter number of rooms at least greater than one:\n";
		cin >> inputRoom;

		if (inputRoom >= leastNum) {
			validInput = true;
		}
	} while (validInput == false);

	return inputRoom;
}

double priceOfPaint(double leastCost) {
	bool validInput = false;
	double inputPrice = 0.0;

	do {
		cout << "Enter price of paint no less than $10.00:\n";
		cin >> inputPrice;

		if (inputPrice >= leastCost) {
			validInput = true;
		}
	} while (validInput == false);

	return inputPrice;
}

int wallSpace(int leastWallSpace, int numberOfRooms) {
	bool validInput = false;
	int inputWallSpace = 0;
	int totalWallSpace = 0;
	int count = 1;

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

	return totalWallSpace;
}

int calculateGallons(int multiplier) {
	int gallonPerHour = 1 * multiplier;
	return gallonPerHour;
}

int calculateLaborHour(int laborHour, int multiplier) {
	int totalHours = laborHour * multiplier;
	return totalHours;
}

double calculateLaborCost(double laborCostHour, int laborHours) {
	double laborCost = laborCostHour * laborHours;
	return laborCost;
}

double calculatePaintCost(double paintPrice, int multiplier) {
	double paintCost = paintPrice * multiplier;
	return paintCost;
}

void displayData(int gallons, int laborHours, double paintCost, double laborCharges, double totalCost) {
	cout << "Number of gallons required: " << gallons << "\n";
	cout << "Hours of labor required: " << laborHours << "\n";
	cout << "Cost of paint: $" << paintCost << "\n";
	cout << "Labor charges: $" << laborCharges << "\n";
	cout << "Total Cost: $" << totalCost << "\n";
}
