#pragma once
#ifndef COURSEGRADES_H
#define COURSEGRADES_H
#include "GradedActivity.h"

class CourseGrades {
private:
	/*
	Element 1 = Labs
	Element 2 = Exam
	Element 3 = Essay
	Element 4 = Final Exam
	*/
	GradedActivity grades[4];
public:
	// Default Constructor
	CourseGrades() {

	}

	// Parameterized Constructor
	CourseGrades() {

	}

	// Mutator
	void setLab(int score) {

	}

	void setPassFailExam(int score) {

	}

	void setEssay(int score) {

	}

	void setFinalExam(int score) {

	}

	void print() {

	}
};

#endif // !COURSEGRADES_H
