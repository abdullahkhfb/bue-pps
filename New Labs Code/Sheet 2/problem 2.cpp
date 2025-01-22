#include <iostream>
using namespace std;

int main()
{
    // Define the array of integers
    int arr[] = {60, 80, 50, 20, 70};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Initialize the maximum and minimum numbers with the first element of the array
    int maxNumber = arr[0];
    int minNumber = arr[0];

    // Loop through the array to find the maximum and minimum numbers
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
        }
    }

    // Calculate the difference between the maximum and minimum numbers
    int difference = maxNumber - minNumber;

    // Output the maximum number, minimum number, and the difference
    cout << "The maximum number is " << maxNumber << endl;
    cout << "The minimum number is " << minNumber << endl;
    cout << "The difference between the maximum and minimum numbers is " << difference << endl;

    return 0;
}