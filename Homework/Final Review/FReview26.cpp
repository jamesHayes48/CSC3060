#include "Employee.h"
#include "ProductionWorker.h"

int main() {
	Employee employee1;
	employee1.setName("James");
	employee1.setDate("June 12, 1976");
	employee1.setNum(1043);
	employee1.setDisabled(true);

	ProductionWorker worker("Bill", 3123, "July 23 2000", false, 3, 50.00);

	cout << "--------------Employee Class--------------------\n";
	employee1.printData();

	cout << "--------------Production Worker Class--------------------\n";
	worker.printData();

	return 0;
}