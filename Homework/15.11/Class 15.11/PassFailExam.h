#pragma once
#ifndef PASSFAIL_EXAM_H
#define PASSFAIL_EXAM_H
#include "PassFailActivity.h"

class PassFailExam : public PassFailActivity {
private:
	int numQuestions;
	double pointsEach;
	int numMissed;
public:
	// Default constructor
	PassFailExam() {
		numQuestions = 0;
		pointsEach = 0.0;
		numMissed = 0;
	}

	// Constructor
	PassFailExam(int questions, double mps, int missed) {
		numQuestions = questions;
		pointsEach = mps;
		numMissed = missed;
	}

	// Mutator
	void set(int, int);

	// Accessor
	double getNumQuestions() const {
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