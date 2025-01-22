#include <iostream>
using namespace std;

// Function to find minimum number in array
int findMinimum(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// Function to decrement each element by minimum value
void decrementByMin(int arr[], int size, int minValue)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] -= minValue;
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
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, size);

    int minValue = findMinimum(arr, size);
    cout << "Minimum value: " << minValue << endl;

    decrementByMin(arr, size, minValue);
    cout << "Array after decrementing by minimum value: ";
    printArray(arr, size);

    return 0;
}