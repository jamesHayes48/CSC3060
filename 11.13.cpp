// MAKE IT COMPILE
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;
const int SENTINEL = -1;

struct Drink {
	string name;
	double cost;
	int number;
};

int main() {
	Drink drinkMachine[SIZE] = { {"Cola", .75, 20}, 
		{"Root Beer", .75, 20} ,
		{"Lemon-Lime", .75, 20}, 
		{"Grape Soda", .80, 20}, 
		{"Cream Soda", .80, 20}};

	double totalCharge = 0.0;
	int input = 0;

	do {
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "Pick a drink, 1.Cola, 2.Root Beer, 3.Lemon-Lime, 4.Grape Soda, 5.Cream Soda\n";
		cout << "Type -1 to quit: ";
		
		cin >> input;

		if (input != SENTINEL) {
			cout << "Enter amount of money entered: ";
			double moneyPaid = 0;
			cin >> moneyPaid;
			cout << "Money returned $" << moneyPaid - drinkMachine[input - 1].cost << endl;
			totalCharge += drinkMachine[input - 1].cost;
			drinkMachine[input - 1].number--;
		}
		else if ((drinkMachine[input - 1].number) == 0) {
			cout << drinkMachine[input - 1].name << " is out." << endl;;
		}

	} while (input != SENTINEL);

	cout << "Total Charged: " << totalCharge;
}