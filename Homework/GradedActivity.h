#pragma once
#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H
#include <iostream>
using namespace std;

class GradedActivity {
private:
	string name;
	int score;
public:
	// Constructor 
	GradedActivity(string Name, int Score) {
		name = Name;
		score = Score;
	}

	// Default
	GradedActivity() {
		name = "";
		score = 0;
	}

	// Mutator
	void setName(string Name) {
		name = Name;
	}

	void setScore(int Score) {
		score = Score;
	}

	// Accessor
	string getName() {
		return name;
	}

	int getScore() {
		return score;
	}

};

#endif // !GRADEDACTIVITY_H
