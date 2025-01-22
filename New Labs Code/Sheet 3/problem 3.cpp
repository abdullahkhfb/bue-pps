#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize the 2D array with integers
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    // Number of rows and columns
    int rows = 3;
    int cols = 4;

    // Declare a one-dimensional array to store the results of multiplication
    int result[cols];

    // Initialize the result array with 1 (multiplicative identity)
    for (int i = 0; i < cols; i++)
    {
        result[i] = 1;
    }

    // Loop through each column
    for (int j = 0; j < cols; j++)
    {
        // Multiply all elements in the current column
        for (int i = 0; i < rows; i++)
        {
            result[j] *= arr[i][j];
        }
    }

    // Print the results
    cout << "The results of multiplication for each column are: ";
    for (int i = 0; i < cols; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}