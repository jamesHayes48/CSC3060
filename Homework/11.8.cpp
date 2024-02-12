/*
Name: James Hayes
Project Name: 11.8
Description: This program allows user to input information for 10 customers. The program then allows the user to enter a name to searc for
a customer matching the name. If the name was found, it prints the customer information. If the name was not found it prints an error message.
*/

#include <iostream>
#include <string>
using namespace std;

// Constants
// Number of customers in array
const int SIZE = 10;

// Holds customer data
typedef struct customer {
	string name;
	string address;
	string city;
	string state;
	int zip;
	double balance;
	string dateOfLastPayment;
};

// Function prototypes
// Search array with name entered
void searchAccount(string inputName, customer customerArray[], int size);

int main() {
	// Array of customers
	customer customers[SIZE];

	// String for finding name
	string searchName;

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter information for customer " << i + 1 << endl;

		cout << "Enter Name: ";
		cin >> customers[i].name;

		cout << "Enter Address: ";
		cin >> customers[i].address;

		cout << "Enter City: ";
		cin >> customers[i].city;

		cout << "Enter State: ";
		cin >> customers[i].state;

		cout << "Enter Integer for Zip: ";
		cin >> customers[i].zip;
		
		cout << "Enter Integer for Balance: $";
		cin >> customers[i].balance;

		cout << "Enter Date of Last Payment: ";
		cin >> customers[i].dateOfLastPayment;

		cout << "-----------------------------" << endl;
	}

	cout << "Enter Name to search for: ";
	cin >> searchName;

	searchAccount(searchName, customers, SIZE);

	return 0;
}


/*
Purpose: Find and print name entered
Parameters: Input string, array of customers, size of array
Return: None, prints array information if name matches
*/
void searchAccount(string inputName, customer customerArray[], int size) {
	// Check if name is found
	bool found = false;

	// Set index to index of name matched
	int foundIndex;
	
	// Check if name matches structures
	for (int index = 0; index < size; index++) {
		if (inputName == customerArray[index].name) {
			found = true;
			foundIndex = index;
		}
	}

	// Print account information if it was found
	// If not, print error message
	if (found == true) {
		cout << "Found accout matching name" << endl;
		cout << "Name: " << customerArray[foundIndex].name << endl;
		cout << "Address: " << customerArray[foundIndex].address << endl;
		cout << "City: " << customerArray[foundIndex].city << endl;
		cout << "State: " << customerArray[foundIndex].state << endl;
		cout << "Zip: " << customerArray[foundIndex].zip << endl;
		cout << "Balance: $" << customerArray[foundIndex].balance << endl;
		cout << "Date of last payment: " << customerArray[foundIndex].dateOfLastPayment << endl;
	}
	else {
		cout << "No Account with name entered was found";
	}
}