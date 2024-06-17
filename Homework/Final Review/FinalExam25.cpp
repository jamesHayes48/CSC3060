
/*
Name: James Hayes
Project: Number 25 on coding part of final exam
Class: 3060 - 002
Description: This program contains two classes: Employee class and production worker class. The employee class contains the name, hire date, employee number, and info 
on whether they are disabled or not.
The production worker class is derived from the employee class and contains the shift and pay rate of the worker.  If a shift number other than 1 or 2 are set, 
the program will ask the user to enter an acceptable number. Finally the program demonstrates the classes by printing out their information.
*/

#include "Employee.h"
#include "ProductionWorker.h"

int main() {
	// Set employee class object with mutators
	Employee employee1;
	employee1.setName("James");
	employee1.setDate("June 12, 1976");
	employee1.setNum(1043);
	employee1.setDisabled(false);

	// Set production worker class object
	// Sets this object with unacceptable shift number
	ProductionWorker worker("Bill", 3123, "July 23 2000", false, 3, 50.75);

	// Print employee class information
	cout << "--------------Employee Class--------------------\n";
	employee1.printData();

	// Print production worker class information
	cout << "--------------Production Worker Class--------------------\n";
	worker.printData();

	return 0;
}