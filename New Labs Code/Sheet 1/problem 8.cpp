#include <iostream>
using namespace std;

int main()
{
    int rows;
    int number = 1;

    // Prompt the user to enter the number of rows
    cout << "Enter number of rows: ";
    cin >> rows;

    // Loop to print each row
    for (int i = 1; i <= rows; i++)
    {
        // Loop to print numbers in each row
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl; // Move to the next line after printing numbers in a row
    }

    return 0;
}