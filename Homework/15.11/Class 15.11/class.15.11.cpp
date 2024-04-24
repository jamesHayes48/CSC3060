#include <iostream> 
// Create a .h file for each object named in 
#include "classGradedActivity.h"
#include "PassFailExam.h"
#include "FinalExam.h"
#include "classCourseGrades.h"
#include "Essay.h"
using namespace std;

int main() {
	// Create Graded Activity for lab
	classGradedActivity lab(80);

	// Create PassFailExam object. 50 questions, 5 missed w/ min passing score 70.
	PassFailExam pfexam(50, 5, 70);

	// Create Essay object
	Essay essay;
	essay.setGrammarPoints(25);
	essay.setSpellingPoints(15);
	essay.setLengthPoints(20);
	essay.setContentPoints(30);

	// Create final exam object
	FinalExam finalExam(50, 5);

	// Create CourseGrades object
	classCourseGrades myGrades;

	// Store grade items in the courseGrades object
	myGrades.setLab(&lab);
	myGrades.setPassFailExam(&pfexam);
	myGrades.setEssay(&essay);
	myGrades.setFinalExam(&finalExam);

	// Print grade information
	myGrades.print();

	return 0;
}