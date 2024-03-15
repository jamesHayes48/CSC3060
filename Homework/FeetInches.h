#pragma once
// Specification file for FeetInches Class 
#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>
using namespace std;

class FeetInches;

// Function Prototypes for overloaded Stream Operators
ostream& operator << (ostream&, const FeetInches&);
istream& operator >> (istream&, FeetInches&);


// FeetInches class holds distances or measurments expressed in feet and inches

class FeetInches {
private:
	int feet;	// Hold Number of feet
	int inches;	// Hold number of inches
	void simplify();	// Valdiation function
		// to be defined in FeetInches.cpp

public:
	// Constructor
	FeetInches(int f = 0, int i = 0) {
		feet = f;
		inches = i;
		simplify();
	}
	// Copy constructor
	FeetInches(FeetInches& right) {
		feet = right.feet;
		inches = right.inches;
	}	
	// Mutator functions
	void setFeet(int f) {
		feet = f;
	}

	void setInches(int i) {
		inches = i;
		simplify();
	}
	
	FeetInches multiply(FeetInches obj) {
		FeetInches temp;
		temp.feet = feet * obj.feet;
		temp.inches = inches * obj.inches;
		return temp;
	}

	// Accessor function
	int getFeet() const {
		return feet;
	}

	int getInches() const {
		return inches;
	}

	// Overloaded operator functions
	FeetInches operator + (const FeetInches&);

	FeetInches operator - (const FeetInches&);

	FeetInches operator ++ (); // Prefix

	FeetInches operator ++ (int); // Postfix

	FeetInches operator > (const FeetInches&);

	FeetInches operator < (const FeetInches&);

	FeetInches operator == (const FeetInches&);
	// New Operators
	bool operator >= (const FeetInches&);
	bool operator <= (const FeetInches&);
	bool operator != (const FeetInches&);

	// Conversion functions
	operator double();
	operator int();

	// Friends - Access members of other classes
	friend ostream& operator << (ostream&, const FeetInches&);

	friend istream& operator >> (istream&, FeetInches&);
};

#endif