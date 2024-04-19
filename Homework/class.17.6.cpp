#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main() {
	string fileName, input;

	ifstream file;

	map<string, int> words;

	cout << "Enter a filename: ";
	getline(cin, filename);

	file.open(filename);

	while (file >> input) {
		if (words.count(input)) {
			words[input]++;
		}
		else {
			words.emplace(make_pair(input, 1))
		}
	}

	file.close();

	cout << "\nWord Frequency: ";
	cout << "\n-----------------------" << endl;

	for (auto element : words) {
		cout << element.first << ": " << element.second << endl;
	}

	return 0;
}