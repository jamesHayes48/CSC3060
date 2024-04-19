#include <iostream>
#include "TestScores.h"
#include "NegativeScore.h"
using namespace std;

const int NUM_SCORES = 5;

int main() {
	try {
		// Array of valid scores
		int myScores[NUM_SCORES] = { 88, 90, 93, 87, 99 };

		// Create test scores object
		TestScores myTestScores(myScores, NUM_SCORES);

		// Display average
		cout << "The average score is " << myTestScores.getAverage() << endl;
		
		// Invalid scores
		int invalidScores[NUM_SCORES] = { 88, -90, 87, 100, 99 };

		TestScores invalidTestScores(invalidScores, NUM_SCORES);

		// Display average
		cout << "The average score is " << invalidTestScores.getAverage() << endl;
	}

	catch (NegativeScore e) {
		// Display error
		cout << "Invalid score was detected: " << e.getScore();
	}

	return 0;
}