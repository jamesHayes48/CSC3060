#include <iostream>
#include <iomanip>

using namespace std;

// Constants
// Wall Area for one gallon and one hour
const int WALL_AREA_PER_GALLON = 110;

// Hourly rate for labor
const double HOURLY_RATE = 25.0;

// Function prototypes
int getNumberOfRooms();
double getPaintPrice();
double getWallSquareFeet();
int numberOfGallons(double);
double laborHours(double);
void displayCost(int, double, double);

int main() {
	// Variables
	// Number of rooms to paint
	int numRooms;
	// Price of paint per gallon
	double paintPrice;
	// Accumulator for wall area
	int totalWallArea = 0;
	// Gallons of paint needed
	int gallons;
	// Hours of labor needed
	double hours;

	// Get number of rooms
	numRooms = getNumberOfRooms();
	// Get price of paint per gallon
	paintPrice = getPaintPrice();
	// Get total wall area of the rooms
	for (int i = 1; i <= numRooms; i++) {
		double wallArea;
		cout << "Room" << i << ": ";
		wallArea = getWallSquareFeet();
		totalWallArea += wallArea;
	}
	// Get number of gallons
	gallons = numberOfGallons(totalWallArea);

	// 



	return 0;
}

int getNumberOfRooms() {
	int rooms;
	cout << "Enter number of rooms to be painted: " << endl;
	cin >> rooms;

	while (rooms < 1) {
		cout << "Error: Enter 1 or greator.\n";
		cout << "Enter the number of rooms to be painted: ";
		cin >> rooms;
	}

	return rooms;
}

double getPaintPrice() {
	double price;

	cout << "Enter the price of the paint per gallon";
	cin >> price;

	while (price < 10.0) {
		cout << "Error: paint price must be $10.00 or greater\n";
		cout << "Enter price of paint per gallon: ";
		cin >> price;
	}

	return price;
}

double getWallSquareFeet() {
	double wallArea;

	cout << "Enter the area of wall space in square feet: ";
	cin >> wallArea;

	while (wallArea < 0) {
		cout << "Error.\n";
		cout << "Enter the area of wall space in square feet"
	}
}