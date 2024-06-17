#pragma once
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H

#include "Employee.h"
#include <iostream>
#include <iomanip>

class ProductionWorker : public Employee {
private:
	int shift;
	double payRate;
public:
	// Constructor
	ProductionWorker(string name, int num, string date, bool dis, int s, double rate) : 
		Employee(name, num, date, dis) {
		if (shift != 1 || s != 2) {
			bool valid = false;
			while (valid == false) {
				cout << "\nEnter 1 for day shift 2 for night shift: ";
				cin >> s;
				if (s == 1 || s == 2) {
					shift = s;
					valid = true;
				}
			}
		}
		else {
			shift = s;
		}
		payRate = rate;
	}

	// Default constructor
	ProductionWorker() : Employee() {
		shift = 0;
		payRate = 0.0;
	}

	// Destructor
	~ProductionWorker() {

	}

	// Mutators
	void setShift(int s) {
		shift = s;
	}
	void setPayRate(int rate) {
		payRate = rate;
	}

	// Accessors
	int getShift() {
		return shift;
	}
	double getPayRate() {
		return payRate;
	}

	// Print data of production worker
	void printData() {
		// Call Base function
		Employee::printData();
		string whichShift = "Day";

		// Print night shift if not day shift
		if (shift == 2) {
			whichShift = "Night";
		}

		cout << "Shift: " << whichShift << endl;
		cout << "Hourly Pay Rate: $" << payRate << endl;
	}
};

#endif // !PRODUCTION_WORKER_H
