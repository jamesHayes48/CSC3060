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
	CourseGrades(string labName, int labScore, string examName, int examScore, 
		string essayName, int essayScore, string fExamName, int fExamScore) {

		// Intialize lab
		grades[0].setName(labName);
		grades[0].setScore(labScore);

		// Intilialize exam
		grades[1].setName(examName);
		grades[1].setScore(examScore);

		// Intialize essay
		grades[2].setName(essayName);
		grades[2].setScore(essayScore);

		// Intialize Final Exam
		grades[3].setName(fExamName);
		grades[3].setScore(fExamScore);
	}

	// Mutator
	void setLab(GradedActivity& lab, int Score) {
		lab.setScore(Score);
	}

	void setPassFailExam(GradedActivity& exam, int Score) {
		exam.setScore(Score);
	}

	void setEssay(GradedActivity& essay, int Score) {
		essay.setScore(Score);
	}

	void setFinalExam(GradedActivity& fExam, int Score) {
		fExam.setScore(Score);
	}

	void print() {
		for (int i = 0; i < 4; i++) {
			cout << "Name: " << grades[i].getName() << endl;
			cout << "Score: " << grades[i].getScore() << endl;
		}
	}
};

#endif // !COURSEGRADES_H
