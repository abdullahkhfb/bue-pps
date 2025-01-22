#include <iostream>
using namespace std;

int findMin(int arr[], int size)
{
    if (size == 1)
        return arr[0];
    return min(arr[size - 1], findMin(arr, size - 1));
}

int findMax(int arr[], int size)
{
    if (size == 1)
        return arr[0];
    return max(arr[size - 1], findMax(arr, size - 1));
}

int findDiff(int arr[], int size)
{
    return findMax(arr, size) - findMin(arr, size);
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Difference between max and min: " << findDiff(arr, size) << endl;

    return 0;
}