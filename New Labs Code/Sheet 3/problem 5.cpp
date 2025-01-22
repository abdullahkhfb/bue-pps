#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize the 2D array with grades
    int grades[3][4] = {
        {50, 60, 70, 80},
        {55, 65, 75, 85},
        {60, 70, 80, 90}};

    // Number of students (rows) and number of grades per student (columns)
    int numStudents = 3;
    int numGrades = 4;

    // Variable to store the total sum of all grades
    int totalSum = 0;
    int totalGrades = numStudents * numGrades;

    // Loop through each student to calculate the average grade
    for (int i = 0; i < numStudents; i++)
    {
        int sum = 0;
        for (int j = 0; j < numGrades; j++)
        {
            sum += grades[i][j];
        }
        // Calculate the average grade for the current student
        // Here, sum is an integer and numGrades is also an integer.
        // To ensure the division is performed as floating-point division,
        // we multiply sum by 1.0, which is a double. This converts sum to a double.
        // The division (sum * 1.0) / numGrades is then performed as floating-point division,
        // resulting in a double value for the average.
        double average = (sum * 1.0) / numGrades; // Implicit type conversion
        cout << "Student " << (i + 1) << " average grade is " << average << endl;
        totalSum += sum;
    }

    // Calculate the overall average grade for all students
    // Similar to the above, we multiply totalSum by 1.0 to convert it to a double
    // before performing the division. This ensures the division is floating-point,
    // resulting in a double value for the overall average.
    double overallAverage = (totalSum * 1.0) / totalGrades; // Implicit type conversion
    cout << "Students average is " << overallAverage << endl;

    return 0;
}