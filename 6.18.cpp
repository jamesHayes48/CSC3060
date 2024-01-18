#include <iostream>
using namespace std;

int numberOfRooms(int leastNum);
double priceOfPaint(double leastCost);
double wallSpace(double leastWallSpace);
void calculateData(int rooms, double paintCost, double wallSpace);
void displayData();

int main() {
	int leastNumRoom = 1;
	double leastPrice = 10.00;
	double leastWallSpace = 0.0;
	
	int userRooms = numberOfRooms(leastNumRoom);
	double userPrice = priceOfPaint(leastPrice);
	double userWallSpace = wallSpace(leastWallSpace);

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
	double inputPrice = 0;

	do {
		cout << "Enter price of paint no less than $10.00:\n";
		cin >> inputPrice;

		if (inputPrice >= leastCost) {
			validInput = true;
		}
	} while (validInput == false);

	return inputPrice;
}

double wallSpace(double leastWallSpace) {
	bool validInput = false;
	double inputWallSpace = 0;

	do {
		cout << "Enter wallspace to paint in square feet greater than 0.0:\n";
		cin >> inputWallSpace;

		if (inputWallSpace >= leastWallSpace) {
			validInput = true;
		}
	} while (validInput == false);

	return inputWallSpace;
}

void calculateData(int rooms, double paintCost, double wallSpace) {

}