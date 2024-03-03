#pragma once
#include <iostream>
#include <string>
using namespace std;

// Classes
/*
Purpose: Associate car information and function
Member Variables: YearModel and name
Methods: Accelerate, brake, and accessor functions for member variables
*/
class Car {
	// Private member Variables
private:
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