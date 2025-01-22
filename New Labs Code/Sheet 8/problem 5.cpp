#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string reverseLine(string line)
{
    string reversed;
    for (int i = line.length() - 1; i >= 0; i--)
    {
        reversed += line[i];
    }
    return reversed;
}

int main()
{
    ifstream inputFile;
    inputFile.open("Files/input.txt");
    ofstream outputFile;
    outputFile.open("Files/output.txt");
    string line;

    // Check if files opened successfully
    if (!inputFile.is_open() || !outputFile.is_open())
    {
        cout << "Error opening files!" << endl;
        return 1;
    }

    // Read each line, reverse it, and write to output file
    while (getline(inputFile, line))
    {
        string reversedLine = reverseLine(line);
        outputFile << reversedLine << endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    cout << "Lines have been reversed and written to output.txt" << endl;
    return 0;
}