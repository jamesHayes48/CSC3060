/*
* Name: James Hayes
* Assignment: 15.11
*/
#pragma once
#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H
#include <iostream>
using namespace std;

/*
Purpose: Store Name and score of an assignment 
*/
class GradedActivity {
private:
	string name;
	int score;
public:
	// Parameterized Constructor 
	GradedActivity(string Name, int Score) {
		name = Name;
		score = Score;
	}

	// Default Constructor
	GradedActivity() {
		name = "";
		score = 0;
	}

	// Mutators
	void setName(string Name) {
		name = Name;
	}

	void setScore(int Score) {
		score = Score;
	}

	// Accessors
	string getName() {
		return name;
	}

	int getScore() {
		return score;
	}

};

#endif // !GRADEDACTIVITY_H
