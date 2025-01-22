#include <iostream>
using namespace std;

/*
The recursive case works by:
1. arr[0] represents the current element being examined
2. findMin(arr + 1, size - 1) gets the minimum from the remaining portion of array
3. min() function compares these two values

Example with array [5,3,1,4]:
- First call compares 5 with min of [3,1,4]
- Second call compares 3 with min of [1,4]
- Third call compares 1 with min of [4]
- Fourth call hits base case with single element 4
- Results bubble back up through min() comparisons
*/

int findMin(int arr[], int size)
{
    // Base case: if array has only one element
    if (size == 1)
    {
        return arr[0];
    }

    // Recursive case: compare current element with minimum of rest of array
    return min(arr[0], findMin(arr + 1, size - 1));
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[100];
    cout << "Enter " << size << " positive integers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Minimum element in array: " << findMin(arr, size) << endl;

    return 0;
}