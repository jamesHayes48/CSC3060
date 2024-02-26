/*
Name: James Hayes
Assignment: 13.4
Description: This program defines a procedure class with private member variables and public constructor,
destructor, and both mutator and accessor functions. It also contains a function to display every variable
in the 
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Patient {

private:
	string name;
	string address;
	string phoneNum;
	string emergencyContact;

public:
	// Constructor
	Patient(string inputName, string inputAddress, string inputPhoneNum, string inputContact) {
		name = inputName;
		address = inputAddress;
		phoneNum = inputPhoneNum;
		emergencyContact = inputContact;
	}
	// Deconstructor
	~Patient() {

	}

	// Mutators and Accessors 
	// For each member variable
	// Set name of procedure
	void setName(string input) {
		name = input;
	}
	// Return name of procedure
	string getName() {
		return name;
	}

	// Set name of procedure
	void setAddress(string input) {
		address = input;
	}
	// Return name of procedure
	string getAddress() {
		return address;
	}

	// Set name of procedure
	void setAddress(string input) {
		address = input;
	}
	// Return name of procedure
	string getAddress() {
		return address;
	}

	// Set name of procedure
	void setAddress(string input) {
		address = input;
	}
	// Return name of procedure
	string getAddress() {
		return address;
	}
};


class Procedure {
	// Private member variables
private:
	string name;
	string date;
	string practioner;
	double charge;

	// Public functions
public:
	// Constructor
	Procedure(string inputName, string inputDate, string inputPract, double inputCharge) {
		name = inputName;
		date = inputDate;
		practioner = inputPract;
		charge = inputCharge;
	}
	// Deconstructor
	~Procedure() {

	}

	// Mutators and Accessors 
	// For each member variable
	// Set name of procedure
	void setName(string input) {
		name = input;
	}
	// Return name of procedure
	string getName() {
		return name;
	}

	// Set date of procedure
	void setDate(string input) {
		date = input;
	}
	// Return date of procedure
	string getDate() {
		return date;
	}

	// Set practioner's name
	void setPract(string input) {
		practioner = input;
	}
	// Return practioner's name
	string getPract() {
		return practioner;
	}
	// Set charge of procedure
	void setCharge(double input) {
		charge = input;
	}
	// Return charge of procedure
	double getCharge() {
		return charge;
	}

	// Display details of procedure
	void displayDetails() {
		cout << "-----------------------------\n";
		cout << "Procedure Name: " << name << endl;
		cout << "Date: " << date << endl;
		cout << "Practioner: " << practioner << endl;
		cout << "Charge: $" << fixed << setprecision(2) << charge;
		cout << "\n-----------------------------\n";
	}

};


int main() {
	// Intitialize procedures 1, 2, and 3
	Procedure procedure1("Physical Exam", "2-25-2024", "Dr. Irvine", 250.00);
	Procedure procedure2("X-ray", "2-25-2024", "Dr. Jamison", 500.00);
	Procedure procedure3("Blood test", "2-25-2024", "Dr. Smith", 200.00);

	// Display details of each procedure
	cout << "Procedure 1:\n";
	procedure1.displayDetails();

	cout << "Procedure 2:\n";
	procedure2.displayDetails();

	cout << "Procedure 3:\n";
	procedure3.displayDetails();
}
