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

// Holds categories for monthly budget
typedef struct monthlyBudget {
	double housing;
	double utilities;
	double householdExpenses;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double miscellaneous;
};

// Function prototypes
// Search array with name entered


int main() {
	monthlyBudget idealBudget = {500.00, 150.00, 65.00, 50.00, 
		250.00, 30.00, 100.00, 150.00, 75.00, 50.00};
	monthlyBudget studentBudget;
}