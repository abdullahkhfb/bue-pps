#include <iostream>
#include <string>
using namespace std;

void validateStudentID(string id)
{
    if (id[0] != '2')
    {
        throw "Invalid ID: ID must start with '2'";
    }
}

int main()
{
    string studentID;
    bool validID = false;

    while (!validID)
    {
        try
        {
            cout << "Enter student ID: ";
            cin >> studentID;

            validateStudentID(studentID);
            validID = true;
            cout << "Valid student ID entered!" << endl;
        }
        catch (const char *msg)
        {
            cout << msg << endl;
            cout << "Please try again." << endl;
        }
    }

    return 0;
}