#include <iostream>
using namespace std;

const double HOUSING = 500.0;
const double UTIL = 150.0;
const double HOUSEHOLD = 65.0;

struct MonthlyBudget {
	double housing;
	double utilities;
	double householdExpenses;
	double transport;
	double medical;
	double insurance;
	double entertain;
	double clothing;
	double misc;
};

void getMonthlyBudget(MonthlyBudget&);
void displayMonthlyReport(const MonthlyBudget&);

int main() {
	MonthlyBudget budget;

	getMonthlyBudget(budget);

	displayMonthlyReport(budget);


}

void displayMonthlyReport(const MonthlyBudget& mb) {
	double overUnder = 0.0;
}