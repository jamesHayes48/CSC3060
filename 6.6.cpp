#include <iostream>
using namespace std;

int kineticEnergy(int mass, int velocity);

int main() {
	int objectMass = 0;
	int objectVelocity = 0;
	int objectKE = 0;

	cout << "Enter object's mass in kilograms and velocity in meters per second.\n";
	cin >> objectMass >> objectVelocity;

	objectKE = kineticEnergy(objectMass, objectVelocity);

	cout << "Your object's kinetic energy is " << objectKE << "J.\n";

	return 0;
}

int kineticEnergy(int mass, int velocity) {
	int objectKineticEnergy = (mass * (velocity * velocity)) / 2;
	return objectKineticEnergy;
}
