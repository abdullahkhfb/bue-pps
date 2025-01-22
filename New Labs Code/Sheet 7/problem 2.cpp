#include <iostream>
#include <string>
using namespace std;

// Define the student structure
struct Student
{
    string name;
    int age;
};

// Function to get information about students
void getStudentInfo(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter student " << (i + 1) << " name: ";
        cin >> students[i].name;
        cout << "Enter student " << (i + 1) << " age: ";
        cin >> students[i].age;
    }
}

// Function to print students aged 14 or older
void printStudentsAbove14(Student students[], int size)
{
    cout << "\nStudents aged 14 or older:\n";
    for (int i = 0; i < size; i++)
    {
        if (students[i].age >= 14)
        {
            cout << "Name: " << students[i].name << ", Age: " << students[i].age << endl;
        }
    }
}

int main()
{
    const int SIZE = 5; // Size of the student array
    Student students[SIZE];

    // Get information about students
    getStudentInfo(students, SIZE);

    // Print students aged 14 or older
    printStudentsAbove14(students, SIZE);

    return 0;
}