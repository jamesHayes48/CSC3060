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
	Employee(string n, int num, string date, bool dis) {
		name = n;
		employeeNum = num;
		hireDate = date;
		disabled = dis;
	}

	Employee() {
		name = "";
		employeeNum = 0;
		hireDate = "";
		disabled = false;
	}

	~Employee() {

	}

	// Mutator
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

	void printData() const {
		cout << "Name: " << name << endl;
		cout << "Employee Number: " << employeeNum << endl;
		cout << "Hire Date: " << hireDate << endl;
		cout << "Disabled: " << disabled << endl;
	}
};

#endif // !EMPLOYEE_H
