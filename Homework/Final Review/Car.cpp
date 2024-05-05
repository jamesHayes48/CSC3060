#include <iostream>
#include "Car.h"
using namespace std;

int main() {
	Car myCar(1492, "Subaru", "Crosstrek");

	cout << "Let's ride!!!\n";
	for (int i = 0; i < 5; i++) {
		myCar.accelerate();
		cout << "Speeding up!!! Speed: " << myCar.getSpeed() << endl;
	}

	cout << "Let's slow down!!!\n";
	for (int i = 0; i < 5; i++) {
		myCar.brake();
		cout << "Slowing down!!! Speed: " << myCar.getSpeed() << endl;
	}
	return 0;
}