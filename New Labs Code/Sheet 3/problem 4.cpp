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

    // Ask the user to input a number
    int number;
    cout << "Enter a number to search for: ";
    cin >> number;

    // Variable to track if the number is found
    bool found = false;

    // Loop through the array to search for the number
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == number)
            {
                cout << "Number " << number << " found at row " << i << " and column " << j << "." << endl;
                found = true;
                break; // Exit the inner loop if the number is found
            }
        }
        if (found)
        {
            break; // Exit the outer loop if the number is found
        }
    }

    // If the number is not found, print a message
    if (!found)
    {
        cout << "Number " << number << " not found in the array." << endl;
    }

    return 0;
}