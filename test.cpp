#include <iostream>
#include <fstream>
using namespace std;

enum Tree {OAK, MAPLE, PINE};

int main() {
	int num = 99;
	if (num > 10 && num < 100)
		cout << "Acceptable\n";
	int* numberz = new int[5];
	for (int i = 0; i <= 4; i++)
		*(numberz + i) = i;
	cout << numberz[2] << endl;

	char company[12] = "James Hayes";

	Tree t1 = OAK;
	Tree t2 = MAPLE;

	if (OAK > PINE)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	//int nums[5];
	int numbers[4] = {99, 87};
	int numr[3];
	numr[0] = 4;
	cout << numbers[3] << endl;
	cout << numr[2];

	int n = 4;
	char* charPtr = nullptr;
	int* Ptr = static_cast<int*>(static_cast<void*>(charPtr));
}

int qempty() { return f == r ? 1 : 0; }