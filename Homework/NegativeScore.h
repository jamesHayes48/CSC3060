#pragma once
#ifndef NEGATIVE_SCORE_H
#define NEGATIVE_SCORE_H

class NegativeScore {
private:
	int score;
public:
	// Constructor
	NegativeScore(int s) {
		score = s;
	}

	// Return Function
	int getScore() const {
		return score;
	}
};

#endif
