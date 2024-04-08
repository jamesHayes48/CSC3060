#pragma once
#ifndef ESSAY_H
#include "classGradedActivity.h"
class Essay : public classGradedActivity {
private:
	double grammarPoints;
	double spellingPoints;
	double lengthPoints;
	double contentPoints;

public:
	Essay() {
		grammarPoints, spellingPoints, lengthPoints, contentPoints = 0.0;
	}

	// Mutators
	void setGrammarPoints(double);
	void setSpellingPoints(double);
	void setLengthPoints(double);
	void setContentPoints(double);

	// Accessors
	double getGrammarPoints() const {
		return grammarPoints;
	}

	double getSpellingPoints() const {
		return spellingPoints;
	}

	double getLengthPoints() const {
		return lengthPoints;
	}

	double getContentPoints() const {
		return contentPoints;
	}

	virtual double getScore();
	virtual char getLettergrade();
};

#endif // !ESSAY_H
