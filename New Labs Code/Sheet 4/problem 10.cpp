#include <iostream>
using namespace std;

// Function to find absolute value of an integer
int absolute(int num)
{
    return (num < 0) ? -num : num;
}

// Function to find absolute value of a double
double absolute(double num)
{
    return (num < 0) ? -num : num;
}

int main()
{
    int intNum;
    double doubleNum;

    // Test integer absolute value
    cout << "Enter an integer number: ";
    cin >> intNum;
    cout << "Absolute value of " << intNum << " is: " << absolute(intNum) << endl;

    // Test double absolute value
    cout << "Enter a decimal number: ";
    cin >> doubleNum;
    cout << "Absolute value of " << doubleNum << " is: " << absolute(doubleNum) << endl;

    return 0;
}

/*
 * These functions calculate the absolute value of a number using the ternary operator
 *
 * How the ternary operator works:
 * condition ? value_if_true : value_if_false
 *
 * In this case:
 * (num < 0) ? -num : num
 *
 * Breaking it down:
 * - If num is less than 0: returns -num (converts negative to positive)
 * - If num is 0 or positive: returns num unchanged
 *
 * Examples:
 * Input: -5 → Output: 5
 * Input: 3  → Output: 3
 * Input: 0  → Output: 0
 *
 * This is equivalent to writing:
 * if (num < 0)
 * {
 *     return -num;
 * }
 * else
 * {
 *     return num;
 * }
 *
 * The ternary operator provides a concise way to write simple conditional logic
 * in a single line, making the code more compact and readable.
 *
 * For more information Visit: https://www.programiz.com/cpp-programming/ternary-operator
 */