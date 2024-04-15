/*
James Hayes
Assignment: 17.6
Description: This program searches for a word in a given text file and keeps track of frequency of word.
It tokenizes the strings in text file, turns it uppercase, and checks if word appears in map. 
*/

// Header Files
#include<iostream>
#include <string>
#include <fstream>
#include <map>
using namespace std;

/*
{WORD, FREQUENCY}
Purpose: To store word and frequncy of word in given text file
*/
map<string, int> wordSearch = {
	{"THE", 0},
	{"CAT", 0},
	{"BAT", 0},
	{"I", 0},
	{"SCHADENFREUDE", 0},
	{"COMPUTER", 0},
	{"SUPERCALIFRAGILISTICEXPIALIDOCIOUS",0}
};

void searchForWord(string wordToSearch);
void printWordResults();
string tokenizeString(string& line, char delim, int& start, int& dPos, bool& max);
void stringToUpper(string& word);

int main() {
	// File Object
	ifstream readFile;

	// File path
	string filePath = "C:\\GithubRepos\\CSC3060\\Homework\\17.6\\readTest.txt";
	
	// Open file for reading only
	readFile.open(filePath, ios::in);

	// If file was not found, exit program
	if (!readFile) {
		cout << "No file found" << endl;
		exit(0);
	}
	else {
		// Line of words in a text file
		string line;

		// While file still has lines remaining, continue to search for words 
		while (getline(readFile, line)) {
			// Reset all variables for next line
			// Delimeter position
			int delimPos = 0;

			// Line length
			int lineLength = line.length();

			// Choose whether to continue searching for words
			bool maxReached = false;

			// Search for words while line length has not been exceeded
			while (delimPos <= lineLength && maxReached != true) {

				// Start of line in program
				int tokenStart = 0;

				// Tokenize word out of line
				string sWord = tokenizeString(line, ' ', tokenStart, delimPos, maxReached);
				
				// Make string all uppercase
				stringToUpper(sWord);

				// Create new line from shifted start in tokenizeString
				line = line.substr(tokenStart);

				// Check if word is in map
				searchForWord(sWord);
			}
		}
		// Close file and print frequency of words
		readFile.close();
		printWordResults();
	}

	return 0;
}

/*
Purpose: To tokenize a string and return it
Parameters: Line to tokenize a given word, delimeter, start variable, delimeter position
variable, and boolean to define if it max of line was reached
Return: A word from a line of words
*/
string tokenizeString(string& line, char delim, int& start, int& dPos, bool &max) {
	// Find position of delimeter
	dPos = line.find(delim);

	// Set max to true if length of line is reached
	if (dPos == string::npos) {
		max = true;
	}

	// Return word
	string tokenString = line.substr(start, dPos - start);

	// Increment start for the substring
	start = dPos + 1;

	// Exit and return word
	return tokenString;
}

/*
Purpose: To make a string upper case for comparing the words in map
Parameters: Address of word
Return: None, but manipulate a word by reference
*/
void stringToUpper(string& word) {
	for (char& letter : word) {
		letter = toupper(letter);
	}
}

/*
Purpose: To find a word in the map and increment the count
Paramters: Word being searched for
Return: None, but will increment it if word is found
*/
void searchForWord(string wordtoSearch) {
	auto iter = wordSearch.find(wordtoSearch);
	if (iter != wordSearch.end()) {
		// Increment frequency of word
		iter->second += 1;
	}
}

/*
Purpose: To print the word and frequncy of word in wordSearch map
*/
void printWordResults() {
	for (auto element : wordSearch) {
		cout << "Word: " << element.first  << "\nFrequency: " << element.second << endl;
		cout << "----------------------------------------------\n";
	}
}