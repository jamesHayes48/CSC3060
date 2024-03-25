#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;

void displayCustomer(CustomerData);

int main() {
	CustomerData customer1("Smith", "Joan", "123 Main St.", "Smithville", "NC", "99999", 12345, true);

	cout << "Customer #1:\n";
	displayCustomer(customer1);

	CustomerData customer2;
}