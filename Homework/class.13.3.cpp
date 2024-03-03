#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

// Car class is added :3

int main() {
	int count;
	Car awesomeCar(2077, "awesome car");

	cout << "Current speed: "
		<< awesomeCar.getSpeed()
		<< endl;

	for (count = 0; count < 5; count++) {
		awesomeCar.accelarate();
		cout << "Current speed: "
			<< awesomeCar.getSpeed()
			<< endl;
	}

	// Brake Five times :3
	for (count = 0; count < 5; count++) {
		awesomeCar.brake();
		cout << "Current speed: "
			<< awesomeCar.getSpeed()
			<< endl;
	}
}