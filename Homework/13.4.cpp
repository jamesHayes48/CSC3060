/*
Name: James Hayes
Assignment: 13.4
Description: This program defines a patient class with private member variables with a constructor and destructor. It also contains both 
mutator and accessor function for each member variable. It also defines  a procedure class with private member variables and 
public constructor, destructor, and both mutator and accessor functions. The procedure class also contains a function to display 
every variable in the class.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Classee
/*
Purpose: Associate Patient information
Member Variables: Name, Address, Phone number, and Emergency contact
Methods: Mutator and accessor functions for each member variable
*/
class Patient {
	// Private member variables
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
	void setPhoneNum(string input) {
		phoneNum = input;
	}
	// Return name of procedure
	string getPhoneNum() {
		return phoneNum;
	}

	// Set name of procedure
	void setEContact(string input) {
		emergencyContact = input;
	}
	// Return name of procedure
	string getEContact() {
		return emergencyContact;
	}
};

/*
Purpose: Associate Procedure information
Member Variables: Name, Practioner, Date, and Charge
Methods: Mutator and accessor functions for each member variable and print details
*/
class Procedure {
	// Private member variables
private:
	string name;
	string date;
	string practioner;
	double charge;

	// Public methods
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
		cout << "Procedure Name: " << name << endl;
		cout << "Date: " << date << endl;
		cout << "Practioner: " << practioner << endl;
		cout << "Charge: $" << fixed << setprecision(2) << charge;
		cout << "\n-----------------------------\n";
	}

};

// Function Prototypes
// Print Patient information
void printPatientInfo(Patient patient1);

int main() {
	// Initialize patient with mutators
	Patient myPatient("","","","");
	myPatient.setName("Joseph R. Biden");
	myPatient.setAddress("1600 Pennsylvania Avenue NW, Washington, DC 20500");
	myPatient.setPhoneNum("432-123-4567");
	myPatient.setEContact("456-432-5321");

	// Print patient info through function
	printPatientInfo(myPatient);

	// Intitialize procedures 1, 2, and 3 with constructor
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

	// Exit Program
	return 0;
}

/*
Purpose: Print information of a patient
Parameters: instance of patient class
Return: None, but print information in patient using
accessor functions.
*/
void printPatientInfo(Patient patient1) {
	cout << "Name: " << patient1.getName() << endl;
	cout << "Address: " << patient1.getAddress() << endl;
	cout << "Phone Number: " << patient1.getPhoneNum() << endl;
	cout << "Emergency Contact: " << patient1.getEContact() << endl;
	cout << endl;
}