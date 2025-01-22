#include <iostream>
using namespace std;

int main()
{
    // Number of rows for the triangle
    int rows = 5;

    // Loop to print each row
    for (int i = rows; i > 0; i--)
    {
        // Loop to print letters in each row
        for (int j = 0; j < i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl; // Move to the next line after printing letters in a row
    }

    return 0;
}