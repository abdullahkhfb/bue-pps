
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeToFile(string filename)
{
    ofstream outFile(filename);
    string name;
    double grade;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student grade: ";
    cin >> grade;

    outFile << name << endl;
    outFile << grade << endl;

    outFile.close();
}

double readFromFile(string filename)
{
    ifstream inFile(filename);
    string name;
    double grade, sum = 0;
    int count = 0;

    while (getline(inFile, name))
    {
        inFile >> grade;
        inFile.ignore(); // Clear the newline
        sum += grade;
        count++;
    }

    inFile.close();
    return (count > 0) ? sum / count : 0;
}

void appendToFile(string filename, double average)
{
    ofstream outFile(filename, ios::app);
    outFile << "\nClass Average: " << average << endl;
    outFile.close();
}

int main()
{
    string filename = "Files/students.txt";

    // Write student information
    writeToFile(filename);

    // Read and calculate average
    double average = readFromFile(filename);

    // Append average to file
    appendToFile(filename, average);

    cout << "Average has been calculated and appended to the file." << endl;

    return 0;
}