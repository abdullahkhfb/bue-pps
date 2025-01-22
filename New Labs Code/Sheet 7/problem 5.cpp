#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int ID;
    string name;
    double salary;
    double performance;
};

void getEmployeeInfo(Employee employees[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> employees[i].ID;
        cout << "Name: ";
        cin.ignore();                    // This clears the newline character left in the buffer
        getline(cin, employees[i].name); // Now getline() can correctly read the full line of input
        cout << "Salary: ";
        cin >> employees[i].salary;
        cout << "Performance (%): ";
        cin >> employees[i].performance;
    }
}

void updateSalary(Employee employees[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (employees[i].performance >= 80)
        {
            employees[i].salary *= 0.2;
        }
    }
}

void printEmployeeData(const Employee employees[], int size)
{
    cout << "\nEmployee Data After Salary Updates:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "ID: " << employees[i].ID << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << "Performance: " << employees[i].performance << "%" << endl;
    }
}

int main()
{
    const int SIZE = 3;
    Employee employees[SIZE];

    getEmployeeInfo(employees, SIZE);
    updateSalary(employees, SIZE);
    printEmployeeData(employees, SIZE);

    return 0;
}