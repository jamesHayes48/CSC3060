#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open a file named "output.txt" for writing
    ofstream outputFile("shit");

    // Check if the file is successfully opened
    if (!outputFile.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // Write some text to the file
    outputFile << "Hello, this is some text written to a file using C++!\n";
    outputFile << "This is another line of text.\n";

    // Close the file
    outputFile.close();

    cout << "Data has been written to the file." << endl;

    return 0;
}
