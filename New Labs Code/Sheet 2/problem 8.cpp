#include <iostream>
using namespace std;

int main()
{
    // Initialize the array of characters
    char arr[] = {'A', 'B', 'A', 'A', 'B', 'C', 'C', 'B', 'D', 'D'};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Create an array to store the count of each character (assuming only uppercase letters)
    int count[26] = {0};

    // Loop through the array to count the occurrences of each character
    for (int i = 0; i < n; i++)
    {
        /*
         * This line counts the frequency of each letter in the array.
         * It works by:
         * - Taking a character from arr[i] (like 'A', 'B', 'C', etc.)
         * - Converting it to a number 0-25 by subtracting 'A'
         *   ('A' becomes 0, 'B' becomes 1, etc.)
         * - Using that number as an index in the count array
         * - Incrementing the counter for that letter
         *
         * For example:
         * - For 'B', 'B'-'A' = 1, so we increment count[1]
         * - For 'A', 'A'-'A' = 0, so we increment count[0]
         * - For 'C', 'C'-'A' = 2, so we increment count[2]
         *
         * This builds a frequency table showing how many times
         * each letter appears in the array.
         */
        count[arr[i] - 'A']++;
    }

    // Print the count of occurrences for each character in the array
    for (int i = 0; i < n; i++)
    {
        cout << "Letter " << arr[i] << " is repeated " << count[arr[i] - 'A'] << " times." << endl;
    }

    return 0;
}