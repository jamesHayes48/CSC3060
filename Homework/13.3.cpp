/*
Name: James Hayes
Assignment: 13.3
Description: This program defines a class with default private member variables with make, year model, and 
speed of a car. The program intializes a car with default values then, in a for loop, calls the accelerate
function and displays the speed of the car. The program then calls the break function five times and displays
the speed of car.
*/

#include <iostream>
#include <string>

using namespace std;

const int CONTROL = 5;

/*
Purpose: Store name, model, and speed of car
Parameters: YearModel and name
Functions: Accelerate, brake, getYearModel, getMake, and getSpeed
*/
class Car {
	// Private member Variables
	int yearModel;
	string make;
	int speed;
public:
	// Constructor
	Car(int model, string name) {
		yearModel = model;
		make = name;
		speed = 0;
	}
	// Destructor
	~Car() {
		
	}

	// Increase speed by five
	void accelarate() {
		speed += 5;
	}

	// Decrease speed by five
	void brake() {
		speed -= 5;
	}

	// Return year model of car
	int getYearModel() {
		return yearModel;
	}

	// Return make of car
	string getMake() {
		return make;
	}

	// Return speed of car
	int getSpeed() {
		return speed;
	}
};

int main() {
	// Declare and initalize car variable
	Car myCar(2055, "Zorbulon");

	cout << "Make: " << myCar.getMake() << " " << myCar.getYearModel() << endl;

	// Accelerate and add speed five times
	cout << "---------Let's go for a ride!--------------\n";
	for (int speedUp = 0; speedUp < CONTROL; speedUp++) {
		myCar.accelarate();
		cout << "\nCurrent Speed: " << myCar.getSpeed() << endl;
	}

	// Slow down car five times
	cout << "---------Let's slow down!------------------\n";
	for (int slowDown = 0; slowDown < CONTROL; slowDown++) {
		myCar.brake();
		cout << "\nCurrent Speed: " << myCar.getSpeed() << endl;
	}

	cout << "That was fun!";

	// End program
	return 0;
}