
#include <iostream>
using namespace std;

void calculateAverage(int matrix[][5], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        double sum = 0;
        // Calculate sum of each row (excluding last column)
        for (int j = 0; j < 4; j++)
        {
            sum += matrix[i][j];
        }
        // Calculate and store average in last column
        matrix[i][4] = sum / 4;
    }
}

void printMatrix(int matrix[][5], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    // Initialize matrix with example data
    int matrix[3][5] = {
        {10, 20, 30, 40, 0},
        {11, 25, 30, 80, 0},
        {35, 66, 88, 97, 0}};

    // Calculate averages
    calculateAverage(matrix, 3);

    // Print the resulting matrix
    cout << "Matrix with averages in last column:" << endl;
    printMatrix(matrix, 3);

    return 0;
}