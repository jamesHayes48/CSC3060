#pragma once
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include <string>
#include "Employee.h"
using namespace std;

class ProductionWorker : public Employee {
private:
	int shift;
	double payRate;
public:
	// Default constructor
	ProductionWorker() : Employee() {
		shift = 0; payRate = 0.0;
	}

	// Constructor
	ProductionWorker(string aName, string aNumber, string ahireDate, int aShift, double aPayRate) : Employee(aName, aNumber, ahireDate) {
		shift = aShift;
		payRate = aPayRate;
	}

	// Mutators/Setters
	void setShift(int s) {
		shift = s;
	}

	void setPayRate(double p) {
		payRate = p;
	}

	// Accessors/Getters
	int getShift() {
		return shift;
	}

	double getPayRate() {
		return payRate;
	}

	string getShiftName() const {
		if (shift == 1)
			return "Day";
		else if (shift == 2)
			return "Night";
		else
			return "Invalid";
	}
};
#endif // !PRODUCTION_WORKER_H
