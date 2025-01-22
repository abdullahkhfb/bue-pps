#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    string paragraph;
    char ch;

    // Open file for reading
    file.open("Files/paragraph.txt", ios::in);

    // Read file character by character
    while (file.get(ch))
    {
        paragraph += ch;
    }
    file.close();

    // Convert paragraph to uppercase
    string upperParagraph;
    for (char c : paragraph) // Range-based for loop to iterate over each character in the paragraph
    {
        upperParagraph += toupper(c);
    }

    // Open file in append mode and add uppercase paragraph
    file.open("Files/paragraph.txt", ios::app);
    file << "\n"
         << upperParagraph;
    file.close();

    cout << "Successfully appended uppercase paragraph to the file!" << endl;

    return 0;
}