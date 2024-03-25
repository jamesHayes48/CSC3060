#pragma once
#ifndef CUSTOMERDATA_H
#define CUSTOMER_H
#include "PersonData.h"
#include <string>
using namespace std;

class CustomerData : public PersonData {
private: 
	int customerNum;
	bool mailingList;
public:
	// Constructor
	CustomerData(string alastName, string afirstName, string aAddress,
		string aCity, string aState, string aZip, int cN, bool mL) : PersonData(alastName, afirstName,
		aAddress, aCity, aState, aZip) {
		customerNum = cN;
		mailingList = mL;
	}

	// Constructor
	CustomerData() : PersonData() {
		customerNum = 0;
		mailingList = false;
	}

	// Mutator
	void setCustomerNum(int cn) {
		customerNum = cn;
	}

	void setMailingList(bool mL) {
		mailingList = mL;
	}

	// Accessor 
	int getCustomerNum() {
		return customerNum;
	}

	bool getMailingList() {
		return mailingList;
	}
};
#endif // !CUSTOMERDATA_H
