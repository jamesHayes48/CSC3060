#pragma once
#ifndef FINAL_EXAM_H
#define FINAL_EXAM_H
#include "GradedActivity.h"

class FinalExam	: public GradedActivity {
private:
	int numQuestions;
	double pointsEach;
	int numMissed;

public:
	// Default constructor
	FinalExam() {
		numQuestions = 0;
		pointsEach = 0.0;
		numMissed = 0;
	}

	// Constructor 
	FinalExam(int questions, int missed) {
		set(questions, missed);
	}

	// Mutators
	void set(int, int);
	void adjustScore();

	// Accessor
	int getNumQuestions() const {
		return numQuestions;
	}

	double getPointsEach() const {
		return pointsEach;
	}

	int getNumMissed() const {
		return numMissed;
	}

};
#endif