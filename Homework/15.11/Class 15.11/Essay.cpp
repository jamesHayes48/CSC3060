#include<iostream>
#include "Essay.h"
using namespace std;

void Essay::setGrammarPoints(double p) {
	// Validate the points
	if (p < 0 || p > 30) {
		// Invalid data
		cout << "Invalid number of grammar points.\n";
		exit(EXIT_FAILURE);
	}
	// Assign the points
	grammarPoints = p;
}

void Essay::setSpellingPoints(double p) {
	// Validate the points
	if (p < 0 || p > 20) {
		// Invalid data
		cout << "Invalid number of spelling points.\n";
		exit(EXIT_FAILURE);
	}
	// Assign the points
	spellingPoints = p;
}

void Essay::setLengthPoints(double p) {
	// Validate the points
	if (p < 0 || p > 20) {
		// Invalid data
		cout << "Invalid number of spelling points.\n";
		exit(EXIT_FAILURE);
	}
	// Assign the points
	lengthPoints = p;
}