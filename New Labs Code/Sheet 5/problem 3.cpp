#include <iostream>
using namespace std;

int main()
{
    // Declare three integer variables
    int num1 = 5;
    int num2 = 10;
    int num3 = 15;

    // Create three pointers and assign them to the variables
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr3 = &num3;

    // i. First addition and multiplication using pointers
    cout << "Initial values: " << *ptr1 << ", " << *ptr2 << ", " << *ptr3 << endl;
    cout << "Addition: " << *ptr1 + *ptr2 + *ptr3 << endl;
    cout << "Multiplication: " << *ptr1 * *ptr2 * *ptr3 << endl;

    // ii. Change the values of the variables
    *ptr1 = 20;
    *ptr2 = 25;
    *ptr3 = 30;

    // iii. Repeat addition and multiplication with new values
    cout << "\nNew values: " << *ptr1 << ", " << *ptr2 << ", " << *ptr3 << endl;
    cout << "Addition: " << *ptr1 + *ptr2 + *ptr3 << endl;
    cout << "Multiplication: " << *ptr1 * *ptr2 * *ptr3 << endl;

    return 0;
}