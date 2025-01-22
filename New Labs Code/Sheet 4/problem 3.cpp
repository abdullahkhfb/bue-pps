#include <iostream>
using namespace std;

// Function a) that prints the result from inside
void checkNumber(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " is even" << endl;
    }
    else
    {
        cout << num << " is odd" << endl;
    }
}

// Function b) that returns true for even, false for odd
bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Using function a)
    cout << "Result using function a: ";
    checkNumber(number);

    // Using function b)
    cout << "Result using function b: ";
    if (isEven(number))
    {
        cout << number << " is even" << endl;
    }
    else
    {
        cout << number << " is odd" << endl;
    }

    return 0;
}