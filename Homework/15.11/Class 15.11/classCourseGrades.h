#pragma once
#include <iostream>
#include "classGradedActivity.h"
#include "PassFailExam.h"
#include "FinalExam.h"
#include "Essay.h"

#ifndef CLASS_COURSEGRADES_H
#define CLASS_COURSEGRADES_H
// Constant for number of grades
const int NUM_GRADES = 4;
const int LAB = 0;
const int PASS_FAIL_EXAM = 1;
const int ESSAY = 2;
const int FINAL_EXAM = 3;

class classCourseGrades {
private:
	// Array of GA ptrs to reference the different types of grades
	classGradedActivity* grades[NUM_GRADES];

public:
	classCourseGrades() {
		for (int i = 0; i < NUM_GRADES; i++) {
			grades[i] = nullptr;
		}
	}

	// Mutators
	void setLab(classGradedActivity* activity) {
		grades[LAB] = activity;
	}

	void setPassFailExam(PassFailExam* pfexam) {
		grades[PASS_FAIL_EXAM] = pfexam;
	}

	void setEssay(Essay* essay) {
		grades[ESSAY] = essay;
	}

	void setFinalExam(FinalExam* finalExam) {
		grades[FINAL_EXAM] = finalExam;
	}

	void print() const;
};

#endif // !GRADEDACTIVITY_H