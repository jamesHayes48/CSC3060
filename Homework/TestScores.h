#pragma once
#ifndef TEST_SCORES_H
#define TEST_SCORES_H

class TestScores {
private:
	int numScores;
	int *scores;
public:
	// Default constructor
	TestScores() {
		numScores = 0;
		scores = nullptr;
	}
	// Constructor
	TestScores(int[], int);

	// getAverage
	double getAverage() const;
};

#endif // !TEST_SCORES_H
