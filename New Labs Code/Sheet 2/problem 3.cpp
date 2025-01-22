#include <iostream>
using namespace std;

int main()
{
    // Initialize the array of integers
    int arr[] = {10, 21, 32, 43, 54, 65, 76, 87, 98, 109};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Loop through the array to find and print odd numbers and their indexes
    cout << "Odd numbers and their indexes:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        { // Check if the number is odd
            cout << "Index: " << i << ", Value: " << arr[i] << endl;
        }
    }

    return 0;
}