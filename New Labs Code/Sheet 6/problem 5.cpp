#include <iostream>
using namespace std;

void convertToLower(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (isupper(arr[i]))
        {
            arr[i] = tolower(arr[i]);
        }
    }
}

void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int SIZE = 10;
    char characters[SIZE];

    cout << "Enter " << SIZE << " characters: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> characters[i];
    }

    cout << "Original array: ";
    printArray(characters, SIZE);

    convertToLower(characters, SIZE);

    cout << "Array after conversion: ";
    printArray(characters, SIZE);

    return 0;
}