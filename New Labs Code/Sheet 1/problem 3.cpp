#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    int largest;

    // Determine the largest number using nested if statements
    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            largest = num1;
        }
        else
        {
            largest = num3;
        }
    }
    else
    {
        if (num2 >= num3)
        {
            largest = num2;
        }
        else
        {
            largest = num3;
        }
    }

    // Display the largest number with a proper message
    cout << "The largest number is: " << largest << endl;

    return 0;
}