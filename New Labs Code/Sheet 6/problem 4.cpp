#include <iostream>
using namespace std;

// Function to convert odd numbers to even by adding 1
void convertToEven(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {                // Check if number is odd
            arr[i] += 1; // Add 1 to make it even
        }
    }
}

// Function to print array elements
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, size);

    convertToEven(arr, size);

    cout << "Array after converting odd numbers to even: ";
    printArray(arr, size);

    return 0;
}