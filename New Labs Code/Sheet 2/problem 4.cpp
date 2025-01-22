#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Initialize the arrays
    string studentNames[] = {"Ahmed Ali", "Mona Kamal", "Karim Fouad", "Nada Saleh"};
    int studentIDs[] = {231456, 238967, 239564, 201568};
    int n = sizeof(studentIDs) / sizeof(studentIDs[0]); // Calculate the number of elements in the arrays

    // Print the information of each student
    cout << "Student Information:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << studentIDs[i] << " " << studentNames[i] << endl;
    }

    return 0;
}