#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize the 2D array with integers
    int arr[3][5] = {
        {10, 21, 32, 43, 54},
        {65, 76, 87, 98, 109},
        {110, 121, 132, 143, 154}};

    // Variable to count the number of odd numbers
    int oddCount = 0;

    // Loop through the array to count the odd numbers
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] % 2 != 0)
            { // Check if the number is odd
                oddCount++;
            }
        }
    }

    // Print the count of odd numbers
    cout << "The number of odd numbers in the array is: " << oddCount << endl;

    return 0;
}