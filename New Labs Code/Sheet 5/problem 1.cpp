#include <iostream>
using namespace std;

int main()
{
    // Initialize two character variables
    char firstChar = 'A';
    char secondChar = 'B';

    // Declare and assign pointers to the variables
    char *ptrFirst = &firstChar;
    char *ptrSecond = &secondChar;

    // Print original values
    cout << "Original values:" << endl;
    cout << "First char: " << firstChar << endl;
    cout << "Second char: " << secondChar << endl;

    // Change values using pointers
    *ptrFirst = 'X';
    *ptrSecond = 'Y';

    // Print new values using pointers
    cout << "\nNew values using pointers:" << endl;
    cout << "First char: " << *ptrFirst << endl;
    cout << "Second char: " << *ptrSecond << endl;

    // Print new values using original variables
    cout << "\nNew values using original variables:" << endl;
    cout << "First char: " << firstChar << endl;
    cout << "Second char: " << secondChar << endl;

    return 0;
}