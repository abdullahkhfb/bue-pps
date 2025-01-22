#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Declare variables
    char searchChar;
    string word;

    // Get the search character from user
    cout << "Enter a character to search for words that begin with it: ";
    cin >> searchChar;

    // Open input file for reading
    ifstream inputFile;
    inputFile.open("Files/input.txt");

    // Open output file for writing
    ofstream outputFile;
    outputFile.open("Files/output.txt");

    // Check if files opened successfully
    if (!inputFile.is_open() || !outputFile.is_open())
    {
        cout << "Error opening files!" << endl;
        return 1;
    }

    // Read words from input file
    while (inputFile >> word)
    {
        // Check if word starts with the search character
        if (word[0] == searchChar)
        {
            // Write matching word to output file
            outputFile << word << endl;
        }
    }

    // Close files
    inputFile.close();
    outputFile.close();

    cout << "Words starting with '" << searchChar << "' have been saved to output.txt" << endl;

    return 0;
}