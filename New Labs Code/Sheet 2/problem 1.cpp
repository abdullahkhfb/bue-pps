#include <iostream>
using namespace std;

int main()
{
    // Define the array of integers
    int arr[] = {60, 80, 50, 20, 70};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Initialize the maximum number with the first element of the array
    int maxNumber = arr[0];

    // Loop through the array to find the maximum number
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
    }

    // Output the maximum number
    cout << "The maximum number is " << maxNumber << endl;

    return 0;
}