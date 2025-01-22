#include <iostream>
#include <string>
using namespace std;

string reverseString(string str)
{
    string reversed = "";

    // Iterates through the input string in reverse order, appending each character to the `reversed` string.
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    return reversed;
}

int main()
{
    string input;

    cout << "Enter a string:" << endl;
    getline(cin, input);

    string reversedString = reverseString(input);
    cout << reversedString << endl;

    return 0;
}