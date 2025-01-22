#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Create and write to the file
    ofstream outFile;
    outFile.open("Files/sample.txt");
    outFile << "I did it for me.\n";
    outFile << "I liked it.\n";
    outFile << "I was good at it. And I was really… I was alive.\n";
    outFile.close();

    // Read from the file and count lines and words
    ifstream inFile;
    inFile.open("Files/sample.txt");
    string line;
    int lineCount = 0;
    int wordCount = 0;

    while (getline(inFile, line))
    {
        lineCount++;

        // Count words in current line
        bool inWord = false;
        for (char c : line)
        {
            if (c == ' ' || c == '\t')
            {
                inWord = false;
            }
            else if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
    }

    inFile.close();

    // Display results
    cout << "Number of lines: " << lineCount << endl;
    cout << "Number of words: " << wordCount << endl;

    return 0;
}