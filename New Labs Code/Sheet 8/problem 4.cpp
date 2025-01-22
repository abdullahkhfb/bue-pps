#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream surnamesFile;
    surnamesFile.open("Files/surnames.txt");
    ifstream fathernamesFile;
    fathernamesFile.open("Files/fathernames.txt");
    ofstream fullnamesFile;
    fullnamesFile.open("Files/fullnames.txt");

    string firstName, fatherName;

    while (getline(surnamesFile, firstName) && getline(fathernamesFile, fatherName))
    {
        fullnamesFile << firstName << " " << fatherName << endl;
    }

    surnamesFile.close();
    fathernamesFile.close();
    fullnamesFile.close();

    cout << "Full names have been written to fullnames.txt" << endl;

    return 0;
}