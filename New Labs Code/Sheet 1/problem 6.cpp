#include <iostream>
using namespace std;

int main()
{
    // Number of rows for the triangle
    int rows = 5;

    // Loop to print each row
    for (int i = rows; i > 0; i--)
    {
        // Loop to print stars in each row
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl; // Move to the next line after printing stars in a row
    }

    return 0;
}