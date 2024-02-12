/*
Name: James Hayes
Project Name: 11.8
*/

#include <iostream>
#include <string>
using namespace std;

// Constants
// Number of customers in array
const int SIZE = 10;


/*
Holds customer data
*/
typedef struct customer {
	string name;
	string address;
	string city;
	string state;
	int zip = 0;
	double balance = 0.0;
	string dateOfLastPayment;
};

// Function prototypes
// Search array with name entered
void searchAccount(string inputName, customer customerArray[], int size);

int main() {
	customer customers[SIZE];
	string searchName;

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter Name: ";
		cin >> customers[i].name;

		cout << "Enter Address: ";
		cin >> customers[i].address;

		cout << "Enter City: ";
		cin >> customers[i].city;

		cout << "Enter State: ";
		cin >> customers[i].state;

		cout << "Enter Zip: ";
		cin >> customers[i].zip;

		cout << "Enter Balance: ";
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

void searchAccount(string inputName, customer customerArray[], int size) {
	bool found = false;
	int foundIndex;
	
	for (int index = 0; index < size; index++) {
		if (inputName == customerArray[index].name) {
			found = true;
			foundIndex = index;
		}
	}

	if (found == true) {
		cout << "Found accout matching name" << endl;
		cout << "Name: " << customerArray[foundIndex].name << endl;
		cout << "Address: " << customerArray[foundIndex].address << endl;
		cout << "City: " << customerArray[foundIndex].city << endl;
		cout << "State: " << customerArray[foundIndex].state << endl;
		cout << "Zip: " << customerArray[foundIndex].zip << endl;
		cout << "Balance: " << customerArray[foundIndex].balance << endl;
		cout << "Date of last payment: " << customerArray[foundIndex].dateOfLastPayment << endl;
	}
	else {
		cout << "No Account with name entered was found";
	}
}