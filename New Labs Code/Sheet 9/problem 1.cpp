#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Define the Student structure
struct Student
{
    string name;
    int ID;
    double grade;
};

int main()
{
    const int SIZE = 3;
    Student students[SIZE];

    // Input student information
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter name for student " << i + 1 << ": ";
        getline(cin, students[i].name);
        cout << "Enter ID for student " << i + 1 << ": ";
        cin >> students[i].ID;
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >> students[i].grade;
        cin.ignore(); // Clear the newline
    }

    string filename = "Files/students.txt";

    // Write student information to file
    ofstream outFile(filename);
    for (int i = 0; i < SIZE; i++)
    {
        outFile << students[i].name << endl;
        outFile << students[i].ID << endl;
        outFile << students[i].grade << endl;
    }
    outFile.close();

    // Read student information from file and calculate average
    ifstream inFile(filename);
    string name;
    int ID;
    double grade, sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        getline(inFile, name);
        inFile >> ID;
        inFile >> grade;
        inFile.ignore(); // Clear the newline
        sum += grade;
    }
    inFile.close();
    double average = sum / SIZE;

    // Append average to file
    ofstream outFileAppend(filename, ios::app);
    outFileAppend << "\nClass Average: " << average << endl;
    outFileAppend.close();

    cout << "Student information and average grade have been written to the file." << endl;

    return 0;
}