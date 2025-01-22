#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize the first matrix (3x1)
    int matrix1[3][1] = {
        {4},
        {5},
        {6}};

    // Declare and initialize the second matrix (1x3)
    int matrix2[1][3] = {
        {1, 2, 3}};

    // Declare the result matrix (3x3) and initialize it to 0
    int result[3][3] = {0};

    // Perform matrix multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Multiply the element in the ith row of matrix1 by the element in the jth column of matrix2
            // and store the result in the ith row and jth column of the result matrix.
            // Since matrix1 is 3x1, we always use the first (and only) column of matrix1, which is matrix1[i][0].
            // Since matrix2 is 1x3, we always use the first (and only) row of matrix2, which is matrix2[0][j].
            result[i][j] = matrix1[i][0] * matrix2[0][j];
        }
    }

    // Print the result matrix
    cout << "The result of matrix multiplication is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}