#include <iostream>
#include"FinalExam.h"
using namespace std;

void FinalExam::set(int questions, int missed) {
	double numericScore;

	// Assign questions and missed questions
	numQuestions = questions;
	numMissed = missed;

	// Find out what each question is worth
	pointsEach = 100.0 / numQuestions;

	// Find numeric score
	numericScore = 100.0 - (missed * pointsEach);

	// Set score 
	setScore(numericScore);

	// Adjust score
	adjustScore();
}

void FinalExam::adjustScore() {
	double fraction = score - static_cast<int>(score);

	// Adjust score in classGradedActivity
	if (fraction >= 0.5) {
		score += (1.0 - fraction);
	}
}