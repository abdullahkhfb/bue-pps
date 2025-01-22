#include <iostream>
#include <string>
using namespace std;

void getInput()
{
    string fullName;
    string studentId;

    // Get student's full name
    cout << "Enter your full name: ";
    getline(cin, fullName);

    // Get student's ID
    cout << "Enter your student ID: ";
    getline(cin, studentId);

    // Print the information
    cout << "\nStudent Information:" << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Student ID: " << studentId << endl;
}

int main()
{
    // Call the function to get and display student information
    getInput();
    return 0;
}