
#include <iostream>
#include <string>
using namespace std;

int const STUDENTS = 5;
int const SCORES = 4;

void inputData(string&, double[]);
void calcGrade(double[], char&, double&);
void displayGrade(string, double[], double, char);

int main() {
	string names[STUDENTS];
	char grades[STUDENTS];
	double averages[STUDENTS];

	double testScores1[SCORES];
	double testScores2[SCORES];
	double testScores3[SCORES];
	double testScores4[SCORES];
	double testScores5[SCORES];

	// Get students 1's data anca calculate grade
	cout << "Enter data for student 1.\n";
	inputData(names[0], testScores1);
	calcGrade(testScores1, grades[0], averages[0]);

	// Get students 1's data anca calculate grade
	cout << "Enter data for student 2.\n";
	inputData(names[1], testScores2);
	calcGrade(testScores2, grades[1], averages[1]);

	// Get students 1's data anca calculate grade
	cout << "Enter data for student 3.\n";
	inputData(names[2], testScores3);
	calcGrade(testScores3, grades[2], averages[2]);

	// Get students 1's data anca calculate grade
	cout << "Enter data for student 1.\n";
	inputData(names[3], testScores4);
	calcGrade(testScores1, grades[3], averages[3]);

	// Get students 1's data anca calculate grade
	cout << "Enter data for student 1.\n";
	inputData(names[0], testScores5);
	calcGrade(testScores1, grades[4], averages[0]);

	return 0;
}

void inputData(string&, double[]) {

}
void calcGrade(double[], char&, double&) {

}
void displayGrade(string, double[], double, char) {

}