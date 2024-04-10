#pragma once
#include "classGradedActivity.h"
#ifndef PASS_FAIL_ACTIVITY_H
#define PASS_FAIL_ACTIVITY_H

class PassFailActivity : public classGradedActivity {
protected:
	double minPassingScore;
public:
	// Default constructor
	PassFailActivity() : classGradedActivity() {
		minPassingScore = 0.0;
	}

	// Constructor
	PassFailActivity(double mps) : classGradedActivity() {
		minPassingScore = mps;
	}

	// Mutators
	void setMinPassingScore(double mps) {
		minPassingScore = mps;
	}

	// Accessors
	double getMinPassingScore() {
		return minPassingScore;
	}

	char getLetterGrade() const;


};

#endif // !GRADEDACTIVITY_H