#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2, result;

    // Prompt the user to enter an operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the calculation based on the operator
    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator." << endl;
        break;
    }

    return 0;
}