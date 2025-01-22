#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize the 2D array with integers
    int arr[3][5] = {
        {10, 20, 30, 40, 50},
        {5, 15, 25, 35, 45},
        {1, 2, 3, 4, 5}};

    // Initialize the largest and smallest values with the first element of the array
    int largest = arr[0][0];
    int smallest = arr[0][0];

    // Loop through the array to find the largest and smallest values
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }

    // Print the largest and smallest values
    cout << "The largest value in the array is: " << largest << endl;
    cout << "The smallest value in the array is: " << smallest << endl;

    return 0;
}