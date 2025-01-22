#include <iostream>
using namespace std;

int main()
{
    int start, end;
    int sum = 0;

    // Get range from user
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    // Create pointer to start value
    int *ptr = &start;

    // This loop calculates sum of all numbers from start to end using pointer
    // For example: if start=2, end=5
    // First iteration: *ptr + 0 = 2  (adds 2 to sum)
    // Second iteration: *ptr + 1 = 3 (adds 3 to sum)
    // Third iteration: *ptr + 2 = 4  (adds 4 to sum)
    // Fourth iteration: *ptr + 3 = 5 (adds 5 to sum)
    for (int i = 0; i <= (end - start); i++)
    {
        sum += (*ptr + i);
    }

    // Display result
    cout << "Sum of numbers from " << start << " to " << end << " = " << sum << endl;

    return 0;
}