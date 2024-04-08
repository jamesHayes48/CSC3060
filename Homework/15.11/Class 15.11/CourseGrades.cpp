#include <iostream>
#include "classCourseGrades.h"
using namespace std;

void classCourseGrades::print() const {
	// Display lab score and grade
	cout << "Lab score: "
		<< grades[LAB]->getScore() << "\tGrade: "
		<< grades[LAB]->getLetterGrade() << endl;

	// Display pass/fail exam score
	cout << "Pass/Fail score: "
		<< grades[PASS_FAIL_EXAM]->getScore() << "\tGrade: "
		<< grades[PASS_FAIL_EXAM]->getLetterGrade() << endl;
	// Display essay score and grade
	cout << "Essay score: "
		<< grades[ESSAY]->getScore() << "\tGrade: "
		<< grades[ESSAY]->getLetterGrade() << endl;

	// Display final exam scorre and grade
	cout << "Final exam score: "
		<< grades[FINAL_EXAM]->getScore() << "\tGrade: "
		<< grades[FINAL_EXAM]->getLetterGrade() << endl;
}