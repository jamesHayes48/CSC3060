#include<iostream>
#include<iomanip>
using namespace std;
// Constants
const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;

// Function Prototypes
void getFoodEaten(double[][NUM_DAYS]);
void displayAverageDaily(double[][NUM_DAYS]);
void displayLeastEaten(double[][NUM_DAYS]);
void displayMostEaten(double[][NUM_DAYS]);

int main() {
	// Array to hold monkey data
	double foodEaten[NUM_MONKEYS][NUM_DAYS];

	// Get amount eaten
	getFoodEaten(foodEaten);

	// Display average amount eaten daily by each monkey
	displayAverageDaily(foodEaten);

	// Display least amount eaten in a day by one money
	displayLeastEaten(foodEaten);

	// Display most amount eaten in a day
	displayMostEaten(foodEaten);

	return 0;
}

void getFoodEaten(double[][NUM_DAYS]) {
	for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
		for (int day = 0; day < NUM_DAYS; day++) {
			cout << "Enter pounds eaten by monkey" << monkey + 1;
		}
	}
}
void displayAverageDaily(double food[][NUM_DAYS]) {
	
	double total;
	double average;

	for (int day = 0; day < NUM_DAYS; day++) {
		total = 0.0;

		for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
			total += food[monkey][day];
		}
		average = total / NUM_MONKEYS;
		
		cout << "Average amount eaten on day " << (day + 1) << " is " 
			<< average << "pounds\n" << endl;
	
	}
}
void displayLeastEaten(double food[][NUM_DAYS]) {
	double leastFood;
	int leastMonkey = 0;
	int leastDay = 0;
	
	double leastFood = food[leastMonkey][leastDay];


	for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
		for (int day = 0; day < NUM_DAYS; day++) {
			if (food[monkey][day] < leastFood) {
				leastFood = food[monkey][day];
				leastDay = day; 
				leastMonkey = monkey;
			}
		}
	}
}
void displayMostEaten(double food[][NUM_DAYS]) {
	double mostFood;
	int mostMonkey = 0;
	int mostDay = 0;

	double mostFood = food[mostMonkey][mostDay];

	for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
		for (int day = 0; day < NUM_DAYS; day++) {
			if (food[monkey][day] < mostFood) {
				mostFood = food[monkey][day];
				mostDay = day;
				mostMonkey = monkey;
			}
		}
	}
}