#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Create an input file stream
    ifstream inputFile;
    inputFile.open("Files/demo.txt");

    // Check if file opened successfully
    if (!inputFile.is_open())
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;

    // Read file line by line until end of file
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}