#include <iostream>
using namespace std;

// Function to swap elements from beginning to end
void swapElements(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices toward middle
        start++;
        end--;
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

    // Get array size from user
    cout << "Enter the size of array: ";
    cin >> size;

    // Create and populate array
    int arr[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, size);

    // Swap elements
    swapElements(arr, size);

    cout << "Array after swapping: ";
    printArray(arr, size);

    return 0;
}