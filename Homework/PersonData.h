#pragma once
#ifndef PERSON_DATA_H
#define PERSON_DATA_H
#include <string>
using namespace std;

class PersonData {
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;

public:
	// Default Constructor
	PersonData() {
		lastName = "";
		firstName = "";
		address = "";
		city = "";
		state = "";
		zip = "";
	}
};

#endif // !PERSON_DATA_H