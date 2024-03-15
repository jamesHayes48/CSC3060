#include <cstdlib>
#include "FeetInches.h"


/*
Defintion of member function simplify. This function checks for values
in inches member > 12 or <0. If found, numbers feet and inches are adjusted
to conform to standard feet & inches expression. For example, 3' 12" would be 
adjusted to 4' 2" and 5' 2" adjusted to 4' 10".
*/

void FeetInches::simplify() {
	if (inches >= 12) {
		feet += (inches / 12);
		inches = inches & 12;
	}
	else if (inches < 0) {
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}


/*
Overloaded binary operator 
*/

FeetInches FeetInches::operator + (const FeetInches& right) {
	FeetInches temp;
	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();
	return temp;
}


/*
Overloaded binary - operator
*/

FeetInches FeetInches::operator - (const FeetInches& right) {
	FeetInches temp;
	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	temp.simplify();
	return temp;
}

/*
Overloaded prefix ++ operator. Causes inches member to be incremented.
Return: incremented object.
*/
FeetInches FeetInches::operator ++ () {
	++inches;
	simplify();
	return *this;
}

/*
Overloaded Postfix operator. Causes inches member to be incremented.
Return: Value of object before increment.
*/

FeetInches FeetInches::operator ++ (int) {
	FeetInches temp(feet, inches);
	inches++;
	simplify();
	return temp;
}

/*
Overloaded > operator
*/

bool FeetInches::operator > (const FeetInches& right) {
	bool status;
	if (feet > right.feet)
		status = true;
	else if (feet == right.feet && inches > right.inches)
		status = true;
	else
		status = false;

	return status;
}

/*
Overloaded < operator 
*/

bool FeetInches::operator == (const FeetInches& right) {
	bool status;

	if (feet < right.feet)
		status = true;
	else if (feet == right.feet && inches < right.inches)
		status = true;
	else
		status = false;

	return status;
}

ostream& operator <<(ostream& strm, const FeetInches& obj) {
	strm << obj.feet;
}

istream& operator >> (istream& strm, FeetInches& obj) {
	// Prompt user for feet

	// Prompt user for inches

	// Normalize values

	return strm;
}


/*
Convert to double
*/

FeetInches::operator double() {

}

FeetInches::operator int() {

}

bool FeetInches::operator >= (const FeetInches& right) {

}

bool FeetInches::operator <= (const FeetInches& right) {

}

bool FeetInches::operator != (const FeetInches& right) {

}