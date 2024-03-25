/*
Name: James Hayes
Assignment: 15.11
Description: This program demonstrates using an array of objects in another object. It intializes an 
array of assignments for class1 and then prints out the information of each assignment. 
CourseGrades.h uses GradedActivity.h as an array for its member variable.
*/

#include <iostream>
#include "CourseGrades.h"

int main() {
	// Create and intialize object and array 
	CourseGrades class1("Lab", 70, "Pass/Fail Exam", 70, "Essay", 60, "Final Exam", 100);
	
	// Print everything in array
	class1.print();

	return 0;
}