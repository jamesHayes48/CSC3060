#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Constants
const int SIZE = 12;

struct Division {
	char diveName[SIZE];
	int quarter;
	double quarterlySales;
};

int main() {
	// File stream it baby ios out-> read ios binary-> read only text
	fstream corporateData("corp.dat", ios::out | ios::binary);
	
	// Division structure
	Division east, west, north, south;

	// Loop counter
	int qtr;

	// Assign names for division
	strcpy_s(east.diveName, "East");
	strcpy_s(west.diveName, "West");
	strcpy_s(north.diveName, "North");
	strcpy_s(south.diveName, "South");

	// Get sales for East
	cout << "Enter quaterly sales for East Division:\n";
	for (qtr = 1; qtr <= 4; qtr++) {
		east.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> east.quarterlySales;
		corporateData.write(reinterpret_cast<char*> (&east), sizeof(east));
	}

	// Get sales for East division
	cout << "Enter quaterly sales for West Division:\n";
	for (qtr = 1; qtr <= 4; qtr++) {
		west.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> west.quarterlySales;

		// Cast address sof west cast into char pointer, go to it and put it in there
		corporateData.write(reinterpret_cast<char*> (&west), sizeof(west));
	}

	// Get sales for East
	cout << "Enter quaterly sales for East Division:\n";
	for (qtr = 1; qtr <= 4; qtr++) {
		north.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> north.quarterlySales;
		corporateData.write(reinterpret_cast<char*> (&north), sizeof(north));
	}

	// Get sales for East division
	cout << "Enter quaterly sales for West Division:\n";
	for (qtr = 1; qtr <= 4; qtr++) {
		south.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> south.quarterlySales;

		// Cast address sof west cast into char pointer, go to it and put it in there
		corporateData.write(reinterpret_cast<char*> (&south), sizeof(south));
	}

	// Close file
	corporateData.close();

	return 0;
}

