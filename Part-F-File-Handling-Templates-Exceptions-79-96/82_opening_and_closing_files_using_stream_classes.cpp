#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;
    outFile.open("stream_demo.txt");

    if (!outFile.is_open()) {
        cout << "File could not be opened for writing.\n";
        return 1;
    }

    outFile << "Demonstrating file stream classes.\n";
    outFile.close();
    cout << "Output file written and closed.\n";

    ifstream inFile;
    inFile.open("stream_demo.txt");

    if (!inFile.is_open()) {
        cout << "File could not be opened for reading.\n";
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << '\n';
    }

    inFile.close();
    cout << "Input file closed.\n";
    return 0;
}
