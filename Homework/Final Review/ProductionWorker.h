#pragma once
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H

#include "Employee.h"
#include <iostream>

class ProductionWorker : public Employee {
private:
	int shift;
	double payRate;
public:
	ProductionWorker(string name, int num, string date, bool dis, int s, double rate) : 
		Employee(name, num, date, dis) {
		if (shift != 1 || s != 2) {
			bool valid = false;
			while (valid == false) {
				cout << "\nEnter 1 for day shift 2 for night shift: ";
				cin >> s;
				if (s == 1 || s == 2)
					shift = s;
					valid = true;
			}
		}
		else {
			shift = s;
		}
		payRate = rate;
	}

	ProductionWorker() : Employee() {
		shift = 0;
		payRate = 0;
	}

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

	void printData() {
		Employee::printData();
		cout << "Shift: " << shift << endl;
		cout << "Hourly Pay Rate: $" << payRate << endl;
	}
};

#endif // !PRODUCTION_WORKER_H
