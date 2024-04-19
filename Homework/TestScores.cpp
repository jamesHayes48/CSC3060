#include "TestScores.h"
#include "NegativeScore.h"

// Constructor
TestScores::TestScores(int scoreArray[], int size) {
	// Assign numScores
	numScores = size;

	// Allocate memory for this array
	scores = new int[size];

	// Copy array
	for (int index = 0; index < size; index++) {
		if (scores[index] < 0) {
			throw NegativeScore(scores[index]);
		}
		else {
			scores[index] = scoreArray[index];
		}
	}

}

// Return average of scores
double TestScores::getAverage() const {
	int total = 0;

	for (int index = 0; index < numScores; index++) {
		total += scores[index];
	}

	return static_cast<double>(total) / numScores;
}