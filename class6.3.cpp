
#include <iostream>

using namespace std;

// Calculate kinetic energy
double kineticEnergy(double mass, double velocity);

int main() {
	double mass, velocity = 0;
	
	// Get Mass
	cout << "Enter Mass: ";
	cin >> mass;

	// Get Velocity
	cout << "Enter Velocity: ";
	cin >> velocity;

	// Calculate kineticEnergy
	cout << "The object's kinetic energy is "
		<< kineticEnergy(mass, velocity)
		<< " joules\n";

	return 0;
}

double kineticEnergy(double mass, double velocity) {
	return 0.5 * mass * velocity;
}
