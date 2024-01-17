#include <iostream>
using namespace std;

double kineticEnergy(double mass, double velocity);

int main() {
	double objectMass = 0;
	double objectVelocity = 0;
	double objectKE = 0;

	cout << "Enter object's mass in kilograms and velocity in meters per second.\n";
	cin >> objectMass >> objectVelocity;

	objectKE = kineticEnergy(objectMass, objectVelocity);

	cout << "Your object's kinetic energy is " << objectKE << "J.\n";

	return 0;
}

double kineticEnergy(double mass, double velocity) {
	double objectKineticEnergy = (mass * (velocity * velocity)) / 2.0;
	return objectKineticEnergy;
}
