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

	// Constructor
	PersonData(string alastName, string afirstName, string aAddress, string aCity, string aState, string aZip) {
		lastName = alastName;
		firstName = afirstName;
		address = aAddress;
		city = aCity;
		state = aState;
		zip = aZip;
	}

	// Mutator
	void setLastName(string ln) {
		lastName = ln;
	}

	void setFirstName(string fn) {
		firstName = fn;
	}

	void setAddress(string addr) {
		address = addr;
	}

	void setCity(string c) {
		city = c;
	}

	void setState(string s) {
		state = s;
	}

	void setZip(string z) {
		zip = z;
	}

	// Accessors
	string getLastName() {
		return lastName;
	}

	string getFirstName() {
		return firstName;
	}

	string getAddress() {
		return address;
	}

	string getCity() {
		return city;
	}

	string getState() {
		return state;
	}

	string getZip() {
		return zip;
	}

};

#endif // !PERSON_DATA_H