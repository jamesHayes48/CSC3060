#include <iostream>
using namespace std;

// Constants
const int SIZE = 80;
const int MIN = 6;

// Function Prototypes
void displayRequirements();
bool isValid(char[]);
bool hasLength(char[]);
bool hasLower(char[]);
bool hasUpper(char[]);
bool hasDigit(char[]);
void displayResults(char[]);

int main() {
	// Hold password
	char cstring[SIZE];

	// Display requirements for password
	displayRequirements();

	// Get Input from user
	cout << "Enter a password: ";
	cin.getline(cstring, SIZE);

	// Display message if pwd was valid
	displayResults(cstring);

	return 0;
}

void displayRequirements() {
	cout << "Password must have: " << endl;
	cout << "At least " << MIN <<  " characters" << endl;
	cout << "Has at least 1 uppercase letter" << endl;
	cout << "Has at least 1 lowercase letter" << endl;
	cout << "Has at least 1 digit" << endl;
}

void displayResults(char str[]) {
	if (isValid(str)) {
		cout << "The password is valid :3.\n";
	}
	else {
		cout << "Not a valid password >:(.\n";

		if (!hasLength(str)) {
			cout << "Password should be " << MIN << " characters long.\n";
		}

		if (!hasLower(str)) {
			cout << "It should have at least 1 lowercase letter.\n";
		}

		if (!hasUpper(str)) {
			cout << "It should have at least 1 uppercase letter.\n";
		}
		
		if (!hasDigit(str)) {
			cout << "It should at least 1 digit.\n";
		}
	}
}

bool isValid(char str[]) {
	bool status = false;

	if (hasLength(str) && hasLower(str) && hasUpper(str) && hasDigit(str)) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

bool hasLength(char str[]) {
	bool status = false;
	int count = 0;

	// Count length
	while (*str != '/0') {
		count++;

		*str++;
	}

	if (count >= MIN) {
		status = true;
	}
	return status;
}

bool hasLower(char str[]) {
	bool status = false;
	int count = 0;

	while (*str != '\0' && count == 0) {
		if (islower(*str)) {
			count++;
		}
		else {
			*str++;
		}
	}

	if (count > 0) {
		status = true;
	}

	return status;
}

bool hasUpper(char str[]) {
	bool status = false;
	int count = 0;

	while (*str != '\0' && count == 0) {
		if (isupper(*str)) {
			count++;
		}
		else {
			*str++;
		}
	}

	if (count > 0) {
		status = true;
	}

	return status;
}

bool hasDigit(char str[]) {
	bool status = false;
	int count = 0;

	while (*str != '\0' && count == 0) {
		if (isdigit(*str)) {
			count++;
		}
		else {
			*str++;
		}
	}

	if (count > 0) {
		status = true;
	}

	return status;
}
