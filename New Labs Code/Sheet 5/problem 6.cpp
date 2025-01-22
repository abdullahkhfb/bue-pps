#include <iostream>
using namespace std;

int main()
{
    int size;

    // Get array size from user
    cout << "Enter the size of array: ";
    cin >> size;

    // Declare and initialize the array
    int arr[size];

    // Input array elements
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Declare pointer and initialize it to point to first element
    int *ptr = arr;
    int sum = 0;

    // Calculate sum using pointer arithmetic
    for (int i = 0; i < size; i++)
    {
        sum += *ptr; // Add value pointed to by ptr
        ptr++;       // Move pointer to next element
    }

    // Display the sum
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}