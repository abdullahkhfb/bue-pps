#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Write sentences to a file
    ofstream outFile;
    outFile.open("Files/sentences.txt");
    outFile << "I want to finish the semester.\n";
    outFile << "I want the holiday to start.\n";
    outFile << "I want to go to the North Coast.\n";
    outFile.close();

    // Open file for reading
    ifstream inFile;
    inFile.open("Files/sentences.txt");
    string word;

    // Position for "finish"
    inFile.seekg(10); // Move to the 11th character (0-based index)
    inFile >> word;
    cout << "First word: " << word << endl;

    // Position for "North Coast."
    inFile.seekg(82);
    inFile >> word;
    string secondWord;
    inFile >> secondWord;
    cout << "Second phrase: " << word << " " << secondWord << endl;

    inFile.close();
    return 0;
}