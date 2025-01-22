#include <iostream>
using namespace std;

bool isIdentical(int matrix1[][3], int matrix2[][3], int rows, int cols)
{
    // Compare each element of both matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    // Example matrices (3x3)
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int matrix2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Check if matrices are identical
    bool result = isIdentical(matrix1, matrix2, 3, 3);

    // Output the result
    if (result)
    {
        cout << "The matrices are identical" << endl;
    }
    else
    {
        cout << "The matrices are not identical" << endl;
    }

    return 0;
}