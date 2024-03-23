#pragma once
#ifndef EMPLOYEE_H
#include <string>
using namespace std;

class Employee {
private:
	string name;
	string number;
	string hireDate;
public:
	// Default constructor
	Employee() {
		name = ""; number = ""; hireDate = "";
	}

	// Constructor
	Employee(string aName, string aNumber, string ahireDate) {
		name = aName;
		number = aNumber;
		hireDate = ahireDate;
	}

	// Mutators/Setters
	void setName(string inputName) {
		name = inputName;
	}

	void setNumber(string inputNum) {
		number = inputNum;
	}

	void sethireDate(string inputDate) {
		hireDate = inputDate;
	}

	// Accessors/Getters
	string getName() const {
		return name;
	}

	string getNumber() const {
		return number;
	}

	string getDate() const {
		return hireDate;
	}
};
#endif // !Employee