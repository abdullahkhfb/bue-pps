#include <iostream>
using namespace std;

int calculateRangeSum(int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int start, end;

    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;

    int result = calculateRangeSum(start, end);
    cout << "The sum of numbers from " << start << " to " << end << " is: " << result << endl;

    return 0;
}