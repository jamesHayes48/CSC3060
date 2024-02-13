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
struct monthlyBudget {
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
void enterBudget(monthlyBudget&);
void budgetReport(monthlyBudget, monthlyBudget);

int main() {
	monthlyBudget idealBudget = {500.00, 150.00, 65.00, 50.00, 
		250.00, 30.00, 100.00, 150.00, 75.00, 50.00};
	monthlyBudget studentBudget = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
	0.0, 0.0, 0.0, 0.0 };

	//monthlyBudget* inputPtr = &studentBudget;

	enterBudget(studentBudget);

	budgetReport(studentBudget, idealBudget);

	return 0;

}

void enterBudget(monthlyBudget& budget) {
	cout << "Enter Budget for housing: ";
	cin >> budget.housing;

	cout << "Enter Budget for utilities: ";
	cin >> budget.utilities;

	cout << "Enter Budget for household expenses: ";
	cin >> budget.householdExpenses;

	cout << "Enter Budget for transportation: ";
	cin >> budget.transportation;

	cout << "Enter Budget for food: ";
	cin >> budget.food;

	cout << "Enter Budget for medical: ";
	cin >> budget.medical;

	cout << "Enter Budget for insurance: ";
	cin >> budget.insurance;

	cout << "Enter Budget for entertainment: ";
	cin >> budget.entertainment;

	cout << "Enter Budget for clothing: ";
	cin >> budget.clothing;

	cout << "Enter Budget for miscellaneous: ";
	cin >> budget.miscellaneous;

	cout << "----------------------------------------" << endl;

}

void budgetReport(monthlyBudget inputBudget, monthlyBudget idealBudget) {
	double totalInputBudget = 0.0;
	double totalIdealBudget = 0.0;

	totalInputBudget += inputBudget.housing;
	totalIdealBudget += idealBudget.housing;
	double housingBudgetDiff;
	if (inputBudget.housing < idealBudget.housing) {
		cout << "Housing is below ideal budget by: $" <<
			idealBudget.housing - inputBudget.housing << endl;
	}
	else {
		cout << "Housing is above ideal budget by: $" << 
			inputBudget.housing - inputBudget.housing << endl;
	}

	totalInputBudget += inputBudget.utilities;
	totalIdealBudget += idealBudget.utilities;
	if (inputBudget.utilities < idealBudget.utilities) {
		cout << "Utilities is below ideal budget by: $" <<
			idealBudget.utilities - inputBudget.utilities << endl;
	}
	else {
		cout << "Utilities is above ideal budget by: $" <<
			inputBudget.utilities - idealBudget.utilities << endl;
	}

	totalInputBudget += inputBudget.householdExpenses;
	totalIdealBudget += idealBudget.householdExpenses;
	if (inputBudget.utilities < idealBudget.utilities) {
		cout << "Household Expenses is below ideal budget by: $" <<
			idealBudget.householdExpenses - inputBudget.householdExpenses << endl;
	}
	else {
		cout << "Household Expenses is above ideal budget by: $" <<
			inputBudget.householdExpenses - idealBudget.householdExpenses << endl;
	}

	totalInputBudget += inputBudget.transportation;
	totalIdealBudget += idealBudget.transportation;
	if (inputBudget.transportation < idealBudget.transportation) {
		cout << "Transportation is below ideal budget by: $" <<
			idealBudget.transportation - inputBudget.transportation << endl;
	}
	else {
		cout << "Transportation is above ideal budget by: $" <<
			inputBudget.transportation - idealBudget.transportation << endl;
	}
	
	totalInputBudget += inputBudget.food;
	totalIdealBudget += idealBudget.food;
	if (inputBudget.food < idealBudget.food) {
		cout << "Food is below ideal budget by: $" <<
			idealBudget.food - inputBudget.food << endl;
	}
	else {
		cout << "Food is above ideal budget by: $" <<
			inputBudget.food - idealBudget.food << endl;
	}

	totalInputBudget += inputBudget.medical;
	totalIdealBudget += idealBudget.medical;
	if (inputBudget.medical < idealBudget.medical) {
		cout << "Medical is below ideal budget by: $" <<
			idealBudget.medical - inputBudget.medical << endl;
	}
	else {
		cout << "Medical is above ideal budget by: $" <<
			inputBudget.medical - idealBudget.medical << endl;
	}

	totalInputBudget += inputBudget.insurance;
	totalIdealBudget += idealBudget.insurance;
	if (inputBudget.insurance < idealBudget.insurance) {
		cout << "Insurance is below ideal budget by: $" <<
			idealBudget.insurance - inputBudget.insurance << endl;
	}
	else {
		cout << "Insurance is above ideal budget by: $" <<
			inputBudget.insurance - idealBudget.insurance << endl;
	}

	totalInputBudget += inputBudget.entertainment;
	totalIdealBudget += idealBudget.entertainment;
	if (inputBudget.entertainment < idealBudget.entertainment) {
		cout << "Entertainment is below ideal budget by: $" <<
			idealBudget.entertainment - inputBudget.entertainment << endl;
	}
	else {
		cout << "Entertainment is above ideal budget by: $" <<
			inputBudget.entertainment - idealBudget.entertainment << endl;
	}
	
	totalInputBudget += inputBudget.clothing;
	totalIdealBudget += idealBudget.clothing;
	if (inputBudget.clothing < idealBudget.clothing) {
		cout << "Clothing is below ideal budget by: $" <<
			idealBudget.clothing - inputBudget.clothing << endl;
	}
	else {
		cout << "Clothing is above ideal budget by: $" <<
			inputBudget.clothing - idealBudget.clothing << endl;
	}

	totalInputBudget += inputBudget.miscellaneous;
	totalIdealBudget += idealBudget.miscellaneous;
	if (inputBudget.miscellaneous < idealBudget.miscellaneous) {
		cout << "Utilities is below ideal budget by: $" <<
			idealBudget.miscellaneous - inputBudget.miscellaneous << endl;
	}
	else {
		cout << "Utilities is above ideal budget by: $" <<
			inputBudget.miscellaneous - idealBudget.miscellaneous << endl;
	}

	if (totalInputBudget < totalIdealBudget) {
		cout << "Total Budget is below ideal budget by: $" <<
			totalIdealBudget - totalInputBudget << endl;
	}
	else {
		cout << "Total Budget is above ideal budget by: $" <<
			totalInputBudget - totalIdealBudget << endl;
	}

}