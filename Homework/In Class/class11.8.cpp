#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Customer {
	string name;
	string address;
	string city;
	string state;
	string zip;
	string phone;
	double balance;
	string lastPay;
};

// Function Prototypes
void getInfo(Customer&);

void displayChoices(Customer);

void searchCustomer(Customer[], string, int);


int main() {
	// Constant for number of accounts
	const int NUM_ACCOUNTS = 20;

	// Array of cutomer structures
	Customer account[NUM_ACCOUNTS];

	// Variables
	int maxCust = 0;
	int choice;
	int cust;
	int count;
	string search;

	do {
		// Display a menu
		cout << "1. Enter new Account Information\n";
		cout << "2. Change account information.\n";
		cout << "3. Display all account information\n";
		cout << "4. Search for a customer\n";
		cout << "5. Exit the program\n";

		// Get User's name
		cout << "Enter choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			// Get Customer number
			cin.get();
			// Validate customer number
			getInfo(account[maxCust]);
			cout << "You have entered information for customer number ";
			cout << maxCust << endl;
			maxCust++;
			break;
			// Show selected account

			// Get Account Information
		case 2:
			cout << "Customer Number: ";
			cin >> cust;

			while () {

			}
		case 3:
		case 4:
		case 5:
		}

		// Perform selected operation
	} while (choice != 5);
	


	return 0;
}

void getInfo(Customer& c) {
	cout;
}

void showInfo(Customer c) {

}