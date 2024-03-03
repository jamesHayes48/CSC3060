#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <fstream>
using namespace std;

int countSentence(string);
int countWords(string);

int main() {
	int sentences;
	int words;
	double average;

	// Get num of sentences in file
	sentences = countSentence("text.txt");

	// Get number of words
	words = countWords("text.txt");

	average = static_cast<double>(words) / sentences;

	// Display results
	cout << "The file contains " << words
		<< " words, and " << sentences
		<< " sentences.\n";
	cout << "There is an average of "
		<< setprecision(1) << fixed << average
		<< " words per sentence.\n";

	return 0;
}

int countSentence(string filename) {
	const int SIZE = 500;
	char input[SIZE];
	fstream inputFile;
	int numSentences = 0;

	// Open file
	inputFile.open(filename, ios::in);
	if (!inputFile) {
		cout << "Error, Cannot open file\n";
		exit(0);
	}

	inputFile.getline(input, SIZE);

	while (!inputFile.eof()) {
		for (int index = 0; input[index] != '\0'; index++) {
			if (input[index] == '.') {
				numSentences++;
			}
		}
		inputFile.getline(input, SIZE);
	}

	inputFile.close();

	return numSentences;
}

int countWords(string filename) {
	const int SIZE = 500;
	char input[SIZE];
	fstream inputFile;
	int numWords = 0;

	// Open file
	inputFile.open(filename, ios::in);
	if (!inputFile) {
		cout << "Error, Cannot open file\n";
		exit(0);
	}

	inputFile.getline(input, SIZE);
	while (!inputFile.eof()) {
		int index = 0;
		while (input[index] != '0') {
			while (isspace(input[index]) && input[index] != '\0') {
				index++
			}
			if (input[index] != '\0') {
				numWords++;
			}
			while (!isspace(input[index]) && input[index] != '\0') {

				index++;
			}
		}
		input
	}
}