#include <iostream>
#include <string>

#include "CRYPTOroman.h"

using namespace std;

int main() {
	CRYPTOromanType roman;

	string romanString;
	cout << "Enter a roman number: ";
	cin >> romanString;
	cout << endl;

	roman.setRoman(romanString);

	cout << "The equivalent of the CRYPTO roman numeral " <<
		romanString << " is ";
	roman.printPositiveInteger();
	cout << endl;

	return 0;
}