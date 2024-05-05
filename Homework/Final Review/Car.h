#pragma once
#ifndef CAR_H
#define CAR_H
using namespace std;
#include <string>

class Car {
private: 
	int yearModel;
	string GasCar;
	string ECar;
	int speed;
public:
	Car(int year, string gas, string ecar) {
		yearModel = year;
		GasCar = gas;
		ECar = ecar;
		speed = 0;
	}

	int getSpeed() {
		return speed;
	}

	void accelerate() {
		speed += 5;
	}

	void brake() {
		speed -= 5;
	}
};
#endif // !CAR_H
