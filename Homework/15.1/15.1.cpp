#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"

void displayInfo(ProductionWorker);

int main(){
	ProductionWorker pWorker("James Hayes", "1234", "10/23/2077", 2, 18.00);
	displayInfo(pWorker);
	return 0;
}

void displayInfo(ProductionWorker w) {
	cout << "Name: " << w.getName();
}