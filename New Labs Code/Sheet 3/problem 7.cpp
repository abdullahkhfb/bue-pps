#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize the 2D array of characters (4x5)
    char puzzle[4][5] = {
        {'A', 'C', 'A', 'T', 'N'},
        {'F', 'M', 'D', 'O', 'G'},
        {'K', 'I', 'T', 'M', 'S'},
        {'A', 'F', 'A', 'P', 'Q'}};

    // Get the word to search for from the user
    string word;
    cout << "Enter the word you are searching for: ";
    cin >> word;

    // Check if the word length is 3 using a while loop
    while (word.length() != 3)
    {
        cout << "Please enter a word of exactly 3 letters: ";
        cin >> word;
    }

    // Variable to track if the word is found
    bool found = false;

    // Loop through the array to search for the word horizontally
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        { // Only go up to the third last column
            // Check if the current position and the next two positions horizontally match the word
            if (puzzle[i][j] == word[0] && puzzle[i][j + 1] == word[1] && puzzle[i][j + 2] == word[2])
            {
                // If a match is found, print the starting position of the word
                cout << "The word is found starting from row " << i << " and column " << j << "." << endl;
                // Set the found flag to true
                found = true;
                // Break out of the inner loop since the word has been found
                break;
            }
        }
        // If the word has been found, break out of the outer loop as well
        if (found)
        {
            break;
        }
    }

    // If the word is not found, print a message
    if (!found)
    {
        cout << "The word is not found." << endl;
    }

    return 0;
}

/*
Explanation of the condition:
if (puzzle[i][j] == word[0] && puzzle[i][j + 1] == word[1] && puzzle[i][j + 2] == word[2])

1. Overall Purpose:
   - This `if` statement checks if the three consecutive characters in the 2D array `puzzle` starting from position `(i, j)` match the three characters of the `word`.

2. Breaking Down the Condition:
   - `puzzle[i][j] == word[0]`:
     - This checks if the character at row `i` and column `j` in the `puzzle` array matches the first character of the `word`.
     - `puzzle[i][j]` accesses the element in the `puzzle` array at row `i` and column `j`.
     - `word[0]` accesses the first character of the `word`.
     - If `puzzle[i][j]` is equal to `word[0]`, this part of the condition is `true`.

   - `puzzle[i][j + 1] == word[1]`:
     - This checks if the character at row `i` and column `j + 1` in the `puzzle` array matches the second character of the `word`.
     - `puzzle[i][j + 1]` accesses the element in the `puzzle` array at row `i` and column `j + 1`.
     - `word[1]` accesses the second character of the `word`.
     - If `puzzle[i][j + 1]` is equal to `word[1]`, this part of the condition is `true`.

   - `puzzle[i][j + 2] == word[2]`:
     - This checks if the character at row `i` and column `j + 2` in the `puzzle` array matches the third character of the `word`.
     - `puzzle[i][j + 2]` accesses the element in the `puzzle` array at row `i` and column `j + 2`.
     - `word[2]` accesses the third character of the `word`.
     - If `puzzle[i][j + 2]` is equal to `word[2]`, this part of the condition is `true`.

3. Combining the Conditions:
   - The `&&` (logical AND) operator is used to combine the three conditions.
   - The entire `if` statement evaluates to `true` only if all three conditions are `true`.
   - This means that the characters at positions `(i, j)`, `(i, j + 1)`, and `(i, j + 2)` in the `puzzle` array must match the first, second, and third characters of the `word`, respectively.

Example:
Let's say the `puzzle` array and `word` are as follows:

char puzzle[4][5] = {
    {'A', 'C', 'A', 'T', 'N'},
    {'F', 'M', 'D', 'O', 'G'},
    {'K', 'I', 'T', 'M', 'S'},
    {'A', 'F', 'A', 'P', 'Q'}
};

string word = "DOG";

- If `i = 1` and `j = 2`, the condition checks:
  - `puzzle[1][2] == word[0]` -> `D == D` (true)
  - `puzzle[1][3] == word[1]` -> `O == O` (true)
  - `puzzle[1][4] == word[2]` -> `G == G` (true)

Since all three conditions are `true`, the `if` statement evaluates to `true`, indicating that the word "DOG" is found starting from row 1 and column 2.
*/