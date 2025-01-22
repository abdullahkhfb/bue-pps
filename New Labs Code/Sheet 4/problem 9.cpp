
#include <iostream>
#include <string>
using namespace std;

// Function declarations
void getInput();
int setSalary(string position);

// Function to get employee information and display it
void getInput()
{
    string name, position, nationalId;

    // Get employee information
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter national ID: ";
    getline(cin, nationalId);

    cout << "Enter position (manager/staff/admin): ";
    getline(cin, position);

    // Get salary based on position
    int salary = setSalary(position);

    // Display all employee information
    cout << "\nEmployee Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "National ID: " << nationalId << endl;
    cout << "Position: " << position << endl;
    cout << "Salary: " << salary << endl;
}

// Function to determine salary based on position
int setSalary(string position)
{
    if (position == "manager")
    {
        return 100000;
    }
    else if (position == "staff")
    {
        return 50000;
    }
    else if (position == "admin")
    {
        return 40000;
    }
    else
    {
        return 0; // Invalid position
    }
}

int main()
{
    getInput();
    return 0;
}