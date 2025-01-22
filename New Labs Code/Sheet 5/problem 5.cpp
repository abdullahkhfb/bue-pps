#include <iostream>
using namespace std;

// Function to swap two integers using pointers
void swapNumbers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    // Declare and initialize two integers
    int num1, num2;

    // Get input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Print original values
    cout << "\nBefore swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    // Call swap function with addresses of num1 and num2
    swapNumbers(&num1, &num2);

    // Print swapped values
    cout << "\nAfter swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}