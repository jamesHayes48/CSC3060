#include<iostream>
#include <fstream>
#include <map>
using namespace std;

map<string, int> wordSearch = {
	{"the", 0},
	{"cat", 0},
	{"bat", 0},
	{"I", 0},
	{"schadenfreude", 0},
	{"guten tag", 0}
};

int main() {
	ifstream readFile;
	readFile.open("C:\\GithubRepos\\CSC3060\\Homework\\17.6\\ReadTest.txt", ios::in);

	if (!readFile) {
		cout << "No file found" << endl;
		exit(0);
	}
	else {

	}
}