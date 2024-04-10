#pragma once
#ifndef CLASS_GRADEDACTIVITY_H
#define CLASS_GRADEDACTIVITY_H

class classGradedActivity {
protected:
	double score;
public:
	classGradedActivity() {
		score = 0.0;
	}

	classGradedActivity(double s) {
		score = s;
	}

	void setScore(double s) {
		score = s;
	}

	virtual double getScore() const {
		return score;
	}

	virtual char getLetterGrade() const;
};

#endif // !GRADEDACTIVITY_H