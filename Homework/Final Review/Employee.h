#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	int employeeNum;
	string hireDate;
	bool disabled;
public:
	// Constructor
	Employee(string n, int num, string date, bool dis) {
		name = n;
		employeeNum = num;
		hireDate = date;
		disabled = dis;
	}

	// Default Constructor
	Employee() {
		name = "";
		employeeNum = 0;
		hireDate = "";
		disabled = false;
	}

	// Destructor
	~Employee() {

	}

	// Mutators
	void setName(string n) {
		name = n;
	}
	void setNum(int num) {
		employeeNum = num;
	}
	void setDate(string date) {
		hireDate = date;
	}
	void setDisabled(bool d) {
		disabled = d;
	}

	// Accessors
	string getName() {
		return name;
	}
	int getNum() {
		return employeeNum;
	}
	string getDate() {
		return hireDate;
	}
	bool getDisabled() {
		return disabled;
	}

	// Print data of employee
	void printData() {
		string yesOrNo = "No";
		cout << "Name: " << name << endl;
		cout << "Employee Number: " << employeeNum << endl;
		cout << "Hire Date: " << hireDate << endl;

		if (disabled = true) {
			yesOrNo = "Yes";
		}

		cout << "Disabled: " << yesOrNo << endl;
	}
};

#endif // !EMPLOYEE_H
