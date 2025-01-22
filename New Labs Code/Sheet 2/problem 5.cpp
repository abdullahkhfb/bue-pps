#include <iostream>
using namespace std;

int main()
{
    // Initialize the array with the first two numbers
    int arr[10] = {1, 2};

    // Fill the rest of the array
    for (int i = 2; i < 10; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2]; // Each element starting from index 2 is the sum of its previous two elements
    }

    // Print the array elements
    cout << "The output array is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}